// main162.cc is a part of the PYTHIA event generator.
// Copyright (C) 2022 Torbjorn Sjostrand.
// PYTHIA is licenced under the GNU GPL v2 or later, see COPYING for details.
// Please respect the MCnet Guidelines, see GUIDELINES for details.

// Authors: Marius Utheim <marius.utheim@thep.lu.se>.

// Keywords: parallelism; charged multiplicity;

// This is a simple test program to illustrate the usage of PythiaParallel.
// The program is equivalent to main01, but in parallel.
// This program contains detailed comments about how the code works. For a
// shorter version that fits on a single slide, see main161.

#include "Pythia8/Pythia.h"
#include "Pythia8/PythiaParallel.h"
using namespace Pythia8;
int main() {

  // Use the PythiaParallel class instead of Pythia for parallel generation.
  // It will create multiple underlying Pythia instances to do the actual
  // generation; one instance per thread.
  PythiaParallel pythia;

  // PythiaParallel reads settings the same way as the normal Pythia does.
  // The settings will be copied for each Pythia instance.
  pythia.readString("Beams:eCM = 8000.");
  pythia.readString("HardQCD:all = on");
  pythia.readString("PhaseSpace:pTHatMin = 20.");

  // The maximum degree of parallelism. If set to 0 (default), the program
  // will use the maximum number of threads supported by the hardware.
  pythia.readString("Parallelism:numThreads = 4");

  // This defines the number of events generated by PythiaParallel::run.
  pythia.readString("Main:numberOfEvents = 10000");

  // This will create and initialize each underlying Pythia instance.
  pythia.init();

  // Define histogram.
  Hist mult("charged multiplicity", 100, -0.5, 799.5);

  // Use PythiaParallel::run to generate the specified number of events.
  pythia.run(
    // This defines a lambda function that acts as a callback.
    // This function is called for each event generated.
    // The argument is the Pythia instance that generated the event.
    [&](Pythia& pythiaNow) {

      // pythiaNow gives a reference to the instance that generated the event.
      Event& event = pythiaNow.event;

      // Find number of all final charged particles and fill histogram.
      int nCharged = 0;
      for (int i = 0; i < event.size(); ++i)
        if (event[i].isFinal() && event[i].isCharged())
          ++nCharged;

      // Fill histogram. Note that this callback is called synchronously,
      // which ensures two threads cannot write to histogram at the same time.
      mult.fill( nCharged );

  });

  // PythiaParallel::stat combines statistics for each Pythia instance.
  pythia.stat();

  // Output histogram.
  cout << mult;
  return 0;
}

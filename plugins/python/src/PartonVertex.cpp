#include <Pythia8/Basics.h>
#include <Pythia8/BeamParticle.h>
#include <Pythia8/Event.h>
#include <Pythia8/HadronWidths.h>
#include <Pythia8/Info.h>
#include <Pythia8/LHEF3.h>
#include <Pythia8/MergingHooks.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/PartonLevel.h>
#include <Pythia8/PartonSystems.h>
#include <Pythia8/PartonVertex.h>
#include <Pythia8/PhysicsBase.h>
#include <Pythia8/RHadrons.h>
#include <Pythia8/ResonanceWidths.h>
#include <Pythia8/Settings.h>
#include <Pythia8/SigmaLowEnergy.h>
#include <Pythia8/SigmaTotal.h>
#include <Pythia8/SpaceShower.h>
#include <Pythia8/StandardModel.h>
#include <Pythia8/StringInteractions.h>
#include <Pythia8/SusyCouplings.h>
#include <Pythia8/TimeShower.h>
#include <Pythia8/Weights.h>
#include <functional>
#include <ios>
#include <istream>
#include <iterator>
#include <map>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <streambuf>
#include <string>
#include <utility>
#include <vector>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <Pythia8/UserHooks.h>
#include <Pythia8/HIUserHooks.h>
#include <Pythia8/HeavyIons.h>
#include <Pythia8/BeamShape.h>
#include <pybind11/stl.h>
#include <pybind11/complex.h>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// Pythia8::PartonVertex file:Pythia8/PartonVertex.h line:24
struct PyCallBack_Pythia8_PartonVertex : public Pythia8::PartonVertex {
	using Pythia8::PartonVertex::PartonVertex;

	void init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonVertex *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PartonVertex::init();
	}
	void vertexBeam(int a0, class std::vector<int, class std::allocator<int> > & a1, class std::vector<int, class std::allocator<int> > & a2, class Pythia8::Event & a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonVertex *>(this), "vertexBeam");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PartonVertex::vertexBeam(a0, a1, a2, a3);
	}
	void vertexMPI(int a0, int a1, double a2, class Pythia8::Event & a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonVertex *>(this), "vertexMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PartonVertex::vertexMPI(a0, a1, a2, a3);
	}
	void vertexFSR(int a0, class Pythia8::Event & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonVertex *>(this), "vertexFSR");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PartonVertex::vertexFSR(a0, a1);
	}
	void vertexISR(int a0, class Pythia8::Event & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonVertex *>(this), "vertexISR");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PartonVertex::vertexISR(a0, a1);
	}
	void vertexHadrons(int a0, class Pythia8::Event & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonVertex *>(this), "vertexHadrons");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PartonVertex::vertexHadrons(a0, a1);
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonVertex *>(this), "onInitInfoPtr");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onInitInfoPtr();
	}
	void onBeginEvent() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonVertex *>(this), "onBeginEvent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onBeginEvent();
	}
	void onEndEvent(enum Pythia8::PhysicsBase::Status a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonVertex *>(this), "onEndEvent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onEndEvent(a0);
	}
	void onStat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonVertex *>(this), "onStat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onStat();
	}
};

// Pythia8::HardProcess file:Pythia8/MergingHooks.h line:38
struct PyCallBack_Pythia8_HardProcess : public Pythia8::HardProcess {
	using Pythia8::HardProcess::HardProcess;

	void initOnProcess(class std::basic_string<char> a0, class Pythia8::ParticleData * a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardProcess *>(this), "initOnProcess");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HardProcess::initOnProcess(a0, a1);
	}
	void translateProcessString(class std::basic_string<char> a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardProcess *>(this), "translateProcessString");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HardProcess::translateProcessString(a0);
	}
	bool allowCandidates(int a0, class std::vector<int, class std::allocator<int> > a1, class std::vector<int, class std::allocator<int> > a2, const class Pythia8::Event & a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardProcess *>(this), "allowCandidates");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HardProcess::allowCandidates(a0, a1, a2, a3);
	}
	void storeCandidates(const class Pythia8::Event & a0, class std::basic_string<char> a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardProcess *>(this), "storeCandidates");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HardProcess::storeCandidates(a0, a1);
	}
	bool matchesAnyOutgoing(int a0, const class Pythia8::Event & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardProcess *>(this), "matchesAnyOutgoing");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HardProcess::matchesAnyOutgoing(a0, a1);
	}
	bool findOtherCandidates(int a0, const class Pythia8::Event & a1, bool a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardProcess *>(this), "findOtherCandidates");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HardProcess::findOtherCandidates(a0, a1, a2);
	}
};

// Pythia8::MergingHooks file:Pythia8/MergingHooks.h line:166
struct PyCallBack_Pythia8_MergingHooks : public Pythia8::MergingHooks {
	using Pythia8::MergingHooks::MergingHooks;

	double tmsDefinition(const class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "tmsDefinition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return MergingHooks::tmsDefinition(a0);
	}
	double dampenIfFailCuts(const class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "dampenIfFailCuts");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return MergingHooks::dampenIfFailCuts(a0);
	}
	bool canCutOnRecState() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "canCutOnRecState");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return MergingHooks::canCutOnRecState();
	}
	bool doCutOnRecState(const class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "doCutOnRecState");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return MergingHooks::doCutOnRecState(a0);
	}
	bool canVetoTrialEmission() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "canVetoTrialEmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return MergingHooks::canVetoTrialEmission();
	}
	bool doVetoTrialEmission(const class Pythia8::Event & a0, const class Pythia8::Event & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "doVetoTrialEmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return MergingHooks::doVetoTrialEmission(a0, a1);
	}
	double hardProcessME(const class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "hardProcessME");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return MergingHooks::hardProcessME(a0);
	}
	void init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return MergingHooks::init();
	}
	int getNumberOfClusteringSteps(const class Pythia8::Event & a0, bool a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "getNumberOfClusteringSteps");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return MergingHooks::getNumberOfClusteringSteps(a0, a1);
	}
	double tmsNow(const class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "tmsNow");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return MergingHooks::tmsNow(a0);
	}
	bool canVetoEmission() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "canVetoEmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return MergingHooks::canVetoEmission();
	}
	bool doVetoEmission(const class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "doVetoEmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return MergingHooks::doVetoEmission(a0);
	}
	bool usesVincia() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "usesVincia");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return MergingHooks::usesVincia();
	}
	bool useShowerPlugin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "useShowerPlugin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return MergingHooks::useShowerPlugin();
	}
	bool canVetoStep() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "canVetoStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return MergingHooks::canVetoStep();
	}
	bool doVetoStep(const class Pythia8::Event & a0, const class Pythia8::Event & a1, bool a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "doVetoStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return MergingHooks::doVetoStep(a0, a1, a2);
	}
	bool setShowerStartingScales(bool a0, bool a1, double & a2, const class Pythia8::Event & a3, double & a4, bool & a5, double & a6, bool & a7, double & a8, bool & a9) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "setShowerStartingScales");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return MergingHooks::setShowerStartingScales(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "onInitInfoPtr");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onInitInfoPtr();
	}
	void onBeginEvent() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "onBeginEvent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onBeginEvent();
	}
	void onEndEvent(enum Pythia8::PhysicsBase::Status a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "onEndEvent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onEndEvent(a0);
	}
	void onStat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MergingHooks *>(this), "onStat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onStat();
	}
};

void bind_Pythia8_PartonVertex(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::PartonVertex file:Pythia8/PartonVertex.h line:24
		pybind11::class_<Pythia8::PartonVertex, std::shared_ptr<Pythia8::PartonVertex>, PyCallBack_Pythia8_PartonVertex, Pythia8::PhysicsBase> cl(M("Pythia8"), "PartonVertex", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::PartonVertex(); }, [](){ return new PyCallBack_Pythia8_PartonVertex(); } ) );
		cl.def("init", (void (Pythia8::PartonVertex::*)()) &Pythia8::PartonVertex::init, "C++: Pythia8::PartonVertex::init() --> void");
		cl.def("vertexBeam", (void (Pythia8::PartonVertex::*)(int, class std::vector<int, class std::allocator<int> > &, class std::vector<int, class std::allocator<int> > &, class Pythia8::Event &)) &Pythia8::PartonVertex::vertexBeam, "C++: Pythia8::PartonVertex::vertexBeam(int, class std::vector<int, class std::allocator<int> > &, class std::vector<int, class std::allocator<int> > &, class Pythia8::Event &) --> void", pybind11::arg("iBeam"), pybind11::arg("iRemn"), pybind11::arg("iInit"), pybind11::arg("event"));
		cl.def("vertexMPI", (void (Pythia8::PartonVertex::*)(int, int, double, class Pythia8::Event &)) &Pythia8::PartonVertex::vertexMPI, "C++: Pythia8::PartonVertex::vertexMPI(int, int, double, class Pythia8::Event &) --> void", pybind11::arg("iBeg"), pybind11::arg("nAdd"), pybind11::arg("bNowIn"), pybind11::arg("event"));
		cl.def("vertexFSR", (void (Pythia8::PartonVertex::*)(int, class Pythia8::Event &)) &Pythia8::PartonVertex::vertexFSR, "C++: Pythia8::PartonVertex::vertexFSR(int, class Pythia8::Event &) --> void", pybind11::arg("iNow"), pybind11::arg("event"));
		cl.def("vertexISR", (void (Pythia8::PartonVertex::*)(int, class Pythia8::Event &)) &Pythia8::PartonVertex::vertexISR, "C++: Pythia8::PartonVertex::vertexISR(int, class Pythia8::Event &) --> void", pybind11::arg("iNow"), pybind11::arg("event"));
		cl.def("vertexHadrons", (void (Pythia8::PartonVertex::*)(int, class Pythia8::Event &)) &Pythia8::PartonVertex::vertexHadrons, "C++: Pythia8::PartonVertex::vertexHadrons(int, class Pythia8::Event &) --> void", pybind11::arg("nBefFrag"), pybind11::arg("event"));
		cl.def("assign", (class Pythia8::PartonVertex & (Pythia8::PartonVertex::*)(const class Pythia8::PartonVertex &)) &Pythia8::PartonVertex::operator=, "C++: Pythia8::PartonVertex::operator=(const class Pythia8::PartonVertex &) --> class Pythia8::PartonVertex &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::HardProcess file:Pythia8/MergingHooks.h line:38
		pybind11::class_<Pythia8::HardProcess, std::shared_ptr<Pythia8::HardProcess>, PyCallBack_Pythia8_HardProcess> cl(M("Pythia8"), "HardProcess", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::HardProcess(); }, [](){ return new PyCallBack_Pythia8_HardProcess(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_HardProcess const &o){ return new PyCallBack_Pythia8_HardProcess(o); } ) );
		cl.def( pybind11::init( [](Pythia8::HardProcess const &o){ return new Pythia8::HardProcess(o); } ) );
		cl.def( pybind11::init<std::string, class Pythia8::ParticleData *>(), pybind11::arg("LHEfile"), pybind11::arg("particleData") );

		cl.def_readwrite("hardIncoming1", &Pythia8::HardProcess::hardIncoming1);
		cl.def_readwrite("hardIncoming2", &Pythia8::HardProcess::hardIncoming2);
		cl.def_readwrite("hardOutgoing1", &Pythia8::HardProcess::hardOutgoing1);
		cl.def_readwrite("hardOutgoing2", &Pythia8::HardProcess::hardOutgoing2);
		cl.def_readwrite("hardIntermediate", &Pythia8::HardProcess::hardIntermediate);
		cl.def_readwrite("state", &Pythia8::HardProcess::state);
		cl.def_readwrite("PosOutgoing1", &Pythia8::HardProcess::PosOutgoing1);
		cl.def_readwrite("PosOutgoing2", &Pythia8::HardProcess::PosOutgoing2);
		cl.def_readwrite("PosIntermediate", &Pythia8::HardProcess::PosIntermediate);
		cl.def_readwrite("tms", &Pythia8::HardProcess::tms);
		cl.def("initOnProcess", (void (Pythia8::HardProcess::*)(std::string, class Pythia8::ParticleData *)) &Pythia8::HardProcess::initOnProcess, "C++: Pythia8::HardProcess::initOnProcess(std::string, class Pythia8::ParticleData *) --> void", pybind11::arg("process"), pybind11::arg("particleData"));
		cl.def("initOnLHEF", (void (Pythia8::HardProcess::*)(std::string, class Pythia8::ParticleData *)) &Pythia8::HardProcess::initOnLHEF, "C++: Pythia8::HardProcess::initOnLHEF(std::string, class Pythia8::ParticleData *) --> void", pybind11::arg("LHEfile"), pybind11::arg("particleData"));
		cl.def("translateLHEFString", (void (Pythia8::HardProcess::*)(std::string)) &Pythia8::HardProcess::translateLHEFString, "C++: Pythia8::HardProcess::translateLHEFString(std::string) --> void", pybind11::arg("LHEpath"));
		cl.def("translateProcessString", (void (Pythia8::HardProcess::*)(std::string)) &Pythia8::HardProcess::translateProcessString, "C++: Pythia8::HardProcess::translateProcessString(std::string) --> void", pybind11::arg("process"));
		cl.def("clear", (void (Pythia8::HardProcess::*)()) &Pythia8::HardProcess::clear, "C++: Pythia8::HardProcess::clear() --> void");
		cl.def("allowCandidates", (bool (Pythia8::HardProcess::*)(int, class std::vector<int, class std::allocator<int> >, class std::vector<int, class std::allocator<int> >, const class Pythia8::Event &)) &Pythia8::HardProcess::allowCandidates, "C++: Pythia8::HardProcess::allowCandidates(int, class std::vector<int, class std::allocator<int> >, class std::vector<int, class std::allocator<int> >, const class Pythia8::Event &) --> bool", pybind11::arg("iPos"), pybind11::arg("Pos1"), pybind11::arg("Pos2"), pybind11::arg("event"));
		cl.def("storeCandidates", (void (Pythia8::HardProcess::*)(const class Pythia8::Event &, std::string)) &Pythia8::HardProcess::storeCandidates, "C++: Pythia8::HardProcess::storeCandidates(const class Pythia8::Event &, std::string) --> void", pybind11::arg("event"), pybind11::arg("process"));
		cl.def("matchesAnyOutgoing", (bool (Pythia8::HardProcess::*)(int, const class Pythia8::Event &)) &Pythia8::HardProcess::matchesAnyOutgoing, "C++: Pythia8::HardProcess::matchesAnyOutgoing(int, const class Pythia8::Event &) --> bool", pybind11::arg("iPos"), pybind11::arg("event"));
		cl.def("findOtherCandidates", (bool (Pythia8::HardProcess::*)(int, const class Pythia8::Event &, bool)) &Pythia8::HardProcess::findOtherCandidates, "C++: Pythia8::HardProcess::findOtherCandidates(int, const class Pythia8::Event &, bool) --> bool", pybind11::arg("iPos"), pybind11::arg("event"), pybind11::arg("doReplace"));
		cl.def("nQuarksOut", (int (Pythia8::HardProcess::*)()) &Pythia8::HardProcess::nQuarksOut, "C++: Pythia8::HardProcess::nQuarksOut() --> int");
		cl.def("nLeptonOut", (int (Pythia8::HardProcess::*)()) &Pythia8::HardProcess::nLeptonOut, "C++: Pythia8::HardProcess::nLeptonOut() --> int");
		cl.def("nBosonsOut", (int (Pythia8::HardProcess::*)()) &Pythia8::HardProcess::nBosonsOut, "C++: Pythia8::HardProcess::nBosonsOut() --> int");
		cl.def("nQuarksIn", (int (Pythia8::HardProcess::*)()) &Pythia8::HardProcess::nQuarksIn, "C++: Pythia8::HardProcess::nQuarksIn() --> int");
		cl.def("nLeptonIn", (int (Pythia8::HardProcess::*)()) &Pythia8::HardProcess::nLeptonIn, "C++: Pythia8::HardProcess::nLeptonIn() --> int");
		cl.def("hasResInCurrent", (int (Pythia8::HardProcess::*)()) &Pythia8::HardProcess::hasResInCurrent, "C++: Pythia8::HardProcess::hasResInCurrent() --> int");
		cl.def("nResInCurrent", (int (Pythia8::HardProcess::*)()) &Pythia8::HardProcess::nResInCurrent, "C++: Pythia8::HardProcess::nResInCurrent() --> int");
		cl.def("hasResInProc", (bool (Pythia8::HardProcess::*)()) &Pythia8::HardProcess::hasResInProc, "C++: Pythia8::HardProcess::hasResInProc() --> bool");
		cl.def("list", (void (Pythia8::HardProcess::*)() const) &Pythia8::HardProcess::list, "C++: Pythia8::HardProcess::list() const --> void");
		cl.def("listCandidates", (void (Pythia8::HardProcess::*)() const) &Pythia8::HardProcess::listCandidates, "C++: Pythia8::HardProcess::listCandidates() const --> void");
		cl.def("assign", (class Pythia8::HardProcess & (Pythia8::HardProcess::*)(const class Pythia8::HardProcess &)) &Pythia8::HardProcess::operator=, "C++: Pythia8::HardProcess::operator=(const class Pythia8::HardProcess &) --> class Pythia8::HardProcess &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::MergingHooks file:Pythia8/MergingHooks.h line:166
		pybind11::class_<Pythia8::MergingHooks, std::shared_ptr<Pythia8::MergingHooks>, PyCallBack_Pythia8_MergingHooks, Pythia8::PhysicsBase> cl(M("Pythia8"), "MergingHooks", "");
		pybind11::handle cl_type = cl;

		{ // Pythia8::MergingHooks::IndividualWeights file:Pythia8/MergingHooks.h line:592
			auto & enclosing_class = cl;
			pybind11::class_<Pythia8::MergingHooks::IndividualWeights, std::shared_ptr<Pythia8::MergingHooks::IndividualWeights>> cl(enclosing_class, "IndividualWeights", "");
			pybind11::handle cl_type = cl;

			cl.def( pybind11::init( [](){ return new Pythia8::MergingHooks::IndividualWeights(); } ) );
			cl.def( pybind11::init( [](Pythia8::MergingHooks::IndividualWeights const &o){ return new Pythia8::MergingHooks::IndividualWeights(o); } ) );
			cl.def_readwrite("wtSave", &Pythia8::MergingHooks::IndividualWeights::wtSave);
			cl.def_readwrite("pdfWeightSave", &Pythia8::MergingHooks::IndividualWeights::pdfWeightSave);
			cl.def_readwrite("mpiWeightSave", &Pythia8::MergingHooks::IndividualWeights::mpiWeightSave);
			cl.def_readwrite("asWeightSave", &Pythia8::MergingHooks::IndividualWeights::asWeightSave);
			cl.def_readwrite("aemWeightSave", &Pythia8::MergingHooks::IndividualWeights::aemWeightSave);
			cl.def_readwrite("bornAsVarFac", &Pythia8::MergingHooks::IndividualWeights::bornAsVarFac);
			cl.def("assign", (struct Pythia8::MergingHooks::IndividualWeights & (Pythia8::MergingHooks::IndividualWeights::*)(const struct Pythia8::MergingHooks::IndividualWeights &)) &Pythia8::MergingHooks::IndividualWeights::operator=, "C++: Pythia8::MergingHooks::IndividualWeights::operator=(const struct Pythia8::MergingHooks::IndividualWeights &) --> struct Pythia8::MergingHooks::IndividualWeights &", pybind11::return_value_policy::reference, pybind11::arg(""));
		}

		cl.def( pybind11::init( [](){ return new Pythia8::MergingHooks(); }, [](){ return new PyCallBack_Pythia8_MergingHooks(); } ) );
		cl.def_readwrite("useShowerPluginSave", &Pythia8::MergingHooks::useShowerPluginSave);
		cl.def_readwrite("useOwnHardProcess", &Pythia8::MergingHooks::useOwnHardProcess);
		cl.def_readwrite("AlphaS_FSRSave", &Pythia8::MergingHooks::AlphaS_FSRSave);
		cl.def_readwrite("AlphaS_ISRSave", &Pythia8::MergingHooks::AlphaS_ISRSave);
		cl.def_readwrite("AlphaEM_FSRSave", &Pythia8::MergingHooks::AlphaEM_FSRSave);
		cl.def_readwrite("AlphaEM_ISRSave", &Pythia8::MergingHooks::AlphaEM_ISRSave);
		cl.def_readwrite("lheInputFile", &Pythia8::MergingHooks::lheInputFile);
		cl.def_readwrite("doUserMergingSave", &Pythia8::MergingHooks::doUserMergingSave);
		cl.def_readwrite("doMGMergingSave", &Pythia8::MergingHooks::doMGMergingSave);
		cl.def_readwrite("doKTMergingSave", &Pythia8::MergingHooks::doKTMergingSave);
		cl.def_readwrite("doPTLundMergingSave", &Pythia8::MergingHooks::doPTLundMergingSave);
		cl.def_readwrite("doCutBasedMergingSave", &Pythia8::MergingHooks::doCutBasedMergingSave);
		cl.def_readwrite("includeMassiveSave", &Pythia8::MergingHooks::includeMassiveSave);
		cl.def_readwrite("enforceStrongOrderingSave", &Pythia8::MergingHooks::enforceStrongOrderingSave);
		cl.def_readwrite("orderInRapiditySave", &Pythia8::MergingHooks::orderInRapiditySave);
		cl.def_readwrite("pickByFullPSave", &Pythia8::MergingHooks::pickByFullPSave);
		cl.def_readwrite("pickByPoPT2Save", &Pythia8::MergingHooks::pickByPoPT2Save);
		cl.def_readwrite("includeRedundantSave", &Pythia8::MergingHooks::includeRedundantSave);
		cl.def_readwrite("pickBySumPTSave", &Pythia8::MergingHooks::pickBySumPTSave);
		cl.def_readwrite("allowColourShufflingSave", &Pythia8::MergingHooks::allowColourShufflingSave);
		cl.def_readwrite("resetHardQRenSave", &Pythia8::MergingHooks::resetHardQRenSave);
		cl.def_readwrite("resetHardQFacSave", &Pythia8::MergingHooks::resetHardQFacSave);
		cl.def_readwrite("unorderedScalePrescipSave", &Pythia8::MergingHooks::unorderedScalePrescipSave);
		cl.def_readwrite("unorderedASscalePrescipSave", &Pythia8::MergingHooks::unorderedASscalePrescipSave);
		cl.def_readwrite("unorderedPDFscalePrescipSave", &Pythia8::MergingHooks::unorderedPDFscalePrescipSave);
		cl.def_readwrite("incompleteScalePrescipSave", &Pythia8::MergingHooks::incompleteScalePrescipSave);
		cl.def_readwrite("ktTypeSave", &Pythia8::MergingHooks::ktTypeSave);
		cl.def_readwrite("nReclusterSave", &Pythia8::MergingHooks::nReclusterSave);
		cl.def_readwrite("nQuarksMergeSave", &Pythia8::MergingHooks::nQuarksMergeSave);
		cl.def_readwrite("nRequestedSave", &Pythia8::MergingHooks::nRequestedSave);
		cl.def_readwrite("scaleSeparationFactorSave", &Pythia8::MergingHooks::scaleSeparationFactorSave);
		cl.def_readwrite("nonJoinedNormSave", &Pythia8::MergingHooks::nonJoinedNormSave);
		cl.def_readwrite("fsrInRecNormSave", &Pythia8::MergingHooks::fsrInRecNormSave);
		cl.def_readwrite("herwigAcollFSRSave", &Pythia8::MergingHooks::herwigAcollFSRSave);
		cl.def_readwrite("herwigAcollISRSave", &Pythia8::MergingHooks::herwigAcollISRSave);
		cl.def_readwrite("pT0ISRSave", &Pythia8::MergingHooks::pT0ISRSave);
		cl.def_readwrite("pTcutSave", &Pythia8::MergingHooks::pTcutSave);
		cl.def_readwrite("doNL3TreeSave", &Pythia8::MergingHooks::doNL3TreeSave);
		cl.def_readwrite("doNL3LoopSave", &Pythia8::MergingHooks::doNL3LoopSave);
		cl.def_readwrite("doNL3SubtSave", &Pythia8::MergingHooks::doNL3SubtSave);
		cl.def_readwrite("doUNLOPSTreeSave", &Pythia8::MergingHooks::doUNLOPSTreeSave);
		cl.def_readwrite("doUNLOPSLoopSave", &Pythia8::MergingHooks::doUNLOPSLoopSave);
		cl.def_readwrite("doUNLOPSSubtSave", &Pythia8::MergingHooks::doUNLOPSSubtSave);
		cl.def_readwrite("doUNLOPSSubtNLOSave", &Pythia8::MergingHooks::doUNLOPSSubtNLOSave);
		cl.def_readwrite("doUMEPSTreeSave", &Pythia8::MergingHooks::doUMEPSTreeSave);
		cl.def_readwrite("doUMEPSSubtSave", &Pythia8::MergingHooks::doUMEPSSubtSave);
		cl.def_readwrite("doEstimateXSection", &Pythia8::MergingHooks::doEstimateXSection);
		cl.def_readwrite("applyVeto", &Pythia8::MergingHooks::applyVeto);
		cl.def_readwrite("inputEvent", &Pythia8::MergingHooks::inputEvent);
		cl.def_readwrite("resonances", &Pythia8::MergingHooks::resonances);
		cl.def_readwrite("doRemoveDecayProducts", &Pythia8::MergingHooks::doRemoveDecayProducts);
		cl.def_readwrite("muMISave", &Pythia8::MergingHooks::muMISave);
		cl.def_readwrite("kFactor0jSave", &Pythia8::MergingHooks::kFactor0jSave);
		cl.def_readwrite("kFactor1jSave", &Pythia8::MergingHooks::kFactor1jSave);
		cl.def_readwrite("kFactor2jSave", &Pythia8::MergingHooks::kFactor2jSave);
		cl.def_readwrite("tmsValueSave", &Pythia8::MergingHooks::tmsValueSave);
		cl.def_readwrite("tmsValueNow", &Pythia8::MergingHooks::tmsValueNow);
		cl.def_readwrite("DparameterSave", &Pythia8::MergingHooks::DparameterSave);
		cl.def_readwrite("nJetMaxSave", &Pythia8::MergingHooks::nJetMaxSave);
		cl.def_readwrite("nJetMaxNLOSave", &Pythia8::MergingHooks::nJetMaxNLOSave);
		cl.def_readwrite("processSave", &Pythia8::MergingHooks::processSave);
		cl.def_readwrite("processNow", &Pythia8::MergingHooks::processNow);
		cl.def_readwrite("tmsListSave", &Pythia8::MergingHooks::tmsListSave);
		cl.def_readwrite("doOrderHistoriesSave", &Pythia8::MergingHooks::doOrderHistoriesSave);
		cl.def_readwrite("doCutOnRecStateSave", &Pythia8::MergingHooks::doCutOnRecStateSave);
		cl.def_readwrite("doWeakClusteringSave", &Pythia8::MergingHooks::doWeakClusteringSave);
		cl.def_readwrite("doSQCDClusteringSave", &Pythia8::MergingHooks::doSQCDClusteringSave);
		cl.def_readwrite("muFSave", &Pythia8::MergingHooks::muFSave);
		cl.def_readwrite("muRSave", &Pythia8::MergingHooks::muRSave);
		cl.def_readwrite("muFinMESave", &Pythia8::MergingHooks::muFinMESave);
		cl.def_readwrite("muRinMESave", &Pythia8::MergingHooks::muRinMESave);
		cl.def_readwrite("doIgnoreEmissionsSave", &Pythia8::MergingHooks::doIgnoreEmissionsSave);
		cl.def_readwrite("doIgnoreStepSave", &Pythia8::MergingHooks::doIgnoreStepSave);
		cl.def_readwrite("pTsave", &Pythia8::MergingHooks::pTsave);
		cl.def_readwrite("weightCKKWL1Save", &Pythia8::MergingHooks::weightCKKWL1Save);
		cl.def_readwrite("weightCKKWL2Save", &Pythia8::MergingHooks::weightCKKWL2Save);
		cl.def_readwrite("nMinMPISave", &Pythia8::MergingHooks::nMinMPISave);
		cl.def_readwrite("weightCKKWLSave", &Pythia8::MergingHooks::weightCKKWLSave);
		cl.def_readwrite("weightFIRSTSave", &Pythia8::MergingHooks::weightFIRSTSave);
		cl.def_readwrite("individualWeights", &Pythia8::MergingHooks::individualWeights);
		cl.def_readwrite("doVariations", &Pythia8::MergingHooks::doVariations);
		cl.def_readwrite("muRVarFactors", &Pythia8::MergingHooks::muRVarFactors);
		cl.def_readwrite("nWgts", &Pythia8::MergingHooks::nWgts);
		cl.def_readwrite("nJetMaxLocal", &Pythia8::MergingHooks::nJetMaxLocal);
		cl.def_readwrite("nJetMaxNLOLocal", &Pythia8::MergingHooks::nJetMaxNLOLocal);
		cl.def_readwrite("hasJetMaxLocal", &Pythia8::MergingHooks::hasJetMaxLocal);
		cl.def_readwrite("includeWGTinXSECSave", &Pythia8::MergingHooks::includeWGTinXSECSave);
		cl.def_readwrite("nHardNowSave", &Pythia8::MergingHooks::nHardNowSave);
		cl.def_readwrite("nJetNowSave", &Pythia8::MergingHooks::nJetNowSave);
		cl.def_readwrite("tmsHardNowSave", &Pythia8::MergingHooks::tmsHardNowSave);
		cl.def_readwrite("tmsNowSave", &Pythia8::MergingHooks::tmsNowSave);
		cl.def_readwrite("stopScaleSave", &Pythia8::MergingHooks::stopScaleSave);
		cl.def_readwrite("nVetoedInMainShower", &Pythia8::MergingHooks::nVetoedInMainShower);
		cl.def("tmsDefinition", (double (Pythia8::MergingHooks::*)(const class Pythia8::Event &)) &Pythia8::MergingHooks::tmsDefinition, "C++: Pythia8::MergingHooks::tmsDefinition(const class Pythia8::Event &) --> double", pybind11::arg("event"));
		cl.def("dampenIfFailCuts", (double (Pythia8::MergingHooks::*)(const class Pythia8::Event &)) &Pythia8::MergingHooks::dampenIfFailCuts, "C++: Pythia8::MergingHooks::dampenIfFailCuts(const class Pythia8::Event &) --> double", pybind11::arg("inEvent"));
		cl.def("canCutOnRecState", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::canCutOnRecState, "C++: Pythia8::MergingHooks::canCutOnRecState() --> bool");
		cl.def("doCutOnRecState", (bool (Pythia8::MergingHooks::*)(const class Pythia8::Event &)) &Pythia8::MergingHooks::doCutOnRecState, "C++: Pythia8::MergingHooks::doCutOnRecState(const class Pythia8::Event &) --> bool", pybind11::arg("event"));
		cl.def("canVetoTrialEmission", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::canVetoTrialEmission, "C++: Pythia8::MergingHooks::canVetoTrialEmission() --> bool");
		cl.def("doVetoTrialEmission", (bool (Pythia8::MergingHooks::*)(const class Pythia8::Event &, const class Pythia8::Event &)) &Pythia8::MergingHooks::doVetoTrialEmission, "C++: Pythia8::MergingHooks::doVetoTrialEmission(const class Pythia8::Event &, const class Pythia8::Event &) --> bool", pybind11::arg(""), pybind11::arg(""));
		cl.def("hardProcessME", (double (Pythia8::MergingHooks::*)(const class Pythia8::Event &)) &Pythia8::MergingHooks::hardProcessME, "C++: Pythia8::MergingHooks::hardProcessME(const class Pythia8::Event &) --> double", pybind11::arg("inEvent"));
		cl.def("init", (void (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::init, "C++: Pythia8::MergingHooks::init() --> void");
		cl.def("tms", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::tms, "C++: Pythia8::MergingHooks::tms() --> double");
		cl.def("tmsCut", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::tmsCut, "C++: Pythia8::MergingHooks::tmsCut() --> double");
		cl.def("tms", (void (Pythia8::MergingHooks::*)(double)) &Pythia8::MergingHooks::tms, "C++: Pythia8::MergingHooks::tms(double) --> void", pybind11::arg("tmsIn"));
		cl.def("dRijMS", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::dRijMS, "C++: Pythia8::MergingHooks::dRijMS() --> double");
		cl.def("pTiMS", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::pTiMS, "C++: Pythia8::MergingHooks::pTiMS() --> double");
		cl.def("QijMS", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::QijMS, "C++: Pythia8::MergingHooks::QijMS() --> double");
		cl.def("nMaxJets", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nMaxJets, "C++: Pythia8::MergingHooks::nMaxJets() --> int");
		cl.def("nMaxJetsNLO", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nMaxJetsNLO, "C++: Pythia8::MergingHooks::nMaxJetsNLO() --> int");
		cl.def("getProcessString", (std::string (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::getProcessString, "C++: Pythia8::MergingHooks::getProcessString() --> std::string");
		cl.def("nHardOutPartons", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nHardOutPartons, "C++: Pythia8::MergingHooks::nHardOutPartons() --> int");
		cl.def("nHardOutLeptons", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nHardOutLeptons, "C++: Pythia8::MergingHooks::nHardOutLeptons() --> int");
		cl.def("nHardOutBosons", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nHardOutBosons, "C++: Pythia8::MergingHooks::nHardOutBosons() --> int");
		cl.def("nHardInPartons", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nHardInPartons, "C++: Pythia8::MergingHooks::nHardInPartons() --> int");
		cl.def("nHardInLeptons", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nHardInLeptons, "C++: Pythia8::MergingHooks::nHardInLeptons() --> int");
		cl.def("nResInCurrent", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nResInCurrent, "C++: Pythia8::MergingHooks::nResInCurrent() --> int");
		cl.def("doUserMerging", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doUserMerging, "C++: Pythia8::MergingHooks::doUserMerging() --> bool");
		cl.def("doMGMerging", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doMGMerging, "C++: Pythia8::MergingHooks::doMGMerging() --> bool");
		cl.def("doKTMerging", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doKTMerging, "C++: Pythia8::MergingHooks::doKTMerging() --> bool");
		cl.def("doPTLundMerging", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doPTLundMerging, "C++: Pythia8::MergingHooks::doPTLundMerging() --> bool");
		cl.def("doCutBasedMerging", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doCutBasedMerging, "C++: Pythia8::MergingHooks::doCutBasedMerging() --> bool");
		cl.def("doCKKWLMerging", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doCKKWLMerging, "C++: Pythia8::MergingHooks::doCKKWLMerging() --> bool");
		cl.def("doUMEPSTree", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doUMEPSTree, "C++: Pythia8::MergingHooks::doUMEPSTree() --> bool");
		cl.def("doUMEPSSubt", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doUMEPSSubt, "C++: Pythia8::MergingHooks::doUMEPSSubt() --> bool");
		cl.def("doUMEPSMerging", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doUMEPSMerging, "C++: Pythia8::MergingHooks::doUMEPSMerging() --> bool");
		cl.def("doNL3Tree", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doNL3Tree, "C++: Pythia8::MergingHooks::doNL3Tree() --> bool");
		cl.def("doNL3Loop", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doNL3Loop, "C++: Pythia8::MergingHooks::doNL3Loop() --> bool");
		cl.def("doNL3Subt", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doNL3Subt, "C++: Pythia8::MergingHooks::doNL3Subt() --> bool");
		cl.def("doNL3Merging", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doNL3Merging, "C++: Pythia8::MergingHooks::doNL3Merging() --> bool");
		cl.def("doUNLOPSTree", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doUNLOPSTree, "C++: Pythia8::MergingHooks::doUNLOPSTree() --> bool");
		cl.def("doUNLOPSLoop", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doUNLOPSLoop, "C++: Pythia8::MergingHooks::doUNLOPSLoop() --> bool");
		cl.def("doUNLOPSSubt", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doUNLOPSSubt, "C++: Pythia8::MergingHooks::doUNLOPSSubt() --> bool");
		cl.def("doUNLOPSSubtNLO", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doUNLOPSSubtNLO, "C++: Pythia8::MergingHooks::doUNLOPSSubtNLO() --> bool");
		cl.def("doUNLOPSMerging", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doUNLOPSMerging, "C++: Pythia8::MergingHooks::doUNLOPSMerging() --> bool");
		cl.def("nRecluster", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nRecluster, "C++: Pythia8::MergingHooks::nRecluster() --> int");
		cl.def("nRequested", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nRequested, "C++: Pythia8::MergingHooks::nRequested() --> int");
		cl.def("isFirstEmission", (bool (Pythia8::MergingHooks::*)(const class Pythia8::Event &)) &Pythia8::MergingHooks::isFirstEmission, "C++: Pythia8::MergingHooks::isFirstEmission(const class Pythia8::Event &) --> bool", pybind11::arg("event"));
		cl.def("hasEffectiveG2EW", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::hasEffectiveG2EW, "C++: Pythia8::MergingHooks::hasEffectiveG2EW() --> bool");
		cl.def("allowEffectiveVertex", (bool (Pythia8::MergingHooks::*)(class std::vector<int, class std::allocator<int> >, class std::vector<int, class std::allocator<int> >)) &Pythia8::MergingHooks::allowEffectiveVertex, "C++: Pythia8::MergingHooks::allowEffectiveVertex(class std::vector<int, class std::allocator<int> >, class std::vector<int, class std::allocator<int> >) --> bool", pybind11::arg("in"), pybind11::arg("out"));
		cl.def("bareEvent", (class Pythia8::Event (Pythia8::MergingHooks::*)(const class Pythia8::Event &, bool)) &Pythia8::MergingHooks::bareEvent, "C++: Pythia8::MergingHooks::bareEvent(const class Pythia8::Event &, bool) --> class Pythia8::Event", pybind11::arg("inputEventIn"), pybind11::arg("storeInputEvent"));
		cl.def("reattachResonanceDecays", (bool (Pythia8::MergingHooks::*)(class Pythia8::Event &)) &Pythia8::MergingHooks::reattachResonanceDecays, "C++: Pythia8::MergingHooks::reattachResonanceDecays(class Pythia8::Event &) --> bool", pybind11::arg("process"));
		cl.def("isInHard", (bool (Pythia8::MergingHooks::*)(int, const class Pythia8::Event &)) &Pythia8::MergingHooks::isInHard, "C++: Pythia8::MergingHooks::isInHard(int, const class Pythia8::Event &) --> bool", pybind11::arg("iPos"), pybind11::arg("event"));
		cl.def("getNumberOfClusteringSteps", [](Pythia8::MergingHooks &o, const class Pythia8::Event & a0) -> int { return o.getNumberOfClusteringSteps(a0); }, "", pybind11::arg("event"));
		cl.def("getNumberOfClusteringSteps", (int (Pythia8::MergingHooks::*)(const class Pythia8::Event &, bool)) &Pythia8::MergingHooks::getNumberOfClusteringSteps, "C++: Pythia8::MergingHooks::getNumberOfClusteringSteps(const class Pythia8::Event &, bool) --> int", pybind11::arg("event"), pybind11::arg("resetNjetMax"));
		cl.def("orderHistories", (void (Pythia8::MergingHooks::*)(bool)) &Pythia8::MergingHooks::orderHistories, "C++: Pythia8::MergingHooks::orderHistories(bool) --> void", pybind11::arg("doOrderHistoriesIn"));
		cl.def("allowCutOnRecState", (void (Pythia8::MergingHooks::*)(bool)) &Pythia8::MergingHooks::allowCutOnRecState, "C++: Pythia8::MergingHooks::allowCutOnRecState(bool) --> void", pybind11::arg("doCutOnRecStateIn"));
		cl.def("doWeakClustering", (void (Pythia8::MergingHooks::*)(bool)) &Pythia8::MergingHooks::doWeakClustering, "C++: Pythia8::MergingHooks::doWeakClustering(bool) --> void", pybind11::arg("doWeakClusteringIn"));
		cl.def("checkAgainstCut", (bool (Pythia8::MergingHooks::*)(const class Pythia8::Particle &)) &Pythia8::MergingHooks::checkAgainstCut, "C++: Pythia8::MergingHooks::checkAgainstCut(const class Pythia8::Particle &) --> bool", pybind11::arg("particle"));
		cl.def("tmsNow", (double (Pythia8::MergingHooks::*)(const class Pythia8::Event &)) &Pythia8::MergingHooks::tmsNow, "C++: Pythia8::MergingHooks::tmsNow(const class Pythia8::Event &) --> double", pybind11::arg("event"));
		cl.def("rhoms", (double (Pythia8::MergingHooks::*)(const class Pythia8::Event &, bool)) &Pythia8::MergingHooks::rhoms, "C++: Pythia8::MergingHooks::rhoms(const class Pythia8::Event &, bool) --> double", pybind11::arg("event"), pybind11::arg("withColour"));
		cl.def("kTms", (double (Pythia8::MergingHooks::*)(const class Pythia8::Event &)) &Pythia8::MergingHooks::kTms, "C++: Pythia8::MergingHooks::kTms(const class Pythia8::Event &) --> double", pybind11::arg("event"));
		cl.def("cutbasedms", (double (Pythia8::MergingHooks::*)(const class Pythia8::Event &)) &Pythia8::MergingHooks::cutbasedms, "C++: Pythia8::MergingHooks::cutbasedms(const class Pythia8::Event &) --> double", pybind11::arg("event"));
		cl.def("doIgnoreEmissions", (void (Pythia8::MergingHooks::*)(bool)) &Pythia8::MergingHooks::doIgnoreEmissions, "C++: Pythia8::MergingHooks::doIgnoreEmissions(bool) --> void", pybind11::arg("doIgnoreIn"));
		cl.def("canVetoEmission", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::canVetoEmission, "C++: Pythia8::MergingHooks::canVetoEmission() --> bool");
		cl.def("doVetoEmission", (bool (Pythia8::MergingHooks::*)(const class Pythia8::Event &)) &Pythia8::MergingHooks::doVetoEmission, "C++: Pythia8::MergingHooks::doVetoEmission(const class Pythia8::Event &) --> bool", pybind11::arg(""));
		cl.def("usesVincia", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::usesVincia, "C++: Pythia8::MergingHooks::usesVincia() --> bool");
		cl.def("useShowerPlugin", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::useShowerPlugin, "C++: Pythia8::MergingHooks::useShowerPlugin() --> bool");
		cl.def("includeWGTinXSEC", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::includeWGTinXSEC, "C++: Pythia8::MergingHooks::includeWGTinXSEC() --> bool");
		cl.def("nHardNow", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nHardNow, "C++: Pythia8::MergingHooks::nHardNow() --> int");
		cl.def("tmsHardNow", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::tmsHardNow, "C++: Pythia8::MergingHooks::tmsHardNow() --> double");
		cl.def("nJetsNow", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nJetsNow, "C++: Pythia8::MergingHooks::nJetsNow() --> int");
		cl.def("tmsNow", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::tmsNow, "C++: Pythia8::MergingHooks::tmsNow() --> double");
		cl.def("setHardProcessPtr", (void (Pythia8::MergingHooks::*)(class Pythia8::HardProcess *)) &Pythia8::MergingHooks::setHardProcessPtr, "C++: Pythia8::MergingHooks::setHardProcessPtr(class Pythia8::HardProcess *) --> void", pybind11::arg("hardProcIn"));
		cl.def("nMuRVar", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nMuRVar, "C++: Pythia8::MergingHooks::nMuRVar() --> int");
		cl.def("printIndividualWeights", (void (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::printIndividualWeights, "C++: Pythia8::MergingHooks::printIndividualWeights() --> void");
		cl.def("setShowerPointer", (void (Pythia8::MergingHooks::*)(class Pythia8::PartonLevel *)) &Pythia8::MergingHooks::setShowerPointer, "C++: Pythia8::MergingHooks::setShowerPointer(class Pythia8::PartonLevel *) --> void", pybind11::arg("psIn"));
		cl.def("storeHardProcessCandidates", (void (Pythia8::MergingHooks::*)(const class Pythia8::Event &)) &Pythia8::MergingHooks::storeHardProcessCandidates, "C++: Pythia8::MergingHooks::storeHardProcessCandidates(const class Pythia8::Event &) --> void", pybind11::arg("event"));
		cl.def("setLHEInputFile", (void (Pythia8::MergingHooks::*)(std::string)) &Pythia8::MergingHooks::setLHEInputFile, "C++: Pythia8::MergingHooks::setLHEInputFile(std::string) --> void", pybind11::arg("lheFile"));
		cl.def("AlphaS_FSR", (class Pythia8::AlphaStrong * (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::AlphaS_FSR, "C++: Pythia8::MergingHooks::AlphaS_FSR() --> class Pythia8::AlphaStrong *", pybind11::return_value_policy::automatic);
		cl.def("AlphaS_ISR", (class Pythia8::AlphaStrong * (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::AlphaS_ISR, "C++: Pythia8::MergingHooks::AlphaS_ISR() --> class Pythia8::AlphaStrong *", pybind11::return_value_policy::automatic);
		cl.def("AlphaEM_FSR", (class Pythia8::AlphaEM * (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::AlphaEM_FSR, "C++: Pythia8::MergingHooks::AlphaEM_FSR() --> class Pythia8::AlphaEM *", pybind11::return_value_policy::automatic);
		cl.def("AlphaEM_ISR", (class Pythia8::AlphaEM * (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::AlphaEM_ISR, "C++: Pythia8::MergingHooks::AlphaEM_ISR() --> class Pythia8::AlphaEM *", pybind11::return_value_policy::automatic);
		cl.def("includeMassive", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::includeMassive, "C++: Pythia8::MergingHooks::includeMassive() --> bool");
		cl.def("enforceStrongOrdering", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::enforceStrongOrdering, "C++: Pythia8::MergingHooks::enforceStrongOrdering() --> bool");
		cl.def("orderInRapidity", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::orderInRapidity, "C++: Pythia8::MergingHooks::orderInRapidity() --> bool");
		cl.def("pickByFull", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::pickByFull, "C++: Pythia8::MergingHooks::pickByFull() --> bool");
		cl.def("pickByPoPT2", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::pickByPoPT2, "C++: Pythia8::MergingHooks::pickByPoPT2() --> bool");
		cl.def("includeRedundant", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::includeRedundant, "C++: Pythia8::MergingHooks::includeRedundant() --> bool");
		cl.def("pickBySumPT", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::pickBySumPT, "C++: Pythia8::MergingHooks::pickBySumPT() --> bool");
		cl.def("unorderedScalePrescip", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::unorderedScalePrescip, "C++: Pythia8::MergingHooks::unorderedScalePrescip() --> int");
		cl.def("unorderedASscalePrescip", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::unorderedASscalePrescip, "C++: Pythia8::MergingHooks::unorderedASscalePrescip() --> int");
		cl.def("unorderedPDFscalePrescip", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::unorderedPDFscalePrescip, "C++: Pythia8::MergingHooks::unorderedPDFscalePrescip() --> int");
		cl.def("incompleteScalePrescip", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::incompleteScalePrescip, "C++: Pythia8::MergingHooks::incompleteScalePrescip() --> int");
		cl.def("allowColourShuffling", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::allowColourShuffling, "C++: Pythia8::MergingHooks::allowColourShuffling() --> bool");
		cl.def("resetHardQRen", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::resetHardQRen, "C++: Pythia8::MergingHooks::resetHardQRen() --> bool");
		cl.def("resetHardQFac", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::resetHardQFac, "C++: Pythia8::MergingHooks::resetHardQFac() --> bool");
		cl.def("scaleSeparationFactor", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::scaleSeparationFactor, "C++: Pythia8::MergingHooks::scaleSeparationFactor() --> double");
		cl.def("nonJoinedNorm", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nonJoinedNorm, "C++: Pythia8::MergingHooks::nonJoinedNorm() --> double");
		cl.def("fsrInRecNorm", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::fsrInRecNorm, "C++: Pythia8::MergingHooks::fsrInRecNorm() --> double");
		cl.def("herwigAcollFSR", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::herwigAcollFSR, "C++: Pythia8::MergingHooks::herwigAcollFSR() --> double");
		cl.def("herwigAcollISR", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::herwigAcollISR, "C++: Pythia8::MergingHooks::herwigAcollISR() --> double");
		cl.def("pT0ISR", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::pT0ISR, "C++: Pythia8::MergingHooks::pT0ISR() --> double");
		cl.def("pTcut", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::pTcut, "C++: Pythia8::MergingHooks::pTcut() --> double");
		cl.def("muMI", (void (Pythia8::MergingHooks::*)(double)) &Pythia8::MergingHooks::muMI, "C++: Pythia8::MergingHooks::muMI(double) --> void", pybind11::arg("mu"));
		cl.def("muMI", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::muMI, "C++: Pythia8::MergingHooks::muMI() --> double");
		cl.def("kFactor", [](Pythia8::MergingHooks &o) -> double { return o.kFactor(); }, "");
		cl.def("kFactor", (double (Pythia8::MergingHooks::*)(int)) &Pythia8::MergingHooks::kFactor, "C++: Pythia8::MergingHooks::kFactor(int) --> double", pybind11::arg("njet"));
		cl.def("k1Factor", [](Pythia8::MergingHooks &o) -> double { return o.k1Factor(); }, "");
		cl.def("k1Factor", (double (Pythia8::MergingHooks::*)(int)) &Pythia8::MergingHooks::k1Factor, "C++: Pythia8::MergingHooks::k1Factor(int) --> double", pybind11::arg("njet"));
		cl.def("orderHistories", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::orderHistories, "C++: Pythia8::MergingHooks::orderHistories() --> bool");
		cl.def("allowCutOnRecState", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::allowCutOnRecState, "C++: Pythia8::MergingHooks::allowCutOnRecState() --> bool");
		cl.def("doWeakClustering", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doWeakClustering, "C++: Pythia8::MergingHooks::doWeakClustering() --> bool");
		cl.def("doSQCDClustering", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::doSQCDClustering, "C++: Pythia8::MergingHooks::doSQCDClustering() --> bool");
		cl.def("muF", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::muF, "C++: Pythia8::MergingHooks::muF() --> double");
		cl.def("muR", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::muR, "C++: Pythia8::MergingHooks::muR() --> double");
		cl.def("muFinME", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::muFinME, "C++: Pythia8::MergingHooks::muFinME() --> double");
		cl.def("muRinME", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::muRinME, "C++: Pythia8::MergingHooks::muRinME() --> double");
		cl.def("doIgnoreStep", (void (Pythia8::MergingHooks::*)(bool)) &Pythia8::MergingHooks::doIgnoreStep, "C++: Pythia8::MergingHooks::doIgnoreStep(bool) --> void", pybind11::arg("doIgnoreIn"));
		cl.def("canVetoStep", (bool (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::canVetoStep, "C++: Pythia8::MergingHooks::canVetoStep() --> bool");
		cl.def("storeWeights", (void (Pythia8::MergingHooks::*)(class std::vector<double, class std::allocator<double> >)) &Pythia8::MergingHooks::storeWeights, "C++: Pythia8::MergingHooks::storeWeights(class std::vector<double, class std::allocator<double> >) --> void", pybind11::arg("weight"));
		cl.def("doVetoStep", [](Pythia8::MergingHooks &o, const class Pythia8::Event & a0, const class Pythia8::Event & a1) -> bool { return o.doVetoStep(a0, a1); }, "", pybind11::arg("process"), pybind11::arg("event"));
		cl.def("doVetoStep", (bool (Pythia8::MergingHooks::*)(const class Pythia8::Event &, const class Pythia8::Event &, bool)) &Pythia8::MergingHooks::doVetoStep, "C++: Pythia8::MergingHooks::doVetoStep(const class Pythia8::Event &, const class Pythia8::Event &, bool) --> bool", pybind11::arg("process"), pybind11::arg("event"), pybind11::arg("doResonance"));
		cl.def("setShowerStartingScales", (bool (Pythia8::MergingHooks::*)(bool, bool, double &, const class Pythia8::Event &, double &, bool &, double &, bool &, double &, bool &)) &Pythia8::MergingHooks::setShowerStartingScales, "C++: Pythia8::MergingHooks::setShowerStartingScales(bool, bool, double &, const class Pythia8::Event &, double &, bool &, double &, bool &, double &, bool &) --> bool", pybind11::arg("isTrial"), pybind11::arg("doMergeFirstEmm"), pybind11::arg("pTscaleIn"), pybind11::arg("event"), pybind11::arg("pTmaxFSRIn"), pybind11::arg("limitPTmaxFSRin"), pybind11::arg("pTmaxISRIn"), pybind11::arg("limitPTmaxISRin"), pybind11::arg("pTmaxMPIIn"), pybind11::arg("limitPTmaxMPIin"));
		cl.def("setShowerStoppingScale", [](Pythia8::MergingHooks &o) -> void { return o.setShowerStoppingScale(); }, "");
		cl.def("setShowerStoppingScale", (void (Pythia8::MergingHooks::*)(double)) &Pythia8::MergingHooks::setShowerStoppingScale, "C++: Pythia8::MergingHooks::setShowerStoppingScale(double) --> void", pybind11::arg("scale"));
		cl.def("getShowerStoppingScale", (double (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::getShowerStoppingScale, "C++: Pythia8::MergingHooks::getShowerStoppingScale() --> double");
		cl.def("nMinMPI", (void (Pythia8::MergingHooks::*)(int)) &Pythia8::MergingHooks::nMinMPI, "C++: Pythia8::MergingHooks::nMinMPI(int) --> void", pybind11::arg("nMinMPIIn"));
		cl.def("nMinMPI", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::nMinMPI, "C++: Pythia8::MergingHooks::nMinMPI() --> int");
		cl.def("kTdurham", (double (Pythia8::MergingHooks::*)(const class Pythia8::Particle &, const class Pythia8::Particle &, int, double)) &Pythia8::MergingHooks::kTdurham, "C++: Pythia8::MergingHooks::kTdurham(const class Pythia8::Particle &, const class Pythia8::Particle &, int, double) --> double", pybind11::arg("RadAfterBranch"), pybind11::arg("EmtAfterBranch"), pybind11::arg("Type"), pybind11::arg("D"));
		cl.def("rhoPythia", (double (Pythia8::MergingHooks::*)(const class Pythia8::Event &, int, int, int, int)) &Pythia8::MergingHooks::rhoPythia, "C++: Pythia8::MergingHooks::rhoPythia(const class Pythia8::Event &, int, int, int, int) --> double", pybind11::arg("event"), pybind11::arg("rad"), pybind11::arg("emt"), pybind11::arg("rec"), pybind11::arg("ShowerType"));
		cl.def("findColour", (int (Pythia8::MergingHooks::*)(int, int, int, const class Pythia8::Event &, int, bool)) &Pythia8::MergingHooks::findColour, "C++: Pythia8::MergingHooks::findColour(int, int, int, const class Pythia8::Event &, int, bool) --> int", pybind11::arg("col"), pybind11::arg("iExclude1"), pybind11::arg("iExclude2"), pybind11::arg("event"), pybind11::arg("type"), pybind11::arg("isHardIn"));
		cl.def("deltaRij", (double (Pythia8::MergingHooks::*)(class Pythia8::Vec4, class Pythia8::Vec4)) &Pythia8::MergingHooks::deltaRij, "C++: Pythia8::MergingHooks::deltaRij(class Pythia8::Vec4, class Pythia8::Vec4) --> double", pybind11::arg("jet1"), pybind11::arg("jet2"));
		cl.def("getWeightNLO", [](Pythia8::MergingHooks &o) -> double { return o.getWeightNLO(); }, "");
		cl.def("getWeightNLO", (double (Pythia8::MergingHooks::*)(int)) &Pythia8::MergingHooks::getWeightNLO, "C++: Pythia8::MergingHooks::getWeightNLO(int) --> double", pybind11::arg("i"));
		cl.def("getWeightCKKWL", (class std::vector<double, class std::allocator<double> > (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::getWeightCKKWL, "C++: Pythia8::MergingHooks::getWeightCKKWL() --> class std::vector<double, class std::allocator<double> >");
		cl.def("getWeightFIRST", (class std::vector<double, class std::allocator<double> > (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::getWeightFIRST, "C++: Pythia8::MergingHooks::getWeightFIRST() --> class std::vector<double, class std::allocator<double> >");
		cl.def("setWeightCKKWL", (void (Pythia8::MergingHooks::*)(class std::vector<double, class std::allocator<double> >)) &Pythia8::MergingHooks::setWeightCKKWL, "C++: Pythia8::MergingHooks::setWeightCKKWL(class std::vector<double, class std::allocator<double> >) --> void", pybind11::arg("weightIn"));
		cl.def("setWeightFIRST", (void (Pythia8::MergingHooks::*)(class std::vector<double, class std::allocator<double> >)) &Pythia8::MergingHooks::setWeightFIRST, "C++: Pythia8::MergingHooks::setWeightFIRST(class std::vector<double, class std::allocator<double> >) --> void", pybind11::arg("weightIn"));
		cl.def("getSudakovWeight", (class std::vector<double, class std::allocator<double> > (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::getSudakovWeight, "C++: Pythia8::MergingHooks::getSudakovWeight() --> class std::vector<double, class std::allocator<double> >");
		cl.def("getCouplingWeight", (class std::vector<double, class std::allocator<double> > (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::getCouplingWeight, "C++: Pythia8::MergingHooks::getCouplingWeight() --> class std::vector<double, class std::allocator<double> >");
		cl.def("setEventVetoInfo", (void (Pythia8::MergingHooks::*)(int, double)) &Pythia8::MergingHooks::setEventVetoInfo, "C++: Pythia8::MergingHooks::setEventVetoInfo(int, double) --> void", pybind11::arg("nJetNowIn"), pybind11::arg("tmsNowIn"));
		cl.def("setHardProcessInfo", (void (Pythia8::MergingHooks::*)(int, double)) &Pythia8::MergingHooks::setHardProcessInfo, "C++: Pythia8::MergingHooks::setHardProcessInfo(int, double) --> void", pybind11::arg("nHardNowIn"), pybind11::arg("tmsHardNowIn"));
		cl.def("addVetoInMainShower", (void (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::addVetoInMainShower, "C++: Pythia8::MergingHooks::addVetoInMainShower() --> void");
		cl.def("getNumberVetoedInMainShower", (int (Pythia8::MergingHooks::*)()) &Pythia8::MergingHooks::getNumberVetoedInMainShower, "C++: Pythia8::MergingHooks::getNumberVetoedInMainShower() --> int");
		cl.def("assign", (class Pythia8::MergingHooks & (Pythia8::MergingHooks::*)(const class Pythia8::MergingHooks &)) &Pythia8::MergingHooks::operator=, "C++: Pythia8::MergingHooks::operator=(const class Pythia8::MergingHooks &) --> class Pythia8::MergingHooks &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}

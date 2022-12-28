#include <Pythia8/Basics.h>
#include <Pythia8/BeamParticle.h>
#include <Pythia8/Event.h>
#include <Pythia8/HadronWidths.h>
#include <Pythia8/Info.h>
#include <Pythia8/LHEF3.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/PartonSystems.h>
#include <Pythia8/PhaseSpace.h>
#include <Pythia8/PhysicsBase.h>
#include <Pythia8/ResonanceWidths.h>
#include <Pythia8/Settings.h>
#include <Pythia8/SigmaLowEnergy.h>
#include <Pythia8/SigmaOnia.h>
#include <Pythia8/SigmaProcess.h>
#include <Pythia8/SigmaTotal.h>
#include <Pythia8/StandardModel.h>
#include <Pythia8/SusyCouplings.h>
#include <Pythia8/Weights.h>
#include <functional>
#include <istream>
#include <iterator>
#include <map>
#include <memory>
#include <ostream>
#include <sstream> // __str__
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

// Pythia8::Sigma2gg2QQbar3S11g file:Pythia8/SigmaOnia.h line:76
struct PyCallBack_Pythia8_Sigma2gg2QQbar3S11g : public Pythia8::Sigma2gg2QQbar3S11g {
	using Pythia8::Sigma2gg2QQbar3S11g::Sigma2gg2QQbar3S11g;

	void initProc() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "initProc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3S11g::initProc();
	}
	void sigmaKin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "sigmaKin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3S11g::sigmaKin();
	}
	double sigmaHat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "sigmaHat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2gg2QQbar3S11g::sigmaHat();
	}
	void setIdColAcol() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "setIdColAcol");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3S11g::setIdColAcol();
	}
	class std::basic_string<char> name() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "name");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3S11g::name();
	}
	int code() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "code");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3S11g::code();
	}
	class std::basic_string<char> inFlux() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "inFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3S11g::inFlux();
	}
	int id3Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "id3Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3S11g::id3Mass();
	}
	int nFinal() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "nFinal");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2Process::nFinal();
	}
	void set2Kin(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "set2Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::set2Kin(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	void set2KinMPI(double a0, double a1, double a2, double a3, double a4, double a5, double a6, bool a7, double a8, double a9) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "set2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::set2KinMPI(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	double sigmaHatWrap(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "sigmaHatWrap");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2Process::sigmaHatWrap(a0, a1);
	}
	bool final2KinMPI(int a0, int a1, class Pythia8::Vec4 a2, class Pythia8::Vec4 a3, double a4, double a5) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "final2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Sigma2Process::final2KinMPI(a0, a1, a2, a3, a4, a5);
	}
	void store2Kin(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "store2Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::store2Kin(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	void store2KinMPI(double a0, double a1, double a2, double a3, double a4, double a5, double a6, bool a7, double a8, double a9) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "store2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::store2KinMPI(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	bool setupForME() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "setupForME");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Sigma2Process::setupForME();
	}
	bool initFlux() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "initFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::initFlux();
	}
	void set1Kin(double a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "set1Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::set1Kin(a0, a1, a2);
	}
	void set3Kin(double a0, double a1, double a2, class Pythia8::Vec4 a3, class Pythia8::Vec4 a4, class Pythia8::Vec4 a5, double a6, double a7, double a8, double a9, double a10, double a11) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "set3Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::set3Kin(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}
	double sigmaPDF(bool a0, bool a1, bool a2, double a3, double a4) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "sigmaPDF");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::sigmaPDF(a0, a1, a2, a3, a4);
	}
	double weightDecayFlav(class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "weightDecayFlav");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::weightDecayFlav(a0);
	}
	double weightDecay(class Pythia8::Event & a0, int a1, int a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "weightDecay");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::weightDecay(a0, a1, a2);
	}
	void setScale() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "setScale");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::setScale();
	}
	bool convert2mb() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "convert2mb");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::convert2mb();
	}
	bool convertM2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "convertM2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::convertM2();
	}
	bool isLHA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "isLHA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isLHA();
	}
	bool isNonDiff() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "isNonDiff");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isNonDiff();
	}
	bool isResolved() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "isResolved");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isResolved();
	}
	bool isDiffA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "isDiffA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffA();
	}
	bool isDiffB() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "isDiffB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffB();
	}
	bool isDiffC() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "isDiffC");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffC();
	}
	bool isSUSY() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "isSUSY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isSUSY();
	}
	bool allowNegativeSigma() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "allowNegativeSigma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::allowNegativeSigma();
	}
	int id4Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "id4Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::id4Mass();
	}
	int id5Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "id5Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::id5Mass();
	}
	int resonanceA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "resonanceA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::resonanceA();
	}
	int resonanceB() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "resonanceB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::resonanceB();
	}
	bool isSChannel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "isSChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isSChannel();
	}
	int idSChannel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "idSChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idSChannel();
	}
	bool isQCD3body() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "isQCD3body");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isQCD3body();
	}
	int idTchan1() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "idTchan1");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idTchan1();
	}
	int idTchan2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "idTchan2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idTchan2();
	}
	double tChanFracPow1() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "tChanFracPow1");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::tChanFracPow1();
	}
	double tChanFracPow2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "tChanFracPow2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::tChanFracPow2();
	}
	bool useMirrorWeight() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "useMirrorWeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::useMirrorWeight();
	}
	int gmZmode() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "gmZmode");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::gmZmode();
	}
	void setIdInDiff(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "setIdInDiff");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::setIdInDiff(a0, a1);
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11g *>(this), "onStat");
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

// Pythia8::Sigma2gg2QQbar3S11gm file:Pythia8/SigmaOnia.h line:115
struct PyCallBack_Pythia8_Sigma2gg2QQbar3S11gm : public Pythia8::Sigma2gg2QQbar3S11gm {
	using Pythia8::Sigma2gg2QQbar3S11gm::Sigma2gg2QQbar3S11gm;

	void initProc() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "initProc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3S11gm::initProc();
	}
	void sigmaKin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "sigmaKin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3S11gm::sigmaKin();
	}
	double sigmaHat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "sigmaHat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2gg2QQbar3S11gm::sigmaHat();
	}
	void setIdColAcol() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "setIdColAcol");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3S11gm::setIdColAcol();
	}
	class std::basic_string<char> name() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "name");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3S11gm::name();
	}
	int code() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "code");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3S11gm::code();
	}
	class std::basic_string<char> inFlux() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "inFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3S11gm::inFlux();
	}
	int id3Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "id3Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3S11gm::id3Mass();
	}
	int nFinal() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "nFinal");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2Process::nFinal();
	}
	void set2Kin(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "set2Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::set2Kin(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	void set2KinMPI(double a0, double a1, double a2, double a3, double a4, double a5, double a6, bool a7, double a8, double a9) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "set2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::set2KinMPI(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	double sigmaHatWrap(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "sigmaHatWrap");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2Process::sigmaHatWrap(a0, a1);
	}
	bool final2KinMPI(int a0, int a1, class Pythia8::Vec4 a2, class Pythia8::Vec4 a3, double a4, double a5) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "final2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Sigma2Process::final2KinMPI(a0, a1, a2, a3, a4, a5);
	}
	void store2Kin(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "store2Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::store2Kin(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	void store2KinMPI(double a0, double a1, double a2, double a3, double a4, double a5, double a6, bool a7, double a8, double a9) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "store2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::store2KinMPI(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	bool setupForME() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "setupForME");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Sigma2Process::setupForME();
	}
	bool initFlux() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "initFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::initFlux();
	}
	void set1Kin(double a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "set1Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::set1Kin(a0, a1, a2);
	}
	void set3Kin(double a0, double a1, double a2, class Pythia8::Vec4 a3, class Pythia8::Vec4 a4, class Pythia8::Vec4 a5, double a6, double a7, double a8, double a9, double a10, double a11) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "set3Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::set3Kin(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}
	double sigmaPDF(bool a0, bool a1, bool a2, double a3, double a4) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "sigmaPDF");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::sigmaPDF(a0, a1, a2, a3, a4);
	}
	double weightDecayFlav(class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "weightDecayFlav");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::weightDecayFlav(a0);
	}
	double weightDecay(class Pythia8::Event & a0, int a1, int a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "weightDecay");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::weightDecay(a0, a1, a2);
	}
	void setScale() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "setScale");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::setScale();
	}
	bool convert2mb() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "convert2mb");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::convert2mb();
	}
	bool convertM2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "convertM2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::convertM2();
	}
	bool isLHA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "isLHA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isLHA();
	}
	bool isNonDiff() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "isNonDiff");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isNonDiff();
	}
	bool isResolved() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "isResolved");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isResolved();
	}
	bool isDiffA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "isDiffA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffA();
	}
	bool isDiffB() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "isDiffB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffB();
	}
	bool isDiffC() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "isDiffC");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffC();
	}
	bool isSUSY() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "isSUSY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isSUSY();
	}
	bool allowNegativeSigma() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "allowNegativeSigma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::allowNegativeSigma();
	}
	int id4Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "id4Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::id4Mass();
	}
	int id5Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "id5Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::id5Mass();
	}
	int resonanceA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "resonanceA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::resonanceA();
	}
	int resonanceB() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "resonanceB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::resonanceB();
	}
	bool isSChannel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "isSChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isSChannel();
	}
	int idSChannel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "idSChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idSChannel();
	}
	bool isQCD3body() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "isQCD3body");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isQCD3body();
	}
	int idTchan1() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "idTchan1");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idTchan1();
	}
	int idTchan2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "idTchan2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idTchan2();
	}
	double tChanFracPow1() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "tChanFracPow1");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::tChanFracPow1();
	}
	double tChanFracPow2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "tChanFracPow2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::tChanFracPow2();
	}
	bool useMirrorWeight() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "useMirrorWeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::useMirrorWeight();
	}
	int gmZmode() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "gmZmode");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::gmZmode();
	}
	void setIdInDiff(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "setIdInDiff");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::setIdInDiff(a0, a1);
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11gm *>(this), "onStat");
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

// Pythia8::Sigma2gg2QQbar3PJ1g file:Pythia8/SigmaOnia.h line:155
struct PyCallBack_Pythia8_Sigma2gg2QQbar3PJ1g : public Pythia8::Sigma2gg2QQbar3PJ1g {
	using Pythia8::Sigma2gg2QQbar3PJ1g::Sigma2gg2QQbar3PJ1g;

	void initProc() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "initProc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::initProc();
	}
	void sigmaKin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "sigmaKin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::sigmaKin();
	}
	double sigmaHat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "sigmaHat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::sigmaHat();
	}
	void setIdColAcol() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "setIdColAcol");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::setIdColAcol();
	}
	class std::basic_string<char> name() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "name");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::name();
	}
	int code() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "code");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::code();
	}
	class std::basic_string<char> inFlux() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "inFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::inFlux();
	}
	int id3Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "id3Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::id3Mass();
	}
	class std::basic_string<char> namePrefix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "namePrefix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::namePrefix();
	}
	class std::basic_string<char> namePostfix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "namePostfix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::namePostfix();
	}
	int nFinal() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "nFinal");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2Process::nFinal();
	}
	void set2Kin(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "set2Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::set2Kin(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	void set2KinMPI(double a0, double a1, double a2, double a3, double a4, double a5, double a6, bool a7, double a8, double a9) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "set2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::set2KinMPI(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	double sigmaHatWrap(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "sigmaHatWrap");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2Process::sigmaHatWrap(a0, a1);
	}
	bool final2KinMPI(int a0, int a1, class Pythia8::Vec4 a2, class Pythia8::Vec4 a3, double a4, double a5) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "final2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Sigma2Process::final2KinMPI(a0, a1, a2, a3, a4, a5);
	}
	void store2Kin(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "store2Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::store2Kin(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	void store2KinMPI(double a0, double a1, double a2, double a3, double a4, double a5, double a6, bool a7, double a8, double a9) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "store2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::store2KinMPI(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	bool setupForME() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "setupForME");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Sigma2Process::setupForME();
	}
	bool initFlux() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "initFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::initFlux();
	}
	void set1Kin(double a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "set1Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::set1Kin(a0, a1, a2);
	}
	void set3Kin(double a0, double a1, double a2, class Pythia8::Vec4 a3, class Pythia8::Vec4 a4, class Pythia8::Vec4 a5, double a6, double a7, double a8, double a9, double a10, double a11) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "set3Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::set3Kin(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}
	double sigmaPDF(bool a0, bool a1, bool a2, double a3, double a4) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "sigmaPDF");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::sigmaPDF(a0, a1, a2, a3, a4);
	}
	double weightDecayFlav(class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "weightDecayFlav");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::weightDecayFlav(a0);
	}
	double weightDecay(class Pythia8::Event & a0, int a1, int a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "weightDecay");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::weightDecay(a0, a1, a2);
	}
	void setScale() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "setScale");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::setScale();
	}
	bool convert2mb() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "convert2mb");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::convert2mb();
	}
	bool convertM2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "convertM2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::convertM2();
	}
	bool isLHA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "isLHA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isLHA();
	}
	bool isNonDiff() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "isNonDiff");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isNonDiff();
	}
	bool isResolved() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "isResolved");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isResolved();
	}
	bool isDiffA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "isDiffA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffA();
	}
	bool isDiffB() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "isDiffB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffB();
	}
	bool isDiffC() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "isDiffC");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffC();
	}
	bool isSUSY() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "isSUSY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isSUSY();
	}
	bool allowNegativeSigma() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "allowNegativeSigma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::allowNegativeSigma();
	}
	int id4Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "id4Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::id4Mass();
	}
	int id5Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "id5Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::id5Mass();
	}
	int resonanceA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "resonanceA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::resonanceA();
	}
	int resonanceB() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "resonanceB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::resonanceB();
	}
	bool isSChannel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "isSChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isSChannel();
	}
	int idSChannel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "idSChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idSChannel();
	}
	bool isQCD3body() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "isQCD3body");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isQCD3body();
	}
	int idTchan1() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "idTchan1");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idTchan1();
	}
	int idTchan2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "idTchan2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idTchan2();
	}
	double tChanFracPow1() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "tChanFracPow1");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::tChanFracPow1();
	}
	double tChanFracPow2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "tChanFracPow2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::tChanFracPow2();
	}
	bool useMirrorWeight() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "useMirrorWeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::useMirrorWeight();
	}
	int gmZmode() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "gmZmode");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::gmZmode();
	}
	void setIdInDiff(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "setIdInDiff");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::setIdInDiff(a0, a1);
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3PJ1g *>(this), "onStat");
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

// Pythia8::Sigma2qg2QQbar3PJ1q file:Pythia8/SigmaOnia.h line:201
struct PyCallBack_Pythia8_Sigma2qg2QQbar3PJ1q : public Pythia8::Sigma2qg2QQbar3PJ1q {
	using Pythia8::Sigma2qg2QQbar3PJ1q::Sigma2qg2QQbar3PJ1q;

	void sigmaKin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "sigmaKin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2qg2QQbar3PJ1q::sigmaKin();
	}
	void setIdColAcol() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "setIdColAcol");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2qg2QQbar3PJ1q::setIdColAcol();
	}
	class std::basic_string<char> inFlux() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "inFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qg2QQbar3PJ1q::inFlux();
	}
	class std::basic_string<char> namePrefix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "namePrefix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qg2QQbar3PJ1q::namePrefix();
	}
	class std::basic_string<char> namePostfix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "namePostfix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qg2QQbar3PJ1q::namePostfix();
	}
	void initProc() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "initProc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::initProc();
	}
	double sigmaHat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "sigmaHat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::sigmaHat();
	}
	class std::basic_string<char> name() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "name");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::name();
	}
	int code() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "code");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::code();
	}
	int id3Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "id3Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::id3Mass();
	}
	int nFinal() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "nFinal");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2Process::nFinal();
	}
	void set2Kin(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "set2Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::set2Kin(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	void set2KinMPI(double a0, double a1, double a2, double a3, double a4, double a5, double a6, bool a7, double a8, double a9) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "set2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::set2KinMPI(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	double sigmaHatWrap(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "sigmaHatWrap");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2Process::sigmaHatWrap(a0, a1);
	}
	bool final2KinMPI(int a0, int a1, class Pythia8::Vec4 a2, class Pythia8::Vec4 a3, double a4, double a5) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "final2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Sigma2Process::final2KinMPI(a0, a1, a2, a3, a4, a5);
	}
	void store2Kin(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "store2Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::store2Kin(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	void store2KinMPI(double a0, double a1, double a2, double a3, double a4, double a5, double a6, bool a7, double a8, double a9) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "store2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::store2KinMPI(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	bool setupForME() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "setupForME");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Sigma2Process::setupForME();
	}
	bool initFlux() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "initFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::initFlux();
	}
	void set1Kin(double a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "set1Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::set1Kin(a0, a1, a2);
	}
	void set3Kin(double a0, double a1, double a2, class Pythia8::Vec4 a3, class Pythia8::Vec4 a4, class Pythia8::Vec4 a5, double a6, double a7, double a8, double a9, double a10, double a11) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "set3Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::set3Kin(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}
	double sigmaPDF(bool a0, bool a1, bool a2, double a3, double a4) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "sigmaPDF");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::sigmaPDF(a0, a1, a2, a3, a4);
	}
	double weightDecayFlav(class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "weightDecayFlav");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::weightDecayFlav(a0);
	}
	double weightDecay(class Pythia8::Event & a0, int a1, int a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "weightDecay");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::weightDecay(a0, a1, a2);
	}
	void setScale() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "setScale");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::setScale();
	}
	bool convert2mb() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "convert2mb");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::convert2mb();
	}
	bool convertM2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "convertM2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::convertM2();
	}
	bool isLHA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "isLHA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isLHA();
	}
	bool isNonDiff() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "isNonDiff");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isNonDiff();
	}
	bool isResolved() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "isResolved");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isResolved();
	}
	bool isDiffA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "isDiffA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffA();
	}
	bool isDiffB() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "isDiffB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffB();
	}
	bool isDiffC() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "isDiffC");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffC();
	}
	bool isSUSY() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "isSUSY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isSUSY();
	}
	bool allowNegativeSigma() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "allowNegativeSigma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::allowNegativeSigma();
	}
	int id4Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "id4Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::id4Mass();
	}
	int id5Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "id5Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::id5Mass();
	}
	int resonanceA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "resonanceA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::resonanceA();
	}
	int resonanceB() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "resonanceB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::resonanceB();
	}
	bool isSChannel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "isSChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isSChannel();
	}
	int idSChannel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "idSChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idSChannel();
	}
	bool isQCD3body() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "isQCD3body");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isQCD3body();
	}
	int idTchan1() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "idTchan1");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idTchan1();
	}
	int idTchan2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "idTchan2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idTchan2();
	}
	double tChanFracPow1() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "tChanFracPow1");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::tChanFracPow1();
	}
	double tChanFracPow2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "tChanFracPow2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::tChanFracPow2();
	}
	bool useMirrorWeight() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "useMirrorWeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::useMirrorWeight();
	}
	int gmZmode() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "gmZmode");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::gmZmode();
	}
	void setIdInDiff(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "setIdInDiff");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::setIdInDiff(a0, a1);
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbar3PJ1q *>(this), "onStat");
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

// Pythia8::Sigma2qqbar2QQbar3PJ1g file:Pythia8/SigmaOnia.h line:230
struct PyCallBack_Pythia8_Sigma2qqbar2QQbar3PJ1g : public Pythia8::Sigma2qqbar2QQbar3PJ1g {
	using Pythia8::Sigma2qqbar2QQbar3PJ1g::Sigma2qqbar2QQbar3PJ1g;

	void sigmaKin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "sigmaKin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2qqbar2QQbar3PJ1g::sigmaKin();
	}
	void setIdColAcol() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "setIdColAcol");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2qqbar2QQbar3PJ1g::setIdColAcol();
	}
	class std::basic_string<char> inFlux() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "inFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qqbar2QQbar3PJ1g::inFlux();
	}
	class std::basic_string<char> namePrefix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "namePrefix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qqbar2QQbar3PJ1g::namePrefix();
	}
	class std::basic_string<char> namePostfix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "namePostfix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qqbar2QQbar3PJ1g::namePostfix();
	}
	void initProc() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "initProc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::initProc();
	}
	double sigmaHat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "sigmaHat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::sigmaHat();
	}
	class std::basic_string<char> name() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "name");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::name();
	}
	int code() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "code");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::code();
	}
	int id3Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "id3Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::id3Mass();
	}
	int nFinal() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "nFinal");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2Process::nFinal();
	}
	void set2Kin(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "set2Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::set2Kin(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	void set2KinMPI(double a0, double a1, double a2, double a3, double a4, double a5, double a6, bool a7, double a8, double a9) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "set2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::set2KinMPI(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	double sigmaHatWrap(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "sigmaHatWrap");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2Process::sigmaHatWrap(a0, a1);
	}
	bool final2KinMPI(int a0, int a1, class Pythia8::Vec4 a2, class Pythia8::Vec4 a3, double a4, double a5) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "final2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Sigma2Process::final2KinMPI(a0, a1, a2, a3, a4, a5);
	}
	void store2Kin(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "store2Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::store2Kin(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	void store2KinMPI(double a0, double a1, double a2, double a3, double a4, double a5, double a6, bool a7, double a8, double a9) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "store2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::store2KinMPI(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	bool setupForME() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "setupForME");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Sigma2Process::setupForME();
	}
	bool initFlux() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "initFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::initFlux();
	}
	void set1Kin(double a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "set1Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::set1Kin(a0, a1, a2);
	}
	void set3Kin(double a0, double a1, double a2, class Pythia8::Vec4 a3, class Pythia8::Vec4 a4, class Pythia8::Vec4 a5, double a6, double a7, double a8, double a9, double a10, double a11) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "set3Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::set3Kin(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}
	double sigmaPDF(bool a0, bool a1, bool a2, double a3, double a4) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "sigmaPDF");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::sigmaPDF(a0, a1, a2, a3, a4);
	}
	double weightDecayFlav(class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "weightDecayFlav");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::weightDecayFlav(a0);
	}
	double weightDecay(class Pythia8::Event & a0, int a1, int a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "weightDecay");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::weightDecay(a0, a1, a2);
	}
	void setScale() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "setScale");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::setScale();
	}
	bool convert2mb() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "convert2mb");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::convert2mb();
	}
	bool convertM2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "convertM2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::convertM2();
	}
	bool isLHA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "isLHA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isLHA();
	}
	bool isNonDiff() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "isNonDiff");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isNonDiff();
	}
	bool isResolved() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "isResolved");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isResolved();
	}
	bool isDiffA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "isDiffA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffA();
	}
	bool isDiffB() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "isDiffB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffB();
	}
	bool isDiffC() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "isDiffC");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffC();
	}
	bool isSUSY() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "isSUSY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isSUSY();
	}
	bool allowNegativeSigma() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "allowNegativeSigma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::allowNegativeSigma();
	}
	int id4Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "id4Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::id4Mass();
	}
	int id5Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "id5Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::id5Mass();
	}
	int resonanceA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "resonanceA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::resonanceA();
	}
	int resonanceB() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "resonanceB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::resonanceB();
	}
	bool isSChannel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "isSChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isSChannel();
	}
	int idSChannel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "idSChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idSChannel();
	}
	bool isQCD3body() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "isQCD3body");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isQCD3body();
	}
	int idTchan1() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "idTchan1");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idTchan1();
	}
	int idTchan2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "idTchan2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idTchan2();
	}
	double tChanFracPow1() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "tChanFracPow1");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::tChanFracPow1();
	}
	double tChanFracPow2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "tChanFracPow2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::tChanFracPow2();
	}
	bool useMirrorWeight() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "useMirrorWeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::useMirrorWeight();
	}
	int gmZmode() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "gmZmode");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::gmZmode();
	}
	void setIdInDiff(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "setIdInDiff");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::setIdInDiff(a0, a1);
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3PJ1g *>(this), "onStat");
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

// Pythia8::Sigma2gg2QQbar3DJ1g file:Pythia8/SigmaOnia.h line:259
struct PyCallBack_Pythia8_Sigma2gg2QQbar3DJ1g : public Pythia8::Sigma2gg2QQbar3DJ1g {
	using Pythia8::Sigma2gg2QQbar3DJ1g::Sigma2gg2QQbar3DJ1g;

	void initProc() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "initProc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3DJ1g::initProc();
	}
	void sigmaKin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "sigmaKin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3DJ1g::sigmaKin();
	}
	double sigmaHat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "sigmaHat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::sigmaHat();
	}
	void setIdColAcol() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "setIdColAcol");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::setIdColAcol();
	}
	class std::basic_string<char> name() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "name");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::name();
	}
	int code() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "code");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::code();
	}
	class std::basic_string<char> inFlux() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "inFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::inFlux();
	}
	int id3Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "id3Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::id3Mass();
	}
	class std::basic_string<char> namePrefix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "namePrefix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::namePrefix();
	}
	class std::basic_string<char> namePostfix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "namePostfix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3PJ1g::namePostfix();
	}
	int nFinal() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "nFinal");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2Process::nFinal();
	}
	void set2Kin(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "set2Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::set2Kin(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	void set2KinMPI(double a0, double a1, double a2, double a3, double a4, double a5, double a6, bool a7, double a8, double a9) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "set2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::set2KinMPI(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	double sigmaHatWrap(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "sigmaHatWrap");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2Process::sigmaHatWrap(a0, a1);
	}
	bool final2KinMPI(int a0, int a1, class Pythia8::Vec4 a2, class Pythia8::Vec4 a3, double a4, double a5) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "final2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Sigma2Process::final2KinMPI(a0, a1, a2, a3, a4, a5);
	}
	void store2Kin(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "store2Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::store2Kin(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	void store2KinMPI(double a0, double a1, double a2, double a3, double a4, double a5, double a6, bool a7, double a8, double a9) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "store2KinMPI");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2Process::store2KinMPI(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	bool setupForME() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "setupForME");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Sigma2Process::setupForME();
	}
	bool initFlux() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "initFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::initFlux();
	}
	void set1Kin(double a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "set1Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::set1Kin(a0, a1, a2);
	}
	void set3Kin(double a0, double a1, double a2, class Pythia8::Vec4 a3, class Pythia8::Vec4 a4, class Pythia8::Vec4 a5, double a6, double a7, double a8, double a9, double a10, double a11) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "set3Kin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::set3Kin(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}
	double sigmaPDF(bool a0, bool a1, bool a2, double a3, double a4) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "sigmaPDF");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::sigmaPDF(a0, a1, a2, a3, a4);
	}
	double weightDecayFlav(class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "weightDecayFlav");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::weightDecayFlav(a0);
	}
	double weightDecay(class Pythia8::Event & a0, int a1, int a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "weightDecay");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::weightDecay(a0, a1, a2);
	}
	void setScale() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "setScale");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::setScale();
	}
	bool convert2mb() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "convert2mb");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::convert2mb();
	}
	bool convertM2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "convertM2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::convertM2();
	}
	bool isLHA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "isLHA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isLHA();
	}
	bool isNonDiff() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "isNonDiff");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isNonDiff();
	}
	bool isResolved() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "isResolved");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isResolved();
	}
	bool isDiffA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "isDiffA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffA();
	}
	bool isDiffB() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "isDiffB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffB();
	}
	bool isDiffC() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "isDiffC");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isDiffC();
	}
	bool isSUSY() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "isSUSY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isSUSY();
	}
	bool allowNegativeSigma() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "allowNegativeSigma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::allowNegativeSigma();
	}
	int id4Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "id4Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::id4Mass();
	}
	int id5Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "id5Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::id5Mass();
	}
	int resonanceA() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "resonanceA");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::resonanceA();
	}
	int resonanceB() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "resonanceB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::resonanceB();
	}
	bool isSChannel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "isSChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isSChannel();
	}
	int idSChannel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "idSChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idSChannel();
	}
	bool isQCD3body() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "isQCD3body");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::isQCD3body();
	}
	int idTchan1() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "idTchan1");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idTchan1();
	}
	int idTchan2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "idTchan2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::idTchan2();
	}
	double tChanFracPow1() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "tChanFracPow1");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::tChanFracPow1();
	}
	double tChanFracPow2() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "tChanFracPow2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SigmaProcess::tChanFracPow2();
	}
	bool useMirrorWeight() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "useMirrorWeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SigmaProcess::useMirrorWeight();
	}
	int gmZmode() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "gmZmode");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SigmaProcess::gmZmode();
	}
	void setIdInDiff(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "setIdInDiff");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SigmaProcess::setIdInDiff(a0, a1);
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3DJ1g *>(this), "onStat");
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

void bind_Pythia8_PhaseSpace_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::Rambo file:Pythia8/PhaseSpace.h line:636
		pybind11::class_<Pythia8::Rambo, std::shared_ptr<Pythia8::Rambo>> cl(M("Pythia8"), "Rambo", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::Rambo(); } ) );
		cl.def( pybind11::init<class Pythia8::Rndm *>(), pybind11::arg("rndmPtrIn") );

		cl.def("initPtr", (void (Pythia8::Rambo::*)(class Pythia8::Rndm *)) &Pythia8::Rambo::initPtr, "C++: Pythia8::Rambo::initPtr(class Pythia8::Rndm *) --> void", pybind11::arg("rndmPtrIn"));
		cl.def("genPoint", (double (Pythia8::Rambo::*)(double, int, class std::vector<class Pythia8::Vec4, class std::allocator<class Pythia8::Vec4> > &)) &Pythia8::Rambo::genPoint, "C++: Pythia8::Rambo::genPoint(double, int, class std::vector<class Pythia8::Vec4, class std::allocator<class Pythia8::Vec4> > &) --> double", pybind11::arg("eCM"), pybind11::arg("nOut"), pybind11::arg("pOut"));
		cl.def("genPoint", (double (Pythia8::Rambo::*)(double, class std::vector<double, class std::allocator<double> >, class std::vector<class Pythia8::Vec4, class std::allocator<class Pythia8::Vec4> > &)) &Pythia8::Rambo::genPoint, "C++: Pythia8::Rambo::genPoint(double, class std::vector<double, class std::allocator<double> >, class std::vector<class Pythia8::Vec4, class std::allocator<class Pythia8::Vec4> > &) --> double", pybind11::arg("eCM"), pybind11::arg("mIn"), pybind11::arg("pOut"));
		cl.def("assign", (class Pythia8::Rambo & (Pythia8::Rambo::*)(const class Pythia8::Rambo &)) &Pythia8::Rambo::operator=, "C++: Pythia8::Rambo::operator=(const class Pythia8::Rambo &) --> class Pythia8::Rambo &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::SigmaOniaSetup file:Pythia8/SigmaOnia.h line:20
		pybind11::class_<Pythia8::SigmaOniaSetup, std::shared_ptr<Pythia8::SigmaOniaSetup>> cl(M("Pythia8"), "SigmaOniaSetup", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::SigmaOniaSetup(); } ) );
		cl.def( pybind11::init<class Pythia8::Info *, int>(), pybind11::arg("infoPtrIn"), pybind11::arg("flavourIn") );

		cl.def( pybind11::init( [](Pythia8::SigmaOniaSetup const &o){ return new Pythia8::SigmaOniaSetup(o); } ) );
		cl.def("setupSigma2gg", [](Pythia8::SigmaOniaSetup &o, class std::vector<class Pythia8::SigmaProcess *, class std::allocator<class Pythia8::SigmaProcess *> > & a0) -> void { return o.setupSigma2gg(a0); }, "", pybind11::arg("procs"));
		cl.def("setupSigma2gg", (void (Pythia8::SigmaOniaSetup::*)(class std::vector<class Pythia8::SigmaProcess *, class std::allocator<class Pythia8::SigmaProcess *> > &, bool)) &Pythia8::SigmaOniaSetup::setupSigma2gg, "C++: Pythia8::SigmaOniaSetup::setupSigma2gg(class std::vector<class Pythia8::SigmaProcess *, class std::allocator<class Pythia8::SigmaProcess *> > &, bool) --> void", pybind11::arg("procs"), pybind11::arg("oniaIn"));
		cl.def("setupSigma2qg", [](Pythia8::SigmaOniaSetup &o, class std::vector<class Pythia8::SigmaProcess *, class std::allocator<class Pythia8::SigmaProcess *> > & a0) -> void { return o.setupSigma2qg(a0); }, "", pybind11::arg("procs"));
		cl.def("setupSigma2qg", (void (Pythia8::SigmaOniaSetup::*)(class std::vector<class Pythia8::SigmaProcess *, class std::allocator<class Pythia8::SigmaProcess *> > &, bool)) &Pythia8::SigmaOniaSetup::setupSigma2qg, "C++: Pythia8::SigmaOniaSetup::setupSigma2qg(class std::vector<class Pythia8::SigmaProcess *, class std::allocator<class Pythia8::SigmaProcess *> > &, bool) --> void", pybind11::arg("procs"), pybind11::arg("oniaIn"));
		cl.def("setupSigma2qq", [](Pythia8::SigmaOniaSetup &o, class std::vector<class Pythia8::SigmaProcess *, class std::allocator<class Pythia8::SigmaProcess *> > & a0) -> void { return o.setupSigma2qq(a0); }, "", pybind11::arg("procs"));
		cl.def("setupSigma2qq", (void (Pythia8::SigmaOniaSetup::*)(class std::vector<class Pythia8::SigmaProcess *, class std::allocator<class Pythia8::SigmaProcess *> > &, bool)) &Pythia8::SigmaOniaSetup::setupSigma2qq, "C++: Pythia8::SigmaOniaSetup::setupSigma2qq(class std::vector<class Pythia8::SigmaProcess *, class std::allocator<class Pythia8::SigmaProcess *> > &, bool) --> void", pybind11::arg("procs"), pybind11::arg("oniaIn"));
		cl.def("assign", (class Pythia8::SigmaOniaSetup & (Pythia8::SigmaOniaSetup::*)(const class Pythia8::SigmaOniaSetup &)) &Pythia8::SigmaOniaSetup::operator=, "C++: Pythia8::SigmaOniaSetup::operator=(const class Pythia8::SigmaOniaSetup &) --> class Pythia8::SigmaOniaSetup &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::Sigma2gg2QQbar3S11g file:Pythia8/SigmaOnia.h line:76
		pybind11::class_<Pythia8::Sigma2gg2QQbar3S11g, std::shared_ptr<Pythia8::Sigma2gg2QQbar3S11g>, PyCallBack_Pythia8_Sigma2gg2QQbar3S11g, Pythia8::Sigma2Process> cl(M("Pythia8"), "Sigma2gg2QQbar3S11g", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<int, double, int>(), pybind11::arg("idHadIn"), pybind11::arg("oniumMEIn"), pybind11::arg("codeIn") );

		cl.def("initProc", (void (Pythia8::Sigma2gg2QQbar3S11g::*)()) &Pythia8::Sigma2gg2QQbar3S11g::initProc, "C++: Pythia8::Sigma2gg2QQbar3S11g::initProc() --> void");
		cl.def("sigmaKin", (void (Pythia8::Sigma2gg2QQbar3S11g::*)()) &Pythia8::Sigma2gg2QQbar3S11g::sigmaKin, "C++: Pythia8::Sigma2gg2QQbar3S11g::sigmaKin() --> void");
		cl.def("sigmaHat", (double (Pythia8::Sigma2gg2QQbar3S11g::*)()) &Pythia8::Sigma2gg2QQbar3S11g::sigmaHat, "C++: Pythia8::Sigma2gg2QQbar3S11g::sigmaHat() --> double");
		cl.def("setIdColAcol", (void (Pythia8::Sigma2gg2QQbar3S11g::*)()) &Pythia8::Sigma2gg2QQbar3S11g::setIdColAcol, "C++: Pythia8::Sigma2gg2QQbar3S11g::setIdColAcol() --> void");
		cl.def("name", (std::string (Pythia8::Sigma2gg2QQbar3S11g::*)() const) &Pythia8::Sigma2gg2QQbar3S11g::name, "C++: Pythia8::Sigma2gg2QQbar3S11g::name() const --> std::string");
		cl.def("code", (int (Pythia8::Sigma2gg2QQbar3S11g::*)() const) &Pythia8::Sigma2gg2QQbar3S11g::code, "C++: Pythia8::Sigma2gg2QQbar3S11g::code() const --> int");
		cl.def("inFlux", (std::string (Pythia8::Sigma2gg2QQbar3S11g::*)() const) &Pythia8::Sigma2gg2QQbar3S11g::inFlux, "C++: Pythia8::Sigma2gg2QQbar3S11g::inFlux() const --> std::string");
		cl.def("id3Mass", (int (Pythia8::Sigma2gg2QQbar3S11g::*)() const) &Pythia8::Sigma2gg2QQbar3S11g::id3Mass, "C++: Pythia8::Sigma2gg2QQbar3S11g::id3Mass() const --> int");
		cl.def("assign", (class Pythia8::Sigma2gg2QQbar3S11g & (Pythia8::Sigma2gg2QQbar3S11g::*)(const class Pythia8::Sigma2gg2QQbar3S11g &)) &Pythia8::Sigma2gg2QQbar3S11g::operator=, "C++: Pythia8::Sigma2gg2QQbar3S11g::operator=(const class Pythia8::Sigma2gg2QQbar3S11g &) --> class Pythia8::Sigma2gg2QQbar3S11g &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::Sigma2gg2QQbar3S11gm file:Pythia8/SigmaOnia.h line:115
		pybind11::class_<Pythia8::Sigma2gg2QQbar3S11gm, std::shared_ptr<Pythia8::Sigma2gg2QQbar3S11gm>, PyCallBack_Pythia8_Sigma2gg2QQbar3S11gm, Pythia8::Sigma2Process> cl(M("Pythia8"), "Sigma2gg2QQbar3S11gm", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<int, double, int>(), pybind11::arg("idHadIn"), pybind11::arg("oniumMEIn"), pybind11::arg("codeIn") );

		cl.def("initProc", (void (Pythia8::Sigma2gg2QQbar3S11gm::*)()) &Pythia8::Sigma2gg2QQbar3S11gm::initProc, "C++: Pythia8::Sigma2gg2QQbar3S11gm::initProc() --> void");
		cl.def("sigmaKin", (void (Pythia8::Sigma2gg2QQbar3S11gm::*)()) &Pythia8::Sigma2gg2QQbar3S11gm::sigmaKin, "C++: Pythia8::Sigma2gg2QQbar3S11gm::sigmaKin() --> void");
		cl.def("sigmaHat", (double (Pythia8::Sigma2gg2QQbar3S11gm::*)()) &Pythia8::Sigma2gg2QQbar3S11gm::sigmaHat, "C++: Pythia8::Sigma2gg2QQbar3S11gm::sigmaHat() --> double");
		cl.def("setIdColAcol", (void (Pythia8::Sigma2gg2QQbar3S11gm::*)()) &Pythia8::Sigma2gg2QQbar3S11gm::setIdColAcol, "C++: Pythia8::Sigma2gg2QQbar3S11gm::setIdColAcol() --> void");
		cl.def("name", (std::string (Pythia8::Sigma2gg2QQbar3S11gm::*)() const) &Pythia8::Sigma2gg2QQbar3S11gm::name, "C++: Pythia8::Sigma2gg2QQbar3S11gm::name() const --> std::string");
		cl.def("code", (int (Pythia8::Sigma2gg2QQbar3S11gm::*)() const) &Pythia8::Sigma2gg2QQbar3S11gm::code, "C++: Pythia8::Sigma2gg2QQbar3S11gm::code() const --> int");
		cl.def("inFlux", (std::string (Pythia8::Sigma2gg2QQbar3S11gm::*)() const) &Pythia8::Sigma2gg2QQbar3S11gm::inFlux, "C++: Pythia8::Sigma2gg2QQbar3S11gm::inFlux() const --> std::string");
		cl.def("id3Mass", (int (Pythia8::Sigma2gg2QQbar3S11gm::*)() const) &Pythia8::Sigma2gg2QQbar3S11gm::id3Mass, "C++: Pythia8::Sigma2gg2QQbar3S11gm::id3Mass() const --> int");
		cl.def("assign", (class Pythia8::Sigma2gg2QQbar3S11gm & (Pythia8::Sigma2gg2QQbar3S11gm::*)(const class Pythia8::Sigma2gg2QQbar3S11gm &)) &Pythia8::Sigma2gg2QQbar3S11gm::operator=, "C++: Pythia8::Sigma2gg2QQbar3S11gm::operator=(const class Pythia8::Sigma2gg2QQbar3S11gm &) --> class Pythia8::Sigma2gg2QQbar3S11gm &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::Sigma2gg2QQbar3PJ1g file:Pythia8/SigmaOnia.h line:155
		pybind11::class_<Pythia8::Sigma2gg2QQbar3PJ1g, std::shared_ptr<Pythia8::Sigma2gg2QQbar3PJ1g>, PyCallBack_Pythia8_Sigma2gg2QQbar3PJ1g, Pythia8::Sigma2Process> cl(M("Pythia8"), "Sigma2gg2QQbar3PJ1g", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<int, double, int, int>(), pybind11::arg("idHadIn"), pybind11::arg("oniumMEIn"), pybind11::arg("jIn"), pybind11::arg("codeIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_Sigma2gg2QQbar3PJ1g const &o){ return new PyCallBack_Pythia8_Sigma2gg2QQbar3PJ1g(o); } ) );
		cl.def( pybind11::init( [](Pythia8::Sigma2gg2QQbar3PJ1g const &o){ return new Pythia8::Sigma2gg2QQbar3PJ1g(o); } ) );
		cl.def_readwrite("idHad", &Pythia8::Sigma2gg2QQbar3PJ1g::idHad);
		cl.def_readwrite("jSave", &Pythia8::Sigma2gg2QQbar3PJ1g::jSave);
		cl.def_readwrite("codeSave", &Pythia8::Sigma2gg2QQbar3PJ1g::codeSave);
		cl.def_readwrite("nameSave", &Pythia8::Sigma2gg2QQbar3PJ1g::nameSave);
		cl.def_readwrite("oniumME", &Pythia8::Sigma2gg2QQbar3PJ1g::oniumME);
		cl.def_readwrite("sigma", &Pythia8::Sigma2gg2QQbar3PJ1g::sigma);
		cl.def("initProc", (void (Pythia8::Sigma2gg2QQbar3PJ1g::*)()) &Pythia8::Sigma2gg2QQbar3PJ1g::initProc, "C++: Pythia8::Sigma2gg2QQbar3PJ1g::initProc() --> void");
		cl.def("sigmaKin", (void (Pythia8::Sigma2gg2QQbar3PJ1g::*)()) &Pythia8::Sigma2gg2QQbar3PJ1g::sigmaKin, "C++: Pythia8::Sigma2gg2QQbar3PJ1g::sigmaKin() --> void");
		cl.def("sigmaHat", (double (Pythia8::Sigma2gg2QQbar3PJ1g::*)()) &Pythia8::Sigma2gg2QQbar3PJ1g::sigmaHat, "C++: Pythia8::Sigma2gg2QQbar3PJ1g::sigmaHat() --> double");
		cl.def("setIdColAcol", (void (Pythia8::Sigma2gg2QQbar3PJ1g::*)()) &Pythia8::Sigma2gg2QQbar3PJ1g::setIdColAcol, "C++: Pythia8::Sigma2gg2QQbar3PJ1g::setIdColAcol() --> void");
		cl.def("name", (std::string (Pythia8::Sigma2gg2QQbar3PJ1g::*)() const) &Pythia8::Sigma2gg2QQbar3PJ1g::name, "C++: Pythia8::Sigma2gg2QQbar3PJ1g::name() const --> std::string");
		cl.def("code", (int (Pythia8::Sigma2gg2QQbar3PJ1g::*)() const) &Pythia8::Sigma2gg2QQbar3PJ1g::code, "C++: Pythia8::Sigma2gg2QQbar3PJ1g::code() const --> int");
		cl.def("inFlux", (std::string (Pythia8::Sigma2gg2QQbar3PJ1g::*)() const) &Pythia8::Sigma2gg2QQbar3PJ1g::inFlux, "C++: Pythia8::Sigma2gg2QQbar3PJ1g::inFlux() const --> std::string");
		cl.def("id3Mass", (int (Pythia8::Sigma2gg2QQbar3PJ1g::*)() const) &Pythia8::Sigma2gg2QQbar3PJ1g::id3Mass, "C++: Pythia8::Sigma2gg2QQbar3PJ1g::id3Mass() const --> int");
		cl.def("namePrefix", (std::string (Pythia8::Sigma2gg2QQbar3PJ1g::*)() const) &Pythia8::Sigma2gg2QQbar3PJ1g::namePrefix, "C++: Pythia8::Sigma2gg2QQbar3PJ1g::namePrefix() const --> std::string");
		cl.def("namePostfix", (std::string (Pythia8::Sigma2gg2QQbar3PJ1g::*)() const) &Pythia8::Sigma2gg2QQbar3PJ1g::namePostfix, "C++: Pythia8::Sigma2gg2QQbar3PJ1g::namePostfix() const --> std::string");
		cl.def("nameMidfix", (std::string (Pythia8::Sigma2gg2QQbar3PJ1g::*)() const) &Pythia8::Sigma2gg2QQbar3PJ1g::nameMidfix, "C++: Pythia8::Sigma2gg2QQbar3PJ1g::nameMidfix() const --> std::string");
		cl.def("assign", (class Pythia8::Sigma2gg2QQbar3PJ1g & (Pythia8::Sigma2gg2QQbar3PJ1g::*)(const class Pythia8::Sigma2gg2QQbar3PJ1g &)) &Pythia8::Sigma2gg2QQbar3PJ1g::operator=, "C++: Pythia8::Sigma2gg2QQbar3PJ1g::operator=(const class Pythia8::Sigma2gg2QQbar3PJ1g &) --> class Pythia8::Sigma2gg2QQbar3PJ1g &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::Sigma2qg2QQbar3PJ1q file:Pythia8/SigmaOnia.h line:201
		pybind11::class_<Pythia8::Sigma2qg2QQbar3PJ1q, std::shared_ptr<Pythia8::Sigma2qg2QQbar3PJ1q>, PyCallBack_Pythia8_Sigma2qg2QQbar3PJ1q, Pythia8::Sigma2gg2QQbar3PJ1g> cl(M("Pythia8"), "Sigma2qg2QQbar3PJ1q", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<int, double, int, int>(), pybind11::arg("idHadIn"), pybind11::arg("oniumMEIn"), pybind11::arg("jIn"), pybind11::arg("codeIn") );

		cl.def("sigmaKin", (void (Pythia8::Sigma2qg2QQbar3PJ1q::*)()) &Pythia8::Sigma2qg2QQbar3PJ1q::sigmaKin, "C++: Pythia8::Sigma2qg2QQbar3PJ1q::sigmaKin() --> void");
		cl.def("setIdColAcol", (void (Pythia8::Sigma2qg2QQbar3PJ1q::*)()) &Pythia8::Sigma2qg2QQbar3PJ1q::setIdColAcol, "C++: Pythia8::Sigma2qg2QQbar3PJ1q::setIdColAcol() --> void");
		cl.def("inFlux", (std::string (Pythia8::Sigma2qg2QQbar3PJ1q::*)() const) &Pythia8::Sigma2qg2QQbar3PJ1q::inFlux, "C++: Pythia8::Sigma2qg2QQbar3PJ1q::inFlux() const --> std::string");
		cl.def("namePrefix", (std::string (Pythia8::Sigma2qg2QQbar3PJ1q::*)() const) &Pythia8::Sigma2qg2QQbar3PJ1q::namePrefix, "C++: Pythia8::Sigma2qg2QQbar3PJ1q::namePrefix() const --> std::string");
		cl.def("namePostfix", (std::string (Pythia8::Sigma2qg2QQbar3PJ1q::*)() const) &Pythia8::Sigma2qg2QQbar3PJ1q::namePostfix, "C++: Pythia8::Sigma2qg2QQbar3PJ1q::namePostfix() const --> std::string");
		cl.def("assign", (class Pythia8::Sigma2qg2QQbar3PJ1q & (Pythia8::Sigma2qg2QQbar3PJ1q::*)(const class Pythia8::Sigma2qg2QQbar3PJ1q &)) &Pythia8::Sigma2qg2QQbar3PJ1q::operator=, "C++: Pythia8::Sigma2qg2QQbar3PJ1q::operator=(const class Pythia8::Sigma2qg2QQbar3PJ1q &) --> class Pythia8::Sigma2qg2QQbar3PJ1q &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::Sigma2qqbar2QQbar3PJ1g file:Pythia8/SigmaOnia.h line:230
		pybind11::class_<Pythia8::Sigma2qqbar2QQbar3PJ1g, std::shared_ptr<Pythia8::Sigma2qqbar2QQbar3PJ1g>, PyCallBack_Pythia8_Sigma2qqbar2QQbar3PJ1g, Pythia8::Sigma2gg2QQbar3PJ1g> cl(M("Pythia8"), "Sigma2qqbar2QQbar3PJ1g", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<int, double, int, int>(), pybind11::arg("idHadIn"), pybind11::arg("oniumMEIn"), pybind11::arg("jIn"), pybind11::arg("codeIn") );

		cl.def("sigmaKin", (void (Pythia8::Sigma2qqbar2QQbar3PJ1g::*)()) &Pythia8::Sigma2qqbar2QQbar3PJ1g::sigmaKin, "C++: Pythia8::Sigma2qqbar2QQbar3PJ1g::sigmaKin() --> void");
		cl.def("setIdColAcol", (void (Pythia8::Sigma2qqbar2QQbar3PJ1g::*)()) &Pythia8::Sigma2qqbar2QQbar3PJ1g::setIdColAcol, "C++: Pythia8::Sigma2qqbar2QQbar3PJ1g::setIdColAcol() --> void");
		cl.def("inFlux", (std::string (Pythia8::Sigma2qqbar2QQbar3PJ1g::*)() const) &Pythia8::Sigma2qqbar2QQbar3PJ1g::inFlux, "C++: Pythia8::Sigma2qqbar2QQbar3PJ1g::inFlux() const --> std::string");
		cl.def("namePrefix", (std::string (Pythia8::Sigma2qqbar2QQbar3PJ1g::*)() const) &Pythia8::Sigma2qqbar2QQbar3PJ1g::namePrefix, "C++: Pythia8::Sigma2qqbar2QQbar3PJ1g::namePrefix() const --> std::string");
		cl.def("namePostfix", (std::string (Pythia8::Sigma2qqbar2QQbar3PJ1g::*)() const) &Pythia8::Sigma2qqbar2QQbar3PJ1g::namePostfix, "C++: Pythia8::Sigma2qqbar2QQbar3PJ1g::namePostfix() const --> std::string");
		cl.def("assign", (class Pythia8::Sigma2qqbar2QQbar3PJ1g & (Pythia8::Sigma2qqbar2QQbar3PJ1g::*)(const class Pythia8::Sigma2qqbar2QQbar3PJ1g &)) &Pythia8::Sigma2qqbar2QQbar3PJ1g::operator=, "C++: Pythia8::Sigma2qqbar2QQbar3PJ1g::operator=(const class Pythia8::Sigma2qqbar2QQbar3PJ1g &) --> class Pythia8::Sigma2qqbar2QQbar3PJ1g &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::Sigma2gg2QQbar3DJ1g file:Pythia8/SigmaOnia.h line:259
		pybind11::class_<Pythia8::Sigma2gg2QQbar3DJ1g, std::shared_ptr<Pythia8::Sigma2gg2QQbar3DJ1g>, PyCallBack_Pythia8_Sigma2gg2QQbar3DJ1g, Pythia8::Sigma2gg2QQbar3PJ1g> cl(M("Pythia8"), "Sigma2gg2QQbar3DJ1g", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<int, double, int, int>(), pybind11::arg("idHadIn"), pybind11::arg("oniumMEIn"), pybind11::arg("jIn"), pybind11::arg("codeIn") );

		cl.def("initProc", (void (Pythia8::Sigma2gg2QQbar3DJ1g::*)()) &Pythia8::Sigma2gg2QQbar3DJ1g::initProc, "C++: Pythia8::Sigma2gg2QQbar3DJ1g::initProc() --> void");
		cl.def("sigmaKin", (void (Pythia8::Sigma2gg2QQbar3DJ1g::*)()) &Pythia8::Sigma2gg2QQbar3DJ1g::sigmaKin, "C++: Pythia8::Sigma2gg2QQbar3DJ1g::sigmaKin() --> void");
		cl.def("assign", (class Pythia8::Sigma2gg2QQbar3DJ1g & (Pythia8::Sigma2gg2QQbar3DJ1g::*)(const class Pythia8::Sigma2gg2QQbar3DJ1g &)) &Pythia8::Sigma2gg2QQbar3DJ1g::operator=, "C++: Pythia8::Sigma2gg2QQbar3DJ1g::operator=(const class Pythia8::Sigma2gg2QQbar3DJ1g &) --> class Pythia8::Sigma2gg2QQbar3DJ1g &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}

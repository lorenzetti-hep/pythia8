#include <Pythia8/Basics.h>
#include <Pythia8/BeamParticle.h>
#include <Pythia8/Event.h>
#include <Pythia8/GammaKinematics.h>
#include <Pythia8/Info.h>
#include <Pythia8/LesHouches.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/PhaseSpace.h>
#include <Pythia8/PhysicsBase.h>
#include <Pythia8/ProcessContainer.h>
#include <Pythia8/ResonanceDecays.h>
#include <Pythia8/ResonanceWidths.h>
#include <Pythia8/SLHAinterface.h>
#include <Pythia8/Settings.h>
#include <Pythia8/SigmaOnia.h>
#include <Pythia8/SigmaProcess.h>
#include <functional>
#include <istream>
#include <iterator>
#include <map>
#include <memory>
#include <ostream>
#include <sstream>
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

// Pythia8::Sigma2gg2QQbarX8g file:Pythia8/SigmaOnia.h line:279
struct PyCallBack_Pythia8_Sigma2gg2QQbarX8g : public Pythia8::Sigma2gg2QQbarX8g {
	using Pythia8::Sigma2gg2QQbarX8g::Sigma2gg2QQbarX8g;

	void initProc() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "initProc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::initProc();
	}
	void sigmaKin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "sigmaKin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::sigmaKin();
	}
	double sigmaHat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "sigmaHat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::sigmaHat();
	}
	void setIdColAcol() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "setIdColAcol");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::setIdColAcol();
	}
	class std::basic_string<char> name() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "name");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::name();
	}
	int code() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "code");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::code();
	}
	class std::basic_string<char> inFlux() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "inFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::inFlux();
	}
	int id3Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "id3Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::id3Mass();
	}
	class std::basic_string<char> namePrefix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "namePrefix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::namePrefix();
	}
	class std::basic_string<char> namePostfix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "namePostfix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::namePostfix();
	}
	int nFinal() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "nFinal");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "set2Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "set2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "sigmaHatWrap");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "final2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "store2Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "store2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "setupForME");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "initFlux");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "set1Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "set3Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "sigmaPDF");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "weightDecayFlav");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "weightDecay");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "setScale");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "convert2mb");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "convertM2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "isLHA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "isNonDiff");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "isResolved");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "isDiffA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "isDiffB");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "isDiffC");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "isSUSY");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "allowNegativeSigma");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "id4Mass");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "id5Mass");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "resonanceA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "resonanceB");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "isSChannel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "idSChannel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "isQCD3body");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "idTchan1");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "idTchan2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "tChanFracPow1");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "tChanFracPow2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "useMirrorWeight");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "gmZmode");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "setIdInDiff");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbarX8g *>(this), "onStat");
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

// Pythia8::Sigma2qg2QQbarX8q file:Pythia8/SigmaOnia.h line:323
struct PyCallBack_Pythia8_Sigma2qg2QQbarX8q : public Pythia8::Sigma2qg2QQbarX8q {
	using Pythia8::Sigma2qg2QQbarX8q::Sigma2qg2QQbarX8q;

	void sigmaKin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "sigmaKin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2qg2QQbarX8q::sigmaKin();
	}
	void setIdColAcol() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "setIdColAcol");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2qg2QQbarX8q::setIdColAcol();
	}
	class std::basic_string<char> inFlux() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "inFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qg2QQbarX8q::inFlux();
	}
	class std::basic_string<char> namePrefix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "namePrefix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qg2QQbarX8q::namePrefix();
	}
	class std::basic_string<char> namePostfix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "namePostfix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qg2QQbarX8q::namePostfix();
	}
	void initProc() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "initProc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::initProc();
	}
	double sigmaHat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "sigmaHat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::sigmaHat();
	}
	class std::basic_string<char> name() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "name");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::name();
	}
	int code() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "code");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::code();
	}
	int id3Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "id3Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::id3Mass();
	}
	int nFinal() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "nFinal");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "set2Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "set2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "sigmaHatWrap");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "final2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "store2Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "store2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "setupForME");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "initFlux");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "set1Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "set3Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "sigmaPDF");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "weightDecayFlav");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "weightDecay");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "setScale");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "convert2mb");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "convertM2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "isLHA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "isNonDiff");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "isResolved");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "isDiffA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "isDiffB");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "isDiffC");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "isSUSY");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "allowNegativeSigma");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "id4Mass");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "id5Mass");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "resonanceA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "resonanceB");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "isSChannel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "idSChannel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "isQCD3body");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "idTchan1");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "idTchan2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "tChanFracPow1");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "tChanFracPow2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "useMirrorWeight");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "gmZmode");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "setIdInDiff");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qg2QQbarX8q *>(this), "onStat");
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

// Pythia8::Sigma2qqbar2QQbarX8g file:Pythia8/SigmaOnia.h line:354
struct PyCallBack_Pythia8_Sigma2qqbar2QQbarX8g : public Pythia8::Sigma2qqbar2QQbarX8g {
	using Pythia8::Sigma2qqbar2QQbarX8g::Sigma2qqbar2QQbarX8g;

	void sigmaKin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "sigmaKin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2qqbar2QQbarX8g::sigmaKin();
	}
	void setIdColAcol() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "setIdColAcol");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2qqbar2QQbarX8g::setIdColAcol();
	}
	class std::basic_string<char> inFlux() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "inFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qqbar2QQbarX8g::inFlux();
	}
	class std::basic_string<char> namePrefix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "namePrefix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qqbar2QQbarX8g::namePrefix();
	}
	class std::basic_string<char> namePostfix() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "namePostfix");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qqbar2QQbarX8g::namePostfix();
	}
	void initProc() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "initProc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::initProc();
	}
	double sigmaHat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "sigmaHat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::sigmaHat();
	}
	class std::basic_string<char> name() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "name");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::name();
	}
	int code() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "code");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::code();
	}
	int id3Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "id3Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbarX8g::id3Mass();
	}
	int nFinal() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "nFinal");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "set2Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "set2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "sigmaHatWrap");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "final2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "store2Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "store2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "setupForME");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "initFlux");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "set1Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "set3Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "sigmaPDF");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "weightDecayFlav");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "weightDecay");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "setScale");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "convert2mb");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "convertM2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "isLHA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "isNonDiff");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "isResolved");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "isDiffA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "isDiffB");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "isDiffC");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "isSUSY");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "allowNegativeSigma");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "id4Mass");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "id5Mass");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "resonanceA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "resonanceB");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "isSChannel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "idSChannel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "isQCD3body");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "idTchan1");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "idTchan2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "tChanFracPow1");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "tChanFracPow2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "useMirrorWeight");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "gmZmode");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "setIdInDiff");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbarX8g *>(this), "onStat");
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

// Pythia8::Sigma2gg2QQbar3S11QQbar3S11 file:Pythia8/SigmaOnia.h line:384
struct PyCallBack_Pythia8_Sigma2gg2QQbar3S11QQbar3S11 : public Pythia8::Sigma2gg2QQbar3S11QQbar3S11 {
	using Pythia8::Sigma2gg2QQbar3S11QQbar3S11::Sigma2gg2QQbar3S11QQbar3S11;

	void initProc() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "initProc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3S11QQbar3S11::initProc();
	}
	void sigmaKin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "sigmaKin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3S11QQbar3S11::sigmaKin();
	}
	double sigmaHat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "sigmaHat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2gg2QQbar3S11QQbar3S11::sigmaHat();
	}
	void setIdColAcol() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "setIdColAcol");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2gg2QQbar3S11QQbar3S11::setIdColAcol();
	}
	class std::basic_string<char> name() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "name");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3S11QQbar3S11::name();
	}
	int code() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "code");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3S11QQbar3S11::code();
	}
	class std::basic_string<char> inFlux() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "inFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2gg2QQbar3S11QQbar3S11::inFlux();
	}
	int id3Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "id3Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3S11QQbar3S11::id3Mass();
	}
	int id4Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "id4Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2gg2QQbar3S11QQbar3S11::id4Mass();
	}
	int nFinal() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "nFinal");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "set2Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "set2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "sigmaHatWrap");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "final2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "store2Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "store2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "setupForME");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "initFlux");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "set1Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "set3Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "sigmaPDF");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "weightDecayFlav");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "weightDecay");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "setScale");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "convert2mb");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "convertM2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "isLHA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "isNonDiff");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "isResolved");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "isDiffA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "isDiffB");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "isDiffC");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "isSUSY");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "allowNegativeSigma");
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
	int id5Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "id5Mass");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "resonanceA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "resonanceB");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "isSChannel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "idSChannel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "isQCD3body");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "idTchan1");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "idTchan2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "tChanFracPow1");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "tChanFracPow2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "useMirrorWeight");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "gmZmode");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "setIdInDiff");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2gg2QQbar3S11QQbar3S11 *>(this), "onStat");
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

// Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 file:Pythia8/SigmaOnia.h line:427
struct PyCallBack_Pythia8_Sigma2qqbar2QQbar3S11QQbar3S11 : public Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 {
	using Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::Sigma2qqbar2QQbar3S11QQbar3S11;

	void initProc() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "initProc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2qqbar2QQbar3S11QQbar3S11::initProc();
	}
	void sigmaKin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "sigmaKin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2qqbar2QQbar3S11QQbar3S11::sigmaKin();
	}
	double sigmaHat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "sigmaHat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Sigma2qqbar2QQbar3S11QQbar3S11::sigmaHat();
	}
	void setIdColAcol() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "setIdColAcol");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Sigma2qqbar2QQbar3S11QQbar3S11::setIdColAcol();
	}
	class std::basic_string<char> name() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "name");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qqbar2QQbar3S11QQbar3S11::name();
	}
	int code() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "code");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2qqbar2QQbar3S11QQbar3S11::code();
	}
	class std::basic_string<char> inFlux() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "inFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_string<char>>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_string<char>> caster;
				return pybind11::detail::cast_ref<class std::basic_string<char>>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_string<char>>(std::move(o));
		}
		return Sigma2qqbar2QQbar3S11QQbar3S11::inFlux();
	}
	int id3Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "id3Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2qqbar2QQbar3S11QQbar3S11::id3Mass();
	}
	int id4Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "id4Mass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Sigma2qqbar2QQbar3S11QQbar3S11::id4Mass();
	}
	int nFinal() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "nFinal");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "set2Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "set2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "sigmaHatWrap");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "final2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "store2Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "store2KinMPI");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "setupForME");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "initFlux");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "set1Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "set3Kin");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "sigmaPDF");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "weightDecayFlav");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "weightDecay");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "setScale");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "convert2mb");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "convertM2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "isLHA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "isNonDiff");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "isResolved");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "isDiffA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "isDiffB");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "isDiffC");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "isSUSY");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "allowNegativeSigma");
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
	int id5Mass() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "id5Mass");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "resonanceA");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "resonanceB");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "isSChannel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "idSChannel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "isQCD3body");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "idTchan1");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "idTchan2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "tChanFracPow1");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "tChanFracPow2");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "useMirrorWeight");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "gmZmode");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "setIdInDiff");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 *>(this), "onStat");
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

// Pythia8::ProcessContainer file:Pythia8/ProcessContainer.h line:39
struct PyCallBack_Pythia8_ProcessContainer : public Pythia8::ProcessContainer {
	using Pythia8::ProcessContainer::ProcessContainer;

	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ProcessContainer *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ProcessContainer *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ProcessContainer *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ProcessContainer *>(this), "onStat");
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

void bind_Pythia8_SigmaOnia(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::Sigma2gg2QQbarX8g file:Pythia8/SigmaOnia.h line:279
		pybind11::class_<Pythia8::Sigma2gg2QQbarX8g, std::shared_ptr<Pythia8::Sigma2gg2QQbarX8g>, PyCallBack_Pythia8_Sigma2gg2QQbarX8g, Pythia8::Sigma2Process> cl(M("Pythia8"), "Sigma2gg2QQbarX8g", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<int, double, int, double, int>(), pybind11::arg("idHadIn"), pybind11::arg("oniumMEIn"), pybind11::arg("stateIn"), pybind11::arg("mSplitIn"), pybind11::arg("codeIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_Sigma2gg2QQbarX8g const &o){ return new PyCallBack_Pythia8_Sigma2gg2QQbarX8g(o); } ) );
		cl.def( pybind11::init( [](Pythia8::Sigma2gg2QQbarX8g const &o){ return new Pythia8::Sigma2gg2QQbarX8g(o); } ) );
		cl.def_readwrite("idHad", &Pythia8::Sigma2gg2QQbarX8g::idHad);
		cl.def_readwrite("stateSave", &Pythia8::Sigma2gg2QQbarX8g::stateSave);
		cl.def_readwrite("codeSave", &Pythia8::Sigma2gg2QQbarX8g::codeSave);
		cl.def_readwrite("nameSave", &Pythia8::Sigma2gg2QQbarX8g::nameSave);
		cl.def_readwrite("oniumME", &Pythia8::Sigma2gg2QQbarX8g::oniumME);
		cl.def_readwrite("sigma", &Pythia8::Sigma2gg2QQbarX8g::sigma);
		cl.def_readwrite("mSplit", &Pythia8::Sigma2gg2QQbarX8g::mSplit);
		cl.def("initProc", (void (Pythia8::Sigma2gg2QQbarX8g::*)()) &Pythia8::Sigma2gg2QQbarX8g::initProc, "C++: Pythia8::Sigma2gg2QQbarX8g::initProc() --> void");
		cl.def("sigmaKin", (void (Pythia8::Sigma2gg2QQbarX8g::*)()) &Pythia8::Sigma2gg2QQbarX8g::sigmaKin, "C++: Pythia8::Sigma2gg2QQbarX8g::sigmaKin() --> void");
		cl.def("sigmaHat", (double (Pythia8::Sigma2gg2QQbarX8g::*)()) &Pythia8::Sigma2gg2QQbarX8g::sigmaHat, "C++: Pythia8::Sigma2gg2QQbarX8g::sigmaHat() --> double");
		cl.def("setIdColAcol", (void (Pythia8::Sigma2gg2QQbarX8g::*)()) &Pythia8::Sigma2gg2QQbarX8g::setIdColAcol, "C++: Pythia8::Sigma2gg2QQbarX8g::setIdColAcol() --> void");
		cl.def("name", (std::string (Pythia8::Sigma2gg2QQbarX8g::*)() const) &Pythia8::Sigma2gg2QQbarX8g::name, "C++: Pythia8::Sigma2gg2QQbarX8g::name() const --> std::string");
		cl.def("code", (int (Pythia8::Sigma2gg2QQbarX8g::*)() const) &Pythia8::Sigma2gg2QQbarX8g::code, "C++: Pythia8::Sigma2gg2QQbarX8g::code() const --> int");
		cl.def("inFlux", (std::string (Pythia8::Sigma2gg2QQbarX8g::*)() const) &Pythia8::Sigma2gg2QQbarX8g::inFlux, "C++: Pythia8::Sigma2gg2QQbarX8g::inFlux() const --> std::string");
		cl.def("id3Mass", (int (Pythia8::Sigma2gg2QQbarX8g::*)() const) &Pythia8::Sigma2gg2QQbarX8g::id3Mass, "C++: Pythia8::Sigma2gg2QQbarX8g::id3Mass() const --> int");
		cl.def("namePrefix", (std::string (Pythia8::Sigma2gg2QQbarX8g::*)() const) &Pythia8::Sigma2gg2QQbarX8g::namePrefix, "C++: Pythia8::Sigma2gg2QQbarX8g::namePrefix() const --> std::string");
		cl.def("namePostfix", (std::string (Pythia8::Sigma2gg2QQbarX8g::*)() const) &Pythia8::Sigma2gg2QQbarX8g::namePostfix, "C++: Pythia8::Sigma2gg2QQbarX8g::namePostfix() const --> std::string");
		cl.def("assign", (class Pythia8::Sigma2gg2QQbarX8g & (Pythia8::Sigma2gg2QQbarX8g::*)(const class Pythia8::Sigma2gg2QQbarX8g &)) &Pythia8::Sigma2gg2QQbarX8g::operator=, "C++: Pythia8::Sigma2gg2QQbarX8g::operator=(const class Pythia8::Sigma2gg2QQbarX8g &) --> class Pythia8::Sigma2gg2QQbarX8g &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::Sigma2qg2QQbarX8q file:Pythia8/SigmaOnia.h line:323
		pybind11::class_<Pythia8::Sigma2qg2QQbarX8q, std::shared_ptr<Pythia8::Sigma2qg2QQbarX8q>, PyCallBack_Pythia8_Sigma2qg2QQbarX8q, Pythia8::Sigma2gg2QQbarX8g> cl(M("Pythia8"), "Sigma2qg2QQbarX8q", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<int, double, int, double, int>(), pybind11::arg("idHadIn"), pybind11::arg("oniumMEIn"), pybind11::arg("stateIn"), pybind11::arg("mSplitIn"), pybind11::arg("codeIn") );

		cl.def("sigmaKin", (void (Pythia8::Sigma2qg2QQbarX8q::*)()) &Pythia8::Sigma2qg2QQbarX8q::sigmaKin, "C++: Pythia8::Sigma2qg2QQbarX8q::sigmaKin() --> void");
		cl.def("setIdColAcol", (void (Pythia8::Sigma2qg2QQbarX8q::*)()) &Pythia8::Sigma2qg2QQbarX8q::setIdColAcol, "C++: Pythia8::Sigma2qg2QQbarX8q::setIdColAcol() --> void");
		cl.def("inFlux", (std::string (Pythia8::Sigma2qg2QQbarX8q::*)() const) &Pythia8::Sigma2qg2QQbarX8q::inFlux, "C++: Pythia8::Sigma2qg2QQbarX8q::inFlux() const --> std::string");
		cl.def("namePrefix", (std::string (Pythia8::Sigma2qg2QQbarX8q::*)() const) &Pythia8::Sigma2qg2QQbarX8q::namePrefix, "C++: Pythia8::Sigma2qg2QQbarX8q::namePrefix() const --> std::string");
		cl.def("namePostfix", (std::string (Pythia8::Sigma2qg2QQbarX8q::*)() const) &Pythia8::Sigma2qg2QQbarX8q::namePostfix, "C++: Pythia8::Sigma2qg2QQbarX8q::namePostfix() const --> std::string");
		cl.def("assign", (class Pythia8::Sigma2qg2QQbarX8q & (Pythia8::Sigma2qg2QQbarX8q::*)(const class Pythia8::Sigma2qg2QQbarX8q &)) &Pythia8::Sigma2qg2QQbarX8q::operator=, "C++: Pythia8::Sigma2qg2QQbarX8q::operator=(const class Pythia8::Sigma2qg2QQbarX8q &) --> class Pythia8::Sigma2qg2QQbarX8q &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::Sigma2qqbar2QQbarX8g file:Pythia8/SigmaOnia.h line:354
		pybind11::class_<Pythia8::Sigma2qqbar2QQbarX8g, std::shared_ptr<Pythia8::Sigma2qqbar2QQbarX8g>, PyCallBack_Pythia8_Sigma2qqbar2QQbarX8g, Pythia8::Sigma2gg2QQbarX8g> cl(M("Pythia8"), "Sigma2qqbar2QQbarX8g", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<int, double, int, double, int>(), pybind11::arg("idHadIn"), pybind11::arg("oniumMEIn"), pybind11::arg("stateIn"), pybind11::arg("mSplitIn"), pybind11::arg("codeIn") );

		cl.def("sigmaKin", (void (Pythia8::Sigma2qqbar2QQbarX8g::*)()) &Pythia8::Sigma2qqbar2QQbarX8g::sigmaKin, "C++: Pythia8::Sigma2qqbar2QQbarX8g::sigmaKin() --> void");
		cl.def("setIdColAcol", (void (Pythia8::Sigma2qqbar2QQbarX8g::*)()) &Pythia8::Sigma2qqbar2QQbarX8g::setIdColAcol, "C++: Pythia8::Sigma2qqbar2QQbarX8g::setIdColAcol() --> void");
		cl.def("inFlux", (std::string (Pythia8::Sigma2qqbar2QQbarX8g::*)() const) &Pythia8::Sigma2qqbar2QQbarX8g::inFlux, "C++: Pythia8::Sigma2qqbar2QQbarX8g::inFlux() const --> std::string");
		cl.def("namePrefix", (std::string (Pythia8::Sigma2qqbar2QQbarX8g::*)() const) &Pythia8::Sigma2qqbar2QQbarX8g::namePrefix, "C++: Pythia8::Sigma2qqbar2QQbarX8g::namePrefix() const --> std::string");
		cl.def("namePostfix", (std::string (Pythia8::Sigma2qqbar2QQbarX8g::*)() const) &Pythia8::Sigma2qqbar2QQbarX8g::namePostfix, "C++: Pythia8::Sigma2qqbar2QQbarX8g::namePostfix() const --> std::string");
		cl.def("assign", (class Pythia8::Sigma2qqbar2QQbarX8g & (Pythia8::Sigma2qqbar2QQbarX8g::*)(const class Pythia8::Sigma2qqbar2QQbarX8g &)) &Pythia8::Sigma2qqbar2QQbarX8g::operator=, "C++: Pythia8::Sigma2qqbar2QQbarX8g::operator=(const class Pythia8::Sigma2qqbar2QQbarX8g &) --> class Pythia8::Sigma2qqbar2QQbarX8g &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::Sigma2gg2QQbar3S11QQbar3S11 file:Pythia8/SigmaOnia.h line:384
		pybind11::class_<Pythia8::Sigma2gg2QQbar3S11QQbar3S11, std::shared_ptr<Pythia8::Sigma2gg2QQbar3S11QQbar3S11>, PyCallBack_Pythia8_Sigma2gg2QQbar3S11QQbar3S11, Pythia8::Sigma2Process> cl(M("Pythia8"), "Sigma2gg2QQbar3S11QQbar3S11", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<int, int, double, double, int>(), pybind11::arg("idHad1In"), pybind11::arg("idHad2In"), pybind11::arg("oniumME1In"), pybind11::arg("oniumME2In"), pybind11::arg("codeIn") );

		cl.def("initProc", (void (Pythia8::Sigma2gg2QQbar3S11QQbar3S11::*)()) &Pythia8::Sigma2gg2QQbar3S11QQbar3S11::initProc, "C++: Pythia8::Sigma2gg2QQbar3S11QQbar3S11::initProc() --> void");
		cl.def("sigmaKin", (void (Pythia8::Sigma2gg2QQbar3S11QQbar3S11::*)()) &Pythia8::Sigma2gg2QQbar3S11QQbar3S11::sigmaKin, "C++: Pythia8::Sigma2gg2QQbar3S11QQbar3S11::sigmaKin() --> void");
		cl.def("sigmaHat", (double (Pythia8::Sigma2gg2QQbar3S11QQbar3S11::*)()) &Pythia8::Sigma2gg2QQbar3S11QQbar3S11::sigmaHat, "C++: Pythia8::Sigma2gg2QQbar3S11QQbar3S11::sigmaHat() --> double");
		cl.def("setIdColAcol", (void (Pythia8::Sigma2gg2QQbar3S11QQbar3S11::*)()) &Pythia8::Sigma2gg2QQbar3S11QQbar3S11::setIdColAcol, "C++: Pythia8::Sigma2gg2QQbar3S11QQbar3S11::setIdColAcol() --> void");
		cl.def("name", (std::string (Pythia8::Sigma2gg2QQbar3S11QQbar3S11::*)() const) &Pythia8::Sigma2gg2QQbar3S11QQbar3S11::name, "C++: Pythia8::Sigma2gg2QQbar3S11QQbar3S11::name() const --> std::string");
		cl.def("code", (int (Pythia8::Sigma2gg2QQbar3S11QQbar3S11::*)() const) &Pythia8::Sigma2gg2QQbar3S11QQbar3S11::code, "C++: Pythia8::Sigma2gg2QQbar3S11QQbar3S11::code() const --> int");
		cl.def("inFlux", (std::string (Pythia8::Sigma2gg2QQbar3S11QQbar3S11::*)() const) &Pythia8::Sigma2gg2QQbar3S11QQbar3S11::inFlux, "C++: Pythia8::Sigma2gg2QQbar3S11QQbar3S11::inFlux() const --> std::string");
		cl.def("id3Mass", (int (Pythia8::Sigma2gg2QQbar3S11QQbar3S11::*)() const) &Pythia8::Sigma2gg2QQbar3S11QQbar3S11::id3Mass, "C++: Pythia8::Sigma2gg2QQbar3S11QQbar3S11::id3Mass() const --> int");
		cl.def("id4Mass", (int (Pythia8::Sigma2gg2QQbar3S11QQbar3S11::*)() const) &Pythia8::Sigma2gg2QQbar3S11QQbar3S11::id4Mass, "C++: Pythia8::Sigma2gg2QQbar3S11QQbar3S11::id4Mass() const --> int");
		cl.def("assign", (class Pythia8::Sigma2gg2QQbar3S11QQbar3S11 & (Pythia8::Sigma2gg2QQbar3S11QQbar3S11::*)(const class Pythia8::Sigma2gg2QQbar3S11QQbar3S11 &)) &Pythia8::Sigma2gg2QQbar3S11QQbar3S11::operator=, "C++: Pythia8::Sigma2gg2QQbar3S11QQbar3S11::operator=(const class Pythia8::Sigma2gg2QQbar3S11QQbar3S11 &) --> class Pythia8::Sigma2gg2QQbar3S11QQbar3S11 &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 file:Pythia8/SigmaOnia.h line:427
		pybind11::class_<Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11, std::shared_ptr<Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11>, PyCallBack_Pythia8_Sigma2qqbar2QQbar3S11QQbar3S11, Pythia8::Sigma2Process> cl(M("Pythia8"), "Sigma2qqbar2QQbar3S11QQbar3S11", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<int, int, double, double, int>(), pybind11::arg("idHad1In"), pybind11::arg("idHad2In"), pybind11::arg("oniumME1In"), pybind11::arg("oniumME2In"), pybind11::arg("codeIn") );

		cl.def("initProc", (void (Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::*)()) &Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::initProc, "C++: Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::initProc() --> void");
		cl.def("sigmaKin", (void (Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::*)()) &Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::sigmaKin, "C++: Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::sigmaKin() --> void");
		cl.def("sigmaHat", (double (Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::*)()) &Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::sigmaHat, "C++: Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::sigmaHat() --> double");
		cl.def("setIdColAcol", (void (Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::*)()) &Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::setIdColAcol, "C++: Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::setIdColAcol() --> void");
		cl.def("name", (std::string (Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::*)() const) &Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::name, "C++: Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::name() const --> std::string");
		cl.def("code", (int (Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::*)() const) &Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::code, "C++: Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::code() const --> int");
		cl.def("inFlux", (std::string (Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::*)() const) &Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::inFlux, "C++: Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::inFlux() const --> std::string");
		cl.def("id3Mass", (int (Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::*)() const) &Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::id3Mass, "C++: Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::id3Mass() const --> int");
		cl.def("id4Mass", (int (Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::*)() const) &Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::id4Mass, "C++: Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::id4Mass() const --> int");
		cl.def("assign", (class Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 & (Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::*)(const class Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 &)) &Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::operator=, "C++: Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11::operator=(const class Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 &) --> class Pythia8::Sigma2qqbar2QQbar3S11QQbar3S11 &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ProcessContainer file:Pythia8/ProcessContainer.h line:39
		pybind11::class_<Pythia8::ProcessContainer, std::shared_ptr<Pythia8::ProcessContainer>, PyCallBack_Pythia8_ProcessContainer, Pythia8::PhysicsBase> cl(M("Pythia8"), "ProcessContainer", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::ProcessContainer(); }, [](){ return new PyCallBack_Pythia8_ProcessContainer(); } ), "doc");
		cl.def( pybind11::init( [](class Pythia8::SigmaProcess * a0){ return new Pythia8::ProcessContainer(a0); }, [](class Pythia8::SigmaProcess * a0){ return new PyCallBack_Pythia8_ProcessContainer(a0); } ), "doc");
		cl.def( pybind11::init( [](class Pythia8::SigmaProcess * a0, bool const & a1){ return new Pythia8::ProcessContainer(a0, a1); }, [](class Pythia8::SigmaProcess * a0, bool const & a1){ return new PyCallBack_Pythia8_ProcessContainer(a0, a1); } ), "doc");
		cl.def( pybind11::init<class Pythia8::SigmaProcess *, bool, class Pythia8::PhaseSpace *>(), pybind11::arg("sigmaProcessPtrIn"), pybind11::arg("externalPtrIn"), pybind11::arg("phaseSpacePtrIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ProcessContainer const &o){ return new PyCallBack_Pythia8_ProcessContainer(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ProcessContainer const &o){ return new Pythia8::ProcessContainer(o); } ) );
		cl.def("init", (bool (Pythia8::ProcessContainer::*)(bool, class Pythia8::ResonanceDecays *, class Pythia8::SLHAinterface *, class Pythia8::GammaKinematics *)) &Pythia8::ProcessContainer::init, "C++: Pythia8::ProcessContainer::init(bool, class Pythia8::ResonanceDecays *, class Pythia8::SLHAinterface *, class Pythia8::GammaKinematics *) --> bool", pybind11::arg("isFirst"), pybind11::arg("resDecaysPtrIn"), pybind11::arg("slhaInterfacePtr"), pybind11::arg("gammaKinPtrIn"));
		cl.def("setLHAPtr", [](Pythia8::ProcessContainer &o, class std::shared_ptr<class Pythia8::LHAup> const & a0) -> void { return o.setLHAPtr(a0); }, "", pybind11::arg("lhaUpPtrIn"));
		cl.def("setLHAPtr", [](Pythia8::ProcessContainer &o, class std::shared_ptr<class Pythia8::LHAup> const & a0, class Pythia8::ParticleData * a1) -> void { return o.setLHAPtr(a0, a1); }, "", pybind11::arg("lhaUpPtrIn"), pybind11::arg("particleDataPtrIn"));
		cl.def("setLHAPtr", [](Pythia8::ProcessContainer &o, class std::shared_ptr<class Pythia8::LHAup> const & a0, class Pythia8::ParticleData * a1, class Pythia8::Settings * a2) -> void { return o.setLHAPtr(a0, a1, a2); }, "", pybind11::arg("lhaUpPtrIn"), pybind11::arg("particleDataPtrIn"), pybind11::arg("settingsPtrIn"));
		cl.def("setLHAPtr", (void (Pythia8::ProcessContainer::*)(class std::shared_ptr<class Pythia8::LHAup>, class Pythia8::ParticleData *, class Pythia8::Settings *, class Pythia8::Rndm *)) &Pythia8::ProcessContainer::setLHAPtr, "C++: Pythia8::ProcessContainer::setLHAPtr(class std::shared_ptr<class Pythia8::LHAup>, class Pythia8::ParticleData *, class Pythia8::Settings *, class Pythia8::Rndm *) --> void", pybind11::arg("lhaUpPtrIn"), pybind11::arg("particleDataPtrIn"), pybind11::arg("settingsPtrIn"), pybind11::arg("rndmPtrIn"));
		cl.def("updateBeamIDs", (void (Pythia8::ProcessContainer::*)()) &Pythia8::ProcessContainer::updateBeamIDs, "C++: Pythia8::ProcessContainer::updateBeamIDs() --> void");
		cl.def("newECM", (void (Pythia8::ProcessContainer::*)(double)) &Pythia8::ProcessContainer::newECM, "C++: Pythia8::ProcessContainer::newECM(double) --> void", pybind11::arg("eCM"));
		cl.def("trialProcess", (bool (Pythia8::ProcessContainer::*)()) &Pythia8::ProcessContainer::trialProcess, "C++: Pythia8::ProcessContainer::trialProcess() --> bool");
		cl.def("constructState", (bool (Pythia8::ProcessContainer::*)()) &Pythia8::ProcessContainer::constructState, "C++: Pythia8::ProcessContainer::constructState() --> bool");
		cl.def("constructProcess", [](Pythia8::ProcessContainer &o, class Pythia8::Event & a0) -> bool { return o.constructProcess(a0); }, "", pybind11::arg("process"));
		cl.def("constructProcess", (bool (Pythia8::ProcessContainer::*)(class Pythia8::Event &, bool)) &Pythia8::ProcessContainer::constructProcess, "C++: Pythia8::ProcessContainer::constructProcess(class Pythia8::Event &, bool) --> bool", pybind11::arg("process"), pybind11::arg("isHardest"));
		cl.def("constructDecays", (bool (Pythia8::ProcessContainer::*)(class Pythia8::Event &)) &Pythia8::ProcessContainer::constructDecays, "C++: Pythia8::ProcessContainer::constructDecays(class Pythia8::Event &) --> bool", pybind11::arg("process"));
		cl.def("decayResonances", (bool (Pythia8::ProcessContainer::*)(class Pythia8::Event &)) &Pythia8::ProcessContainer::decayResonances, "C++: Pythia8::ProcessContainer::decayResonances(class Pythia8::Event &) --> bool", pybind11::arg("process"));
		cl.def("accumulate", (void (Pythia8::ProcessContainer::*)()) &Pythia8::ProcessContainer::accumulate, "C++: Pythia8::ProcessContainer::accumulate() --> void");
		cl.def("reset", (void (Pythia8::ProcessContainer::*)()) &Pythia8::ProcessContainer::reset, "C++: Pythia8::ProcessContainer::reset() --> void");
		cl.def("setBeamModes", [](Pythia8::ProcessContainer &o) -> void { return o.setBeamModes(); }, "");
		cl.def("setBeamModes", [](Pythia8::ProcessContainer &o, bool const & a0) -> void { return o.setBeamModes(a0); }, "", pybind11::arg("setVMD"));
		cl.def("setBeamModes", (void (Pythia8::ProcessContainer::*)(bool, bool)) &Pythia8::ProcessContainer::setBeamModes, "C++: Pythia8::ProcessContainer::setBeamModes(bool, bool) --> void", pybind11::arg("setVMD"), pybind11::arg("isSampled"));
		cl.def("name", (std::string (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::name, "C++: Pythia8::ProcessContainer::name() const --> std::string");
		cl.def("code", (int (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::code, "C++: Pythia8::ProcessContainer::code() const --> int");
		cl.def("nFinal", (int (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::nFinal, "C++: Pythia8::ProcessContainer::nFinal() const --> int");
		cl.def("isSUSY", (bool (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::isSUSY, "C++: Pythia8::ProcessContainer::isSUSY() const --> bool");
		cl.def("isNonDiffractive", (bool (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::isNonDiffractive, "C++: Pythia8::ProcessContainer::isNonDiffractive() const --> bool");
		cl.def("isSoftQCD", (bool (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::isSoftQCD, "C++: Pythia8::ProcessContainer::isSoftQCD() const --> bool");
		cl.def("isElastic", (bool (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::isElastic, "C++: Pythia8::ProcessContainer::isElastic() const --> bool");
		cl.def("newSigmaMax", (bool (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::newSigmaMax, "C++: Pythia8::ProcessContainer::newSigmaMax() const --> bool");
		cl.def("sigmaMax", (double (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::sigmaMax, "C++: Pythia8::ProcessContainer::sigmaMax() const --> double");
		cl.def("nTried", (long (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::nTried, "C++: Pythia8::ProcessContainer::nTried() const --> long");
		cl.def("nSelected", (long (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::nSelected, "C++: Pythia8::ProcessContainer::nSelected() const --> long");
		cl.def("nAccepted", (long (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::nAccepted, "C++: Pythia8::ProcessContainer::nAccepted() const --> long");
		cl.def("weightSum", (double (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::weightSum, "C++: Pythia8::ProcessContainer::weightSum() const --> double");
		cl.def("sigmaSelMC", [](Pythia8::ProcessContainer &o) -> double { return o.sigmaSelMC(); }, "");
		cl.def("sigmaSelMC", (double (Pythia8::ProcessContainer::*)(bool)) &Pythia8::ProcessContainer::sigmaSelMC, "C++: Pythia8::ProcessContainer::sigmaSelMC(bool) --> double", pybind11::arg("doAccumulate"));
		cl.def("sigmaMC", [](Pythia8::ProcessContainer &o) -> double { return o.sigmaMC(); }, "");
		cl.def("sigmaMC", (double (Pythia8::ProcessContainer::*)(bool)) &Pythia8::ProcessContainer::sigmaMC, "C++: Pythia8::ProcessContainer::sigmaMC(bool) --> double", pybind11::arg("doAccumulate"));
		cl.def("deltaMC", [](Pythia8::ProcessContainer &o) -> double { return o.deltaMC(); }, "");
		cl.def("deltaMC", (double (Pythia8::ProcessContainer::*)(bool)) &Pythia8::ProcessContainer::deltaMC, "C++: Pythia8::ProcessContainer::deltaMC(bool) --> double", pybind11::arg("doAccumulate"));
		cl.def("sigmaMaxSwitch", (double (Pythia8::ProcessContainer::*)()) &Pythia8::ProcessContainer::sigmaMaxSwitch, "C++: Pythia8::ProcessContainer::sigmaMaxSwitch() --> double");
		cl.def("id1", (int (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::id1, "C++: Pythia8::ProcessContainer::id1() const --> int");
		cl.def("id2", (int (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::id2, "C++: Pythia8::ProcessContainer::id2() const --> int");
		cl.def("x1", (double (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::x1, "C++: Pythia8::ProcessContainer::x1() const --> double");
		cl.def("x2", (double (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::x2, "C++: Pythia8::ProcessContainer::x2() const --> double");
		cl.def("Q2Fac", (double (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::Q2Fac, "C++: Pythia8::ProcessContainer::Q2Fac() const --> double");
		cl.def("mHat", (double (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::mHat, "C++: Pythia8::ProcessContainer::mHat() const --> double");
		cl.def("pTHat", (double (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::pTHat, "C++: Pythia8::ProcessContainer::pTHat() const --> double");
		cl.def("isLHAContainer", (bool (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::isLHAContainer, "C++: Pythia8::ProcessContainer::isLHAContainer() const --> bool");
		cl.def("lhaStrategy", (int (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::lhaStrategy, "C++: Pythia8::ProcessContainer::lhaStrategy() const --> int");
		cl.def("codeLHASize", (int (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::codeLHASize, "C++: Pythia8::ProcessContainer::codeLHASize() const --> int");
		cl.def("subCodeLHA", (int (Pythia8::ProcessContainer::*)(int) const) &Pythia8::ProcessContainer::subCodeLHA, "C++: Pythia8::ProcessContainer::subCodeLHA(int) const --> int", pybind11::arg("i"));
		cl.def("nTriedLHA", (long (Pythia8::ProcessContainer::*)(int) const) &Pythia8::ProcessContainer::nTriedLHA, "C++: Pythia8::ProcessContainer::nTriedLHA(int) const --> long", pybind11::arg("i"));
		cl.def("nSelectedLHA", (long (Pythia8::ProcessContainer::*)(int) const) &Pythia8::ProcessContainer::nSelectedLHA, "C++: Pythia8::ProcessContainer::nSelectedLHA(int) const --> long", pybind11::arg("i"));
		cl.def("nAcceptedLHA", (long (Pythia8::ProcessContainer::*)(int) const) &Pythia8::ProcessContainer::nAcceptedLHA, "C++: Pythia8::ProcessContainer::nAcceptedLHA(int) const --> long", pybind11::arg("i"));
		cl.def("isSame", (void (Pythia8::ProcessContainer::*)(bool)) &Pythia8::ProcessContainer::isSame, "C++: Pythia8::ProcessContainer::isSame(bool) --> void", pybind11::arg("isSameIn"));
		cl.def("isSame", (bool (Pythia8::ProcessContainer::*)() const) &Pythia8::ProcessContainer::isSame, "C++: Pythia8::ProcessContainer::isSame() const --> bool");
		cl.def("assign", (class Pythia8::ProcessContainer & (Pythia8::ProcessContainer::*)(const class Pythia8::ProcessContainer &)) &Pythia8::ProcessContainer::operator=, "C++: Pythia8::ProcessContainer::operator=(const class Pythia8::ProcessContainer &) --> class Pythia8::ProcessContainer &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}

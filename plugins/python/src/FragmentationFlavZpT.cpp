#include <Pythia8/Basics.h>
#include <Pythia8/BeamParticle.h>
#include <Pythia8/FragmentationFlavZpT.h>
#include <Pythia8/HadronWidths.h>
#include <Pythia8/Info.h>
#include <Pythia8/LHEF3.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/PartonDistributions.h>
#include <Pythia8/PartonSystems.h>
#include <Pythia8/PhysicsBase.h>
#include <Pythia8/Settings.h>
#include <Pythia8/SigmaLowEnergy.h>
#include <Pythia8/SigmaTotal.h>
#include <Pythia8/StandardModel.h>
#include <Pythia8/SusyCouplings.h>
#include <Pythia8/Weights.h>
#include <functional>
#include <iterator>
#include <map>
#include <memory>
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

// Pythia8::StringZ file:Pythia8/FragmentationFlavZpT.h line:237
struct PyCallBack_Pythia8_StringZ : public Pythia8::StringZ {
	using Pythia8::StringZ::StringZ;

	void init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringZ *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StringZ::init();
	}
	double zFrag(int a0, int a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringZ *>(this), "zFrag");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return StringZ::zFrag(a0, a1, a2);
	}
	double zLund(double a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringZ *>(this), "zLund");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return StringZ::zLund(a0, a1, a2);
	}
	double zPeterson(double a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringZ *>(this), "zPeterson");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return StringZ::zPeterson(a0);
	}
	double stopMass() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringZ *>(this), "stopMass");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return StringZ::stopMass();
	}
	double stopNewFlav() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringZ *>(this), "stopNewFlav");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return StringZ::stopNewFlav();
	}
	double stopSmear() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringZ *>(this), "stopSmear");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return StringZ::stopSmear();
	}
	double aAreaLund() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringZ *>(this), "aAreaLund");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return StringZ::aAreaLund();
	}
	double bAreaLund() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringZ *>(this), "bAreaLund");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return StringZ::bAreaLund();
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringZ *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringZ *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringZ *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringZ *>(this), "onStat");
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

// Pythia8::StringPT file:Pythia8/FragmentationFlavZpT.h line:291
struct PyCallBack_Pythia8_StringPT : public Pythia8::StringPT {
	using Pythia8::StringPT::StringPT;

	void init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringPT *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StringPT::init();
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringPT *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringPT *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringPT *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringPT *>(this), "onStat");
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

// Pythia8::PDF file:Pythia8/PartonDistributions.h line:50
struct PyCallBack_Pythia8_PDF : public Pythia8::PDF {
	using Pythia8::PDF::PDF;

	void setBeamID(int a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "setBeamID");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PDF::setBeamID(a0);
	}
	void setExtrapolate(bool a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "setExtrapolate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PDF::setExtrapolate(a0);
	}
	bool insideBounds(double a0, double a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "insideBounds");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return PDF::insideBounds(a0, a1);
	}
	double alphaS(double a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "alphaS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::alphaS(a0);
	}
	double mQuarkPDF(int a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "mQuarkPDF");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::mQuarkPDF(a0);
	}
	int nMembers() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "nMembers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return PDF::nMembers();
	}
	void calcPDFEnvelope(int a0, double a1, double a2, int a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "calcPDFEnvelope");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PDF::calcPDFEnvelope(a0, a1, a2, a3);
	}
	void calcPDFEnvelope(struct std::pair<int, int> a0, struct std::pair<double, double> a1, double a2, int a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "calcPDFEnvelope");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PDF::calcPDFEnvelope(a0, a1, a2, a3);
	}
	struct Pythia8::PDF::PDFEnvelope getPDFEnvelope() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "getPDFEnvelope");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<struct Pythia8::PDF::PDFEnvelope>::value) {
				static pybind11::detail::overload_caster_t<struct Pythia8::PDF::PDFEnvelope> caster;
				return pybind11::detail::cast_ref<struct Pythia8::PDF::PDFEnvelope>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<struct Pythia8::PDF::PDFEnvelope>(std::move(o));
		}
		return PDF::getPDFEnvelope();
	}
	double gammaPDFxDependence(int a0, double a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "gammaPDFxDependence");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::gammaPDFxDependence(a0, a1);
	}
	double gammaPDFRefScale(int a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "gammaPDFRefScale");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::gammaPDFRefScale(a0);
	}
	int sampleGammaValFlavor(double a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "sampleGammaValFlavor");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return PDF::sampleGammaValFlavor(a0);
	}
	double xfIntegratedTotal(double a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "xfIntegratedTotal");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::xfIntegratedTotal(a0);
	}
	double xGamma() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "xGamma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::xGamma();
	}
	void xPom(double a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "xPom");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PDF::xPom(a0);
	}
	double xfFlux(int a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "xfFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::xfFlux(a0, a1, a2);
	}
	double xfApprox(int a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "xfApprox");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::xfApprox(a0, a1, a2);
	}
	double xfGamma(int a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "xfGamma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::xfGamma(a0, a1, a2);
	}
	double intFluxApprox() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "intFluxApprox");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::intFluxApprox();
	}
	bool hasApproxGammaFlux() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "hasApproxGammaFlux");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return PDF::hasApproxGammaFlux();
	}
	double getXmin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "getXmin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::getXmin();
	}
	double getXhadr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "getXhadr");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::getXhadr();
	}
	double sampleXgamma(double a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "sampleXgamma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::sampleXgamma(a0);
	}
	double sampleQ2gamma(double a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "sampleQ2gamma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::sampleQ2gamma(a0);
	}
	double xfMax(int a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "xfMax");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::xfMax(a0, a1, a2);
	}
	double xfSame(int a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "xfSame");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return PDF::xfSame(a0, a1, a2);
	}
	void setVMDscale(double a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "setVMDscale");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PDF::setVMDscale(a0);
	}
	void xfUpdate(int a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PDF *>(this), "xfUpdate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"PDF::xfUpdate\"");
	}
};

void bind_Pythia8_FragmentationFlavZpT(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::StringZ file:Pythia8/FragmentationFlavZpT.h line:237
		pybind11::class_<Pythia8::StringZ, std::shared_ptr<Pythia8::StringZ>, PyCallBack_Pythia8_StringZ, Pythia8::PhysicsBase> cl(M("Pythia8"), "StringZ", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::StringZ(); }, [](){ return new PyCallBack_Pythia8_StringZ(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_StringZ const &o){ return new PyCallBack_Pythia8_StringZ(o); } ) );
		cl.def( pybind11::init( [](Pythia8::StringZ const &o){ return new Pythia8::StringZ(o); } ) );
		cl.def_readwrite("useNonStandC", &Pythia8::StringZ::useNonStandC);
		cl.def_readwrite("useNonStandB", &Pythia8::StringZ::useNonStandB);
		cl.def_readwrite("useNonStandH", &Pythia8::StringZ::useNonStandH);
		cl.def_readwrite("usePetersonC", &Pythia8::StringZ::usePetersonC);
		cl.def_readwrite("usePetersonB", &Pythia8::StringZ::usePetersonB);
		cl.def_readwrite("usePetersonH", &Pythia8::StringZ::usePetersonH);
		cl.def_readwrite("mc2", &Pythia8::StringZ::mc2);
		cl.def_readwrite("mb2", &Pythia8::StringZ::mb2);
		cl.def_readwrite("aLund", &Pythia8::StringZ::aLund);
		cl.def_readwrite("bLund", &Pythia8::StringZ::bLund);
		cl.def_readwrite("aExtraSQuark", &Pythia8::StringZ::aExtraSQuark);
		cl.def_readwrite("aExtraDiquark", &Pythia8::StringZ::aExtraDiquark);
		cl.def_readwrite("rFactC", &Pythia8::StringZ::rFactC);
		cl.def_readwrite("rFactB", &Pythia8::StringZ::rFactB);
		cl.def_readwrite("rFactH", &Pythia8::StringZ::rFactH);
		cl.def_readwrite("aNonC", &Pythia8::StringZ::aNonC);
		cl.def_readwrite("aNonB", &Pythia8::StringZ::aNonB);
		cl.def_readwrite("aNonH", &Pythia8::StringZ::aNonH);
		cl.def_readwrite("bNonC", &Pythia8::StringZ::bNonC);
		cl.def_readwrite("bNonB", &Pythia8::StringZ::bNonB);
		cl.def_readwrite("bNonH", &Pythia8::StringZ::bNonH);
		cl.def_readwrite("epsilonC", &Pythia8::StringZ::epsilonC);
		cl.def_readwrite("epsilonB", &Pythia8::StringZ::epsilonB);
		cl.def_readwrite("epsilonH", &Pythia8::StringZ::epsilonH);
		cl.def_readwrite("stopM", &Pythia8::StringZ::stopM);
		cl.def_readwrite("stopNF", &Pythia8::StringZ::stopNF);
		cl.def_readwrite("stopS", &Pythia8::StringZ::stopS);
		cl.def("init", (void (Pythia8::StringZ::*)()) &Pythia8::StringZ::init, "C++: Pythia8::StringZ::init() --> void");
		cl.def("zFrag", [](Pythia8::StringZ &o, int const & a0) -> double { return o.zFrag(a0); }, "", pybind11::arg("idOld"));
		cl.def("zFrag", [](Pythia8::StringZ &o, int const & a0, int const & a1) -> double { return o.zFrag(a0, a1); }, "", pybind11::arg("idOld"), pybind11::arg("idNew"));
		cl.def("zFrag", (double (Pythia8::StringZ::*)(int, int, double)) &Pythia8::StringZ::zFrag, "C++: Pythia8::StringZ::zFrag(int, int, double) --> double", pybind11::arg("idOld"), pybind11::arg("idNew"), pybind11::arg("mT2"));
		cl.def("zLund", [](Pythia8::StringZ &o, double const & a0, double const & a1) -> double { return o.zLund(a0, a1); }, "", pybind11::arg("a"), pybind11::arg("b"));
		cl.def("zLund", (double (Pythia8::StringZ::*)(double, double, double)) &Pythia8::StringZ::zLund, "C++: Pythia8::StringZ::zLund(double, double, double) --> double", pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"));
		cl.def("zPeterson", (double (Pythia8::StringZ::*)(double)) &Pythia8::StringZ::zPeterson, "C++: Pythia8::StringZ::zPeterson(double) --> double", pybind11::arg("epsilon"));
		cl.def("stopMass", (double (Pythia8::StringZ::*)()) &Pythia8::StringZ::stopMass, "C++: Pythia8::StringZ::stopMass() --> double");
		cl.def("stopNewFlav", (double (Pythia8::StringZ::*)()) &Pythia8::StringZ::stopNewFlav, "C++: Pythia8::StringZ::stopNewFlav() --> double");
		cl.def("stopSmear", (double (Pythia8::StringZ::*)()) &Pythia8::StringZ::stopSmear, "C++: Pythia8::StringZ::stopSmear() --> double");
		cl.def("aAreaLund", (double (Pythia8::StringZ::*)()) &Pythia8::StringZ::aAreaLund, "C++: Pythia8::StringZ::aAreaLund() --> double");
		cl.def("bAreaLund", (double (Pythia8::StringZ::*)()) &Pythia8::StringZ::bAreaLund, "C++: Pythia8::StringZ::bAreaLund() --> double");
		cl.def("deriveBLund", (bool (Pythia8::StringZ::*)()) &Pythia8::StringZ::deriveBLund, "C++: Pythia8::StringZ::deriveBLund() --> bool");
		cl.def("assign", (class Pythia8::StringZ & (Pythia8::StringZ::*)(const class Pythia8::StringZ &)) &Pythia8::StringZ::operator=, "C++: Pythia8::StringZ::operator=(const class Pythia8::StringZ &) --> class Pythia8::StringZ &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::StringPT file:Pythia8/FragmentationFlavZpT.h line:291
		pybind11::class_<Pythia8::StringPT, std::shared_ptr<Pythia8::StringPT>, PyCallBack_Pythia8_StringPT, Pythia8::PhysicsBase> cl(M("Pythia8"), "StringPT", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::StringPT(); }, [](){ return new PyCallBack_Pythia8_StringPT(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_StringPT const &o){ return new PyCallBack_Pythia8_StringPT(o); } ) );
		cl.def( pybind11::init( [](Pythia8::StringPT const &o){ return new Pythia8::StringPT(o); } ) );
		cl.def_readwrite("useWidthPre", &Pythia8::StringPT::useWidthPre);
		cl.def_readwrite("sigmaQ", &Pythia8::StringPT::sigmaQ);
		cl.def_readwrite("enhancedFraction", &Pythia8::StringPT::enhancedFraction);
		cl.def_readwrite("enhancedWidth", &Pythia8::StringPT::enhancedWidth);
		cl.def_readwrite("sigma2Had", &Pythia8::StringPT::sigma2Had);
		cl.def_readwrite("widthPreStrange", &Pythia8::StringPT::widthPreStrange);
		cl.def_readwrite("widthPreDiquark", &Pythia8::StringPT::widthPreDiquark);
		cl.def_readwrite("thermalModel", &Pythia8::StringPT::thermalModel);
		cl.def_readwrite("temperature", &Pythia8::StringPT::temperature);
		cl.def_readwrite("tempPreFactor", &Pythia8::StringPT::tempPreFactor);
		cl.def_readwrite("fracSmallX", &Pythia8::StringPT::fracSmallX);
		cl.def_readwrite("closePacking", &Pythia8::StringPT::closePacking);
		cl.def_readwrite("exponentMPI", &Pythia8::StringPT::exponentMPI);
		cl.def_readwrite("exponentNSP", &Pythia8::StringPT::exponentNSP);
		cl.def("init", (void (Pythia8::StringPT::*)()) &Pythia8::StringPT::init, "C++: Pythia8::StringPT::init() --> void");
		cl.def("pxy", [](Pythia8::StringPT &o, int const & a0) -> std::pair<double, double> { return o.pxy(a0); }, "", pybind11::arg("idIn"));
		cl.def("pxy", (struct std::pair<double, double> (Pythia8::StringPT::*)(int, double)) &Pythia8::StringPT::pxy, "C++: Pythia8::StringPT::pxy(int, double) --> struct std::pair<double, double>", pybind11::arg("idIn"), pybind11::arg("nNSP"));
		cl.def("pxyGauss", [](Pythia8::StringPT &o) -> std::pair<double, double> { return o.pxyGauss(); }, "");
		cl.def("pxyGauss", [](Pythia8::StringPT &o, int const & a0) -> std::pair<double, double> { return o.pxyGauss(a0); }, "", pybind11::arg("idIn"));
		cl.def("pxyGauss", (struct std::pair<double, double> (Pythia8::StringPT::*)(int, double)) &Pythia8::StringPT::pxyGauss, "C++: Pythia8::StringPT::pxyGauss(int, double) --> struct std::pair<double, double>", pybind11::arg("idIn"), pybind11::arg("nNSP"));
		cl.def("pxyThermal", [](Pythia8::StringPT &o, int const & a0) -> std::pair<double, double> { return o.pxyThermal(a0); }, "", pybind11::arg("idIn"));
		cl.def("pxyThermal", (struct std::pair<double, double> (Pythia8::StringPT::*)(int, double)) &Pythia8::StringPT::pxyThermal, "C++: Pythia8::StringPT::pxyThermal(int, double) --> struct std::pair<double, double>", pybind11::arg("idIn"), pybind11::arg("nNSP"));
		cl.def("suppressPT2", (double (Pythia8::StringPT::*)(double)) &Pythia8::StringPT::suppressPT2, "C++: Pythia8::StringPT::suppressPT2(double) --> double", pybind11::arg("pT2"));
		cl.def("assign", (class Pythia8::StringPT & (Pythia8::StringPT::*)(const class Pythia8::StringPT &)) &Pythia8::StringPT::operator=, "C++: Pythia8::StringPT::operator=(const class Pythia8::StringPT &) --> class Pythia8::StringPT &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::PDF file:Pythia8/PartonDistributions.h line:50
		pybind11::class_<Pythia8::PDF, std::shared_ptr<Pythia8::PDF>, PyCallBack_Pythia8_PDF> cl(M("Pythia8"), "PDF", "");
		pybind11::handle cl_type = cl;

		{ // Pythia8::PDF::PDFEnvelope file:Pythia8/PartonDistributions.h line:98
			auto & enclosing_class = cl;
			pybind11::class_<Pythia8::PDF::PDFEnvelope, std::shared_ptr<Pythia8::PDF::PDFEnvelope>> cl(enclosing_class, "PDFEnvelope", "");
			pybind11::handle cl_type = cl;

			cl.def( pybind11::init( [](){ return new Pythia8::PDF::PDFEnvelope(); } ) );
			cl.def( pybind11::init( [](Pythia8::PDF::PDFEnvelope const &o){ return new Pythia8::PDF::PDFEnvelope(o); } ) );
			cl.def_readwrite("centralPDF", &Pythia8::PDF::PDFEnvelope::centralPDF);
			cl.def_readwrite("errplusPDF", &Pythia8::PDF::PDFEnvelope::errplusPDF);
			cl.def_readwrite("errminusPDF", &Pythia8::PDF::PDFEnvelope::errminusPDF);
			cl.def_readwrite("errsymmPDF", &Pythia8::PDF::PDFEnvelope::errsymmPDF);
			cl.def_readwrite("scalePDF", &Pythia8::PDF::PDFEnvelope::scalePDF);
			cl.def_readwrite("pdfMemberVars", &Pythia8::PDF::PDFEnvelope::pdfMemberVars);
		}

		cl.def( pybind11::init( [](){ return new PyCallBack_Pythia8_PDF(); } ), "doc");
		cl.def( pybind11::init<int>(), pybind11::arg("idBeamIn") );

		cl.def(pybind11::init<PyCallBack_Pythia8_PDF const &>());
		cl.def_readwrite("idBeam", &Pythia8::PDF::idBeam);
		cl.def_readwrite("idBeamAbs", &Pythia8::PDF::idBeamAbs);
		cl.def_readwrite("idSav", &Pythia8::PDF::idSav);
		cl.def_readwrite("idVal1", &Pythia8::PDF::idVal1);
		cl.def_readwrite("idVal2", &Pythia8::PDF::idVal2);
		cl.def_readwrite("idVal3", &Pythia8::PDF::idVal3);
		cl.def_readwrite("xSav", &Pythia8::PDF::xSav);
		cl.def_readwrite("Q2Sav", &Pythia8::PDF::Q2Sav);
		cl.def_readwrite("xu", &Pythia8::PDF::xu);
		cl.def_readwrite("xd", &Pythia8::PDF::xd);
		cl.def_readwrite("xs", &Pythia8::PDF::xs);
		cl.def_readwrite("xubar", &Pythia8::PDF::xubar);
		cl.def_readwrite("xdbar", &Pythia8::PDF::xdbar);
		cl.def_readwrite("xsbar", &Pythia8::PDF::xsbar);
		cl.def_readwrite("xc", &Pythia8::PDF::xc);
		cl.def_readwrite("xb", &Pythia8::PDF::xb);
		cl.def_readwrite("xcbar", &Pythia8::PDF::xcbar);
		cl.def_readwrite("xbbar", &Pythia8::PDF::xbbar);
		cl.def_readwrite("xg", &Pythia8::PDF::xg);
		cl.def_readwrite("xlepton", &Pythia8::PDF::xlepton);
		cl.def_readwrite("xgamma", &Pythia8::PDF::xgamma);
		cl.def_readwrite("isSet", &Pythia8::PDF::isSet);
		cl.def_readwrite("isInit", &Pythia8::PDF::isInit);
		cl.def_readwrite("beamType", &Pythia8::PDF::beamType);
		cl.def_readwrite("hasGammaInLepton", &Pythia8::PDF::hasGammaInLepton);
		cl.def_readwrite("sSymmetricSave", &Pythia8::PDF::sSymmetricSave);
		cl.def_readwrite("cSymmetricSave", &Pythia8::PDF::cSymmetricSave);
		cl.def_readwrite("bSymmetricSave", &Pythia8::PDF::bSymmetricSave);
		cl.def("isSetup", (bool (Pythia8::PDF::*)()) &Pythia8::PDF::isSetup, "C++: Pythia8::PDF::isSetup() --> bool");
		cl.def("setBeamID", (void (Pythia8::PDF::*)(int)) &Pythia8::PDF::setBeamID, "C++: Pythia8::PDF::setBeamID(int) --> void", pybind11::arg("idBeamIn"));
		cl.def("resetValenceContent", (void (Pythia8::PDF::*)()) &Pythia8::PDF::resetValenceContent, "C++: Pythia8::PDF::resetValenceContent() --> void");
		cl.def("setValenceContent", (void (Pythia8::PDF::*)(int, int, int)) &Pythia8::PDF::setValenceContent, "C++: Pythia8::PDF::setValenceContent(int, int, int) --> void", pybind11::arg("idVal1In"), pybind11::arg("idVal2In"), pybind11::arg("idVal3In"));
		cl.def("setExtrapolate", (void (Pythia8::PDF::*)(bool)) &Pythia8::PDF::setExtrapolate, "C++: Pythia8::PDF::setExtrapolate(bool) --> void", pybind11::arg(""));
		cl.def("xf", (double (Pythia8::PDF::*)(int, double, double)) &Pythia8::PDF::xf, "C++: Pythia8::PDF::xf(int, double, double) --> double", pybind11::arg("id"), pybind11::arg("x"), pybind11::arg("Q2"));
		cl.def("xfVal", (double (Pythia8::PDF::*)(int, double, double)) &Pythia8::PDF::xfVal, "C++: Pythia8::PDF::xfVal(int, double, double) --> double", pybind11::arg("id"), pybind11::arg("x"), pybind11::arg("Q2"));
		cl.def("xfSea", (double (Pythia8::PDF::*)(int, double, double)) &Pythia8::PDF::xfSea, "C++: Pythia8::PDF::xfSea(int, double, double) --> double", pybind11::arg("id"), pybind11::arg("x"), pybind11::arg("Q2"));
		cl.def("insideBounds", (bool (Pythia8::PDF::*)(double, double)) &Pythia8::PDF::insideBounds, "C++: Pythia8::PDF::insideBounds(double, double) --> bool", pybind11::arg(""), pybind11::arg(""));
		cl.def("alphaS", (double (Pythia8::PDF::*)(double)) &Pythia8::PDF::alphaS, "C++: Pythia8::PDF::alphaS(double) --> double", pybind11::arg(""));
		cl.def("mQuarkPDF", (double (Pythia8::PDF::*)(int)) &Pythia8::PDF::mQuarkPDF, "C++: Pythia8::PDF::mQuarkPDF(int) --> double", pybind11::arg(""));
		cl.def("nMembers", (int (Pythia8::PDF::*)()) &Pythia8::PDF::nMembers, "C++: Pythia8::PDF::nMembers() --> int");
		cl.def("calcPDFEnvelope", (void (Pythia8::PDF::*)(int, double, double, int)) &Pythia8::PDF::calcPDFEnvelope, "C++: Pythia8::PDF::calcPDFEnvelope(int, double, double, int) --> void", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("calcPDFEnvelope", (void (Pythia8::PDF::*)(struct std::pair<int, int>, struct std::pair<double, double>, double, int)) &Pythia8::PDF::calcPDFEnvelope, "C++: Pythia8::PDF::calcPDFEnvelope(struct std::pair<int, int>, struct std::pair<double, double>, double, int) --> void", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("getPDFEnvelope", (struct Pythia8::PDF::PDFEnvelope (Pythia8::PDF::*)()) &Pythia8::PDF::getPDFEnvelope, "C++: Pythia8::PDF::getPDFEnvelope() --> struct Pythia8::PDF::PDFEnvelope");
		cl.def("gammaPDFxDependence", (double (Pythia8::PDF::*)(int, double)) &Pythia8::PDF::gammaPDFxDependence, "C++: Pythia8::PDF::gammaPDFxDependence(int, double) --> double", pybind11::arg(""), pybind11::arg(""));
		cl.def("gammaPDFRefScale", (double (Pythia8::PDF::*)(int)) &Pythia8::PDF::gammaPDFRefScale, "C++: Pythia8::PDF::gammaPDFRefScale(int) --> double", pybind11::arg(""));
		cl.def("sampleGammaValFlavor", (int (Pythia8::PDF::*)(double)) &Pythia8::PDF::sampleGammaValFlavor, "C++: Pythia8::PDF::sampleGammaValFlavor(double) --> int", pybind11::arg(""));
		cl.def("xfIntegratedTotal", (double (Pythia8::PDF::*)(double)) &Pythia8::PDF::xfIntegratedTotal, "C++: Pythia8::PDF::xfIntegratedTotal(double) --> double", pybind11::arg(""));
		cl.def("xGamma", (double (Pythia8::PDF::*)()) &Pythia8::PDF::xGamma, "C++: Pythia8::PDF::xGamma() --> double");
		cl.def("xPom", [](Pythia8::PDF &o) -> void { return o.xPom(); }, "");
		cl.def("xPom", (void (Pythia8::PDF::*)(double)) &Pythia8::PDF::xPom, "C++: Pythia8::PDF::xPom(double) --> void", pybind11::arg(""));
		cl.def("xfFlux", (double (Pythia8::PDF::*)(int, double, double)) &Pythia8::PDF::xfFlux, "C++: Pythia8::PDF::xfFlux(int, double, double) --> double", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("xfApprox", (double (Pythia8::PDF::*)(int, double, double)) &Pythia8::PDF::xfApprox, "C++: Pythia8::PDF::xfApprox(int, double, double) --> double", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("xfGamma", (double (Pythia8::PDF::*)(int, double, double)) &Pythia8::PDF::xfGamma, "C++: Pythia8::PDF::xfGamma(int, double, double) --> double", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("intFluxApprox", (double (Pythia8::PDF::*)()) &Pythia8::PDF::intFluxApprox, "C++: Pythia8::PDF::intFluxApprox() --> double");
		cl.def("hasApproxGammaFlux", (bool (Pythia8::PDF::*)()) &Pythia8::PDF::hasApproxGammaFlux, "C++: Pythia8::PDF::hasApproxGammaFlux() --> bool");
		cl.def("getXmin", (double (Pythia8::PDF::*)()) &Pythia8::PDF::getXmin, "C++: Pythia8::PDF::getXmin() --> double");
		cl.def("getXhadr", (double (Pythia8::PDF::*)()) &Pythia8::PDF::getXhadr, "C++: Pythia8::PDF::getXhadr() --> double");
		cl.def("sampleXgamma", (double (Pythia8::PDF::*)(double)) &Pythia8::PDF::sampleXgamma, "C++: Pythia8::PDF::sampleXgamma(double) --> double", pybind11::arg(""));
		cl.def("sampleQ2gamma", (double (Pythia8::PDF::*)(double)) &Pythia8::PDF::sampleQ2gamma, "C++: Pythia8::PDF::sampleQ2gamma(double) --> double", pybind11::arg(""));
		cl.def("xfMax", (double (Pythia8::PDF::*)(int, double, double)) &Pythia8::PDF::xfMax, "C++: Pythia8::PDF::xfMax(int, double, double) --> double", pybind11::arg("id"), pybind11::arg("x"), pybind11::arg("Q2"));
		cl.def("xfSame", (double (Pythia8::PDF::*)(int, double, double)) &Pythia8::PDF::xfSame, "C++: Pythia8::PDF::xfSame(int, double, double) --> double", pybind11::arg("id"), pybind11::arg("x"), pybind11::arg("Q2"));
		cl.def("setVMDscale", [](Pythia8::PDF &o) -> void { return o.setVMDscale(); }, "");
		cl.def("setVMDscale", (void (Pythia8::PDF::*)(double)) &Pythia8::PDF::setVMDscale, "C++: Pythia8::PDF::setVMDscale(double) --> void", pybind11::arg(""));
		cl.def("sSymmetric", (bool (Pythia8::PDF::*)() const) &Pythia8::PDF::sSymmetric, "C++: Pythia8::PDF::sSymmetric() const --> bool");
		cl.def("cSymmetric", (bool (Pythia8::PDF::*)() const) &Pythia8::PDF::cSymmetric, "C++: Pythia8::PDF::cSymmetric() const --> bool");
		cl.def("bSymmetric", (bool (Pythia8::PDF::*)() const) &Pythia8::PDF::bSymmetric, "C++: Pythia8::PDF::bSymmetric() const --> bool");
		cl.def("sSymmetric", (void (Pythia8::PDF::*)(bool)) &Pythia8::PDF::sSymmetric, "C++: Pythia8::PDF::sSymmetric(bool) --> void", pybind11::arg("sSymmetricIn"));
		cl.def("cSymmetric", (void (Pythia8::PDF::*)(bool)) &Pythia8::PDF::cSymmetric, "C++: Pythia8::PDF::cSymmetric(bool) --> void", pybind11::arg("cSymmetricIn"));
		cl.def("bSymmetric", (void (Pythia8::PDF::*)(bool)) &Pythia8::PDF::bSymmetric, "C++: Pythia8::PDF::bSymmetric(bool) --> void", pybind11::arg("bSymmetricIn"));
		cl.def("xfUpdate", (void (Pythia8::PDF::*)(int, double, double)) &Pythia8::PDF::xfUpdate, "C++: Pythia8::PDF::xfUpdate(int, double, double) --> void", pybind11::arg("id"), pybind11::arg("x"), pybind11::arg("Q2"));
		cl.def("printErr", [](Pythia8::PDF &o, class std::basic_string<char> const & a0) -> void { return o.printErr(a0); }, "", pybind11::arg("errMsg"));
		cl.def("printErr", (void (Pythia8::PDF::*)(std::string, class Pythia8::Info *)) &Pythia8::PDF::printErr, "C++: Pythia8::PDF::printErr(std::string, class Pythia8::Info *) --> void", pybind11::arg("errMsg"), pybind11::arg("infoPtr"));
		cl.def("xfRaw", (double (Pythia8::PDF::*)(int) const) &Pythia8::PDF::xfRaw, "C++: Pythia8::PDF::xfRaw(int) const --> double", pybind11::arg("id"));
		cl.def("isValence", (bool (Pythia8::PDF::*)(int) const) &Pythia8::PDF::isValence, "C++: Pythia8::PDF::isValence(int) const --> bool", pybind11::arg("id"));
		cl.def("assign", (class Pythia8::PDF & (Pythia8::PDF::*)(const class Pythia8::PDF &)) &Pythia8::PDF::operator=, "C++: Pythia8::PDF::operator=(const class Pythia8::PDF &) --> class Pythia8::PDF &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}

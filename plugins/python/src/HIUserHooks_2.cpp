#include <Pythia8/Basics.h>
#include <Pythia8/BeamParticle.h>
#include <Pythia8/Event.h>
#include <Pythia8/FragmentationFlavZpT.h>
#include <Pythia8/GammaKinematics.h>
#include <Pythia8/HIUserHooks.h>
#include <Pythia8/HadronWidths.h>
#include <Pythia8/HeavyIons.h>
#include <Pythia8/Info.h>
#include <Pythia8/LHEF3.h>
#include <Pythia8/LesHouches.h>
#include <Pythia8/Merging.h>
#include <Pythia8/MergingHooks.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/ParticleDecays.h>
#include <Pythia8/PartonDistributions.h>
#include <Pythia8/PartonSystems.h>
#include <Pythia8/PartonVertex.h>
#include <Pythia8/PhaseSpace.h>
#include <Pythia8/PhysicsBase.h>
#include <Pythia8/Pythia.h>
#include <Pythia8/ResonanceWidths.h>
#include <Pythia8/SLHAinterface.h>
#include <Pythia8/Settings.h>
#include <Pythia8/SharedPointers.h>
#include <Pythia8/ShowerModel.h>
#include <Pythia8/SigmaLowEnergy.h>
#include <Pythia8/SigmaProcess.h>
#include <Pythia8/SigmaTotal.h>
#include <Pythia8/StandardModel.h>
#include <Pythia8/SusyCouplings.h>
#include <Pythia8/SusyLesHouches.h>
#include <Pythia8/UserHooks.h>
#include <Pythia8/Weights.h>
#include <complex>
#include <functional>
#include <ios>
#include <istream>
#include <iterator>
#include <map>
#include <memory>
#include <ostream>
#include <set>
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

// Pythia8::HIUserHooks file:Pythia8/HIUserHooks.h line:999
struct PyCallBack_Pythia8_HIUserHooks : public Pythia8::HIUserHooks {
	using Pythia8::HIUserHooks::HIUserHooks;

	void init(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HIUserHooks::init(a0, a1);
	}
	bool hasImpactParameterGenerator() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "hasImpactParameterGenerator");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HIUserHooks::hasImpactParameterGenerator();
	}
	class Pythia8::ImpactParameterGenerator * impactParameterGenerator() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "impactParameterGenerator");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::ImpactParameterGenerator *>::value) {
				static pybind11::detail::overload_caster_t<class Pythia8::ImpactParameterGenerator *> caster;
				return pybind11::detail::cast_ref<class Pythia8::ImpactParameterGenerator *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class Pythia8::ImpactParameterGenerator *>(std::move(o));
		}
		return HIUserHooks::impactParameterGenerator();
	}
	bool hasProjectileModel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "hasProjectileModel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HIUserHooks::hasProjectileModel();
	}
	class Pythia8::NucleusModel * projectileModel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "projectileModel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::NucleusModel *>::value) {
				static pybind11::detail::overload_caster_t<class Pythia8::NucleusModel *> caster;
				return pybind11::detail::cast_ref<class Pythia8::NucleusModel *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class Pythia8::NucleusModel *>(std::move(o));
		}
		return HIUserHooks::projectileModel();
	}
	bool hasTargetModel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "hasTargetModel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HIUserHooks::hasTargetModel();
	}
	class Pythia8::NucleusModel * targetModel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "targetModel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::NucleusModel *>::value) {
				static pybind11::detail::overload_caster_t<class Pythia8::NucleusModel *> caster;
				return pybind11::detail::cast_ref<class Pythia8::NucleusModel *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class Pythia8::NucleusModel *>(std::move(o));
		}
		return HIUserHooks::targetModel();
	}
	bool hasSubCollisionModel() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "hasSubCollisionModel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HIUserHooks::hasSubCollisionModel();
	}
	class Pythia8::SubCollisionModel * subCollisionModel() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "subCollisionModel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::SubCollisionModel *>::value) {
				static pybind11::detail::overload_caster_t<class Pythia8::SubCollisionModel *> caster;
				return pybind11::detail::cast_ref<class Pythia8::SubCollisionModel *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class Pythia8::SubCollisionModel *>(std::move(o));
		}
		return HIUserHooks::subCollisionModel();
	}
	bool hasEventOrdering() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "hasEventOrdering");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HIUserHooks::hasEventOrdering();
	}
	double eventOrdering(const class Pythia8::Event & a0, const class Pythia8::Info & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "eventOrdering");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return HIUserHooks::eventOrdering(a0, a1);
	}
	bool canFixIsoSpin() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "canFixIsoSpin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HIUserHooks::canFixIsoSpin();
	}
	bool fixIsoSpin(class Pythia8::EventInfo & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "fixIsoSpin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HIUserHooks::fixIsoSpin(a0);
	}
	bool canShiftEvent() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "canShiftEvent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HIUserHooks::canShiftEvent();
	}
	class Pythia8::EventInfo & shiftEvent(class Pythia8::EventInfo & a0) const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "shiftEvent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::EventInfo &>::value) {
				static pybind11::detail::overload_caster_t<class Pythia8::EventInfo &> caster;
				return pybind11::detail::cast_ref<class Pythia8::EventInfo &>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class Pythia8::EventInfo &>(std::move(o));
		}
		return HIUserHooks::shiftEvent(a0);
	}
	bool canForceHadronLevel() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "canForceHadronLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HIUserHooks::canForceHadronLevel();
	}
	bool forceHadronLevel(class Pythia8::Pythia & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "forceHadronLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HIUserHooks::forceHadronLevel(a0);
	}
	bool canFindRecoilers() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "canFindRecoilers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HIUserHooks::canFindRecoilers();
	}
	using _binder_ret_0 = class std::vector<int, class std::allocator<int> >;
	_binder_ret_0 findRecoilers(const class Pythia8::Event & a0, bool a1, int a2, int a3, const class Pythia8::Vec4 & a4, const class Pythia8::Vec4 & a5) const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HIUserHooks *>(this), "findRecoilers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5);
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_0>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_0> caster;
				return pybind11::detail::cast_ref<_binder_ret_0>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_0>(std::move(o));
		}
		return HIUserHooks::findRecoilers(a0, a1, a2, a3, a4, a5);
	}
};

// Pythia8::HeavyIons file:Pythia8/HeavyIons.h line:31
struct PyCallBack_Pythia8_HeavyIons : public Pythia8::HeavyIons {
	using Pythia8::HeavyIons::HeavyIons;

	bool init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"HeavyIons::init\"");
	}
	bool next() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons *>(this), "next");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"HeavyIons::next\"");
	}
	void stat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons *>(this), "stat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HeavyIons::stat();
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons *>(this), "onStat");
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

// Pythia8::HeavyIons::InfoGrabber file:Pythia8/HeavyIons.h line:123
struct PyCallBack_Pythia8_HeavyIons_InfoGrabber : public Pythia8::HeavyIons::InfoGrabber {
	using Pythia8::HeavyIons::InfoGrabber::InfoGrabber;

	bool initAfterBeams() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "initAfterBeams");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::initAfterBeams();
	}
	bool canModifySigma() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canModifySigma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canModifySigma();
	}
	double multiplySigmaBy(const class Pythia8::SigmaProcess * a0, const class Pythia8::PhaseSpace * a1, bool a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "multiplySigmaBy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::multiplySigmaBy(a0, a1, a2);
	}
	bool canBiasSelection() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canBiasSelection");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canBiasSelection();
	}
	double biasSelectionBy(const class Pythia8::SigmaProcess * a0, const class Pythia8::PhaseSpace * a1, bool a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "biasSelectionBy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::biasSelectionBy(a0, a1, a2);
	}
	double biasedSelectionWeight() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "biasedSelectionWeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::biasedSelectionWeight();
	}
	bool canVetoProcessLevel() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canVetoProcessLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoProcessLevel();
	}
	bool doVetoProcessLevel(class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doVetoProcessLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoProcessLevel(a0);
	}
	bool canVetoResonanceDecays() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canVetoResonanceDecays");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoResonanceDecays();
	}
	bool doVetoResonanceDecays(class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doVetoResonanceDecays");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoResonanceDecays(a0);
	}
	bool canVetoPT() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canVetoPT");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoPT();
	}
	double scaleVetoPT() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "scaleVetoPT");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::scaleVetoPT();
	}
	bool doVetoPT(int a0, const class Pythia8::Event & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doVetoPT");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoPT(a0, a1);
	}
	bool canVetoStep() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canVetoStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoStep();
	}
	int numberVetoStep() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "numberVetoStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return UserHooks::numberVetoStep();
	}
	bool doVetoStep(int a0, int a1, int a2, const class Pythia8::Event & a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doVetoStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoStep(a0, a1, a2, a3);
	}
	bool canVetoMPIStep() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canVetoMPIStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoMPIStep();
	}
	int numberVetoMPIStep() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "numberVetoMPIStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return UserHooks::numberVetoMPIStep();
	}
	bool doVetoMPIStep(int a0, const class Pythia8::Event & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doVetoMPIStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoMPIStep(a0, a1);
	}
	bool canVetoPartonLevelEarly() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canVetoPartonLevelEarly");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoPartonLevelEarly();
	}
	bool doVetoPartonLevelEarly(const class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doVetoPartonLevelEarly");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoPartonLevelEarly(a0);
	}
	bool retryPartonLevel() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "retryPartonLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::retryPartonLevel();
	}
	bool canVetoPartonLevel() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canVetoPartonLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoPartonLevel();
	}
	bool doVetoPartonLevel(const class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doVetoPartonLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoPartonLevel(a0);
	}
	bool canSetResonanceScale() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canSetResonanceScale");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canSetResonanceScale();
	}
	double scaleResonance(int a0, const class Pythia8::Event & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "scaleResonance");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::scaleResonance(a0, a1);
	}
	bool canVetoISREmission() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canVetoISREmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoISREmission();
	}
	bool doVetoISREmission(int a0, const class Pythia8::Event & a1, int a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doVetoISREmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoISREmission(a0, a1, a2);
	}
	bool canVetoFSREmission() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canVetoFSREmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoFSREmission();
	}
	bool doVetoFSREmission(int a0, const class Pythia8::Event & a1, int a2, bool a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doVetoFSREmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoFSREmission(a0, a1, a2, a3);
	}
	bool canVetoMPIEmission() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canVetoMPIEmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoMPIEmission();
	}
	bool doVetoMPIEmission(int a0, const class Pythia8::Event & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doVetoMPIEmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoMPIEmission(a0, a1);
	}
	bool canReconnectResonanceSystems() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canReconnectResonanceSystems");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canReconnectResonanceSystems();
	}
	bool doReconnectResonanceSystems(int a0, class Pythia8::Event & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doReconnectResonanceSystems");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doReconnectResonanceSystems(a0, a1);
	}
	bool canChangeFragPar() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canChangeFragPar");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canChangeFragPar();
	}
	void setStringEnds(const class Pythia8::StringEnd * a0, const class Pythia8::StringEnd * a1, class std::vector<int, class std::allocator<int> > a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "setStringEnds");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return UserHooks::setStringEnds(a0, a1, a2);
	}
	bool doChangeFragPar(class Pythia8::StringFlav * a0, class Pythia8::StringZ * a1, class Pythia8::StringPT * a2, int a3, double a4, class std::vector<int, class std::allocator<int> > a5, const class Pythia8::StringEnd * a6) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doChangeFragPar");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doChangeFragPar(a0, a1, a2, a3, a4, a5, a6);
	}
	bool doVetoFragmentation(class Pythia8::Particle a0, const class Pythia8::StringEnd * a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doVetoFragmentation");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoFragmentation(a0, a1);
	}
	bool doVetoFragmentation(class Pythia8::Particle a0, class Pythia8::Particle a1, const class Pythia8::StringEnd * a2, const class Pythia8::StringEnd * a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doVetoFragmentation");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoFragmentation(a0, a1, a2, a3);
	}
	bool canVetoAfterHadronization() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canVetoAfterHadronization");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoAfterHadronization();
	}
	bool doVetoAfterHadronization(const class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doVetoAfterHadronization");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoAfterHadronization(a0);
	}
	bool canSetImpactParameter() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "canSetImpactParameter");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canSetImpactParameter();
	}
	double doSetImpactParameter() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "doSetImpactParameter");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::doSetImpactParameter();
	}
	bool onEndHadronLevel(class Pythia8::HadronLevel & a0, class Pythia8::Event & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "onEndHadronLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::onEndHadronLevel(a0, a1);
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "onInitInfoPtr");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return UserHooks::onInitInfoPtr();
	}
	void onBeginEvent() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HeavyIons::InfoGrabber *>(this), "onStat");
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

void bind_Pythia8_HIUserHooks_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::EventInfo file:Pythia8/HIUserHooks.h line:744
		pybind11::class_<Pythia8::EventInfo, std::shared_ptr<Pythia8::EventInfo>> cl(M("Pythia8"), "EventInfo", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::EventInfo(); } ) );
		cl.def( pybind11::init( [](Pythia8::EventInfo const &o){ return new Pythia8::EventInfo(o); } ) );
		cl.def_readwrite("event", &Pythia8::EventInfo::event);
		cl.def_readwrite("info", &Pythia8::EventInfo::info);
		cl.def_readwrite("code", &Pythia8::EventInfo::code);
		cl.def_readwrite("ordering", &Pythia8::EventInfo::ordering);
		cl.def_readwrite("ok", &Pythia8::EventInfo::ok);
		cl.def_readwrite("projs", &Pythia8::EventInfo::projs);
		cl.def_readwrite("targs", &Pythia8::EventInfo::targs);
	}
	{ // Pythia8::HIInfo file:Pythia8/HIUserHooks.h line:783
		pybind11::class_<Pythia8::HIInfo, std::shared_ptr<Pythia8::HIInfo>> cl(M("Pythia8"), "HIInfo", "Class for collecting info about a Heavy Ion run and its produced\n events.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::HIInfo(); } ) );
		cl.def( pybind11::init( [](Pythia8::HIInfo const &o){ return new Pythia8::HIInfo(o); } ) );
		cl.def("b", (double (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::b, "The impact-parameter distance in the current event.\n\nC++: Pythia8::HIInfo::b() const --> double");
		cl.def("phi", (double (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::phi, "The impact parameter angle.\n\nC++: Pythia8::HIInfo::phi() const --> double");
		cl.def("sigmaTot", (double (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::sigmaTot, "The Monte Carlo integrated total cross section in the current run.\n\nC++: Pythia8::HIInfo::sigmaTot() const --> double");
		cl.def("sigmaTotErr", (double (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::sigmaTotErr, "The estimated statistical error on sigmaTot().\n\nC++: Pythia8::HIInfo::sigmaTotErr() const --> double");
		cl.def("sigmaND", (double (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::sigmaND, "The Monte Carlo integrated non-diffractive cross section in the\n current run.\n\nC++: Pythia8::HIInfo::sigmaND() const --> double");
		cl.def("sigmaNDErr", (double (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::sigmaNDErr, "The estimated statistical error on sigmaND().\n\nC++: Pythia8::HIInfo::sigmaNDErr() const --> double");
		cl.def("nAttempts", (long (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nAttempts, "The number of attempted impact parameter points.\n\nC++: Pythia8::HIInfo::nAttempts() const --> long");
		cl.def("nAccepted", (long (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nAccepted, "The number of produced events.\n\nC++: Pythia8::HIInfo::nAccepted() const --> long");
		cl.def("nCollTot", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nCollTot, "The total number of separate sub-collisions.\n\nC++: Pythia8::HIInfo::nCollTot() const --> int");
		cl.def("nCollND", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nCollND, "The number of separate non-diffractive sub collisions in the\n current event.\n\nC++: Pythia8::HIInfo::nCollND() const --> int");
		cl.def("nCollNDTot", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nCollNDTot, "The total number of non-diffractive sub collisions in the current event.\n\nC++: Pythia8::HIInfo::nCollNDTot() const --> int");
		cl.def("nCollSDP", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nCollSDP, "The number of separate single diffractive projectile excitation\n sub collisions in the current event.\n\nC++: Pythia8::HIInfo::nCollSDP() const --> int");
		cl.def("nCollSDT", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nCollSDT, "The number of separate single diffractive target excitation sub\n collisions in the current event.\n\nC++: Pythia8::HIInfo::nCollSDT() const --> int");
		cl.def("nCollDD", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nCollDD, "The number of separate double diffractive sub collisions in the\n current event.\n\nC++: Pythia8::HIInfo::nCollDD() const --> int");
		cl.def("nCollCD", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nCollCD, "The number of separate central diffractive sub collisions in the\n current event.\n\nC++: Pythia8::HIInfo::nCollCD() const --> int");
		cl.def("nCollEL", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nCollEL, "The number of separate elastic sub collisions.\n\nC++: Pythia8::HIInfo::nCollEL() const --> int");
		cl.def("nPartProj", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nPartProj, "The number of interacting projectile nucleons in the current\n event.\n\nC++: Pythia8::HIInfo::nPartProj() const --> int");
		cl.def("nAbsProj", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nAbsProj, "The number of absorptively wounded projectile nucleons in the\n current event.\n\nC++: Pythia8::HIInfo::nAbsProj() const --> int");
		cl.def("nDiffProj", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nDiffProj, "The number of diffractively wounded projectile nucleons in the\n current event.\n\nC++: Pythia8::HIInfo::nDiffProj() const --> int");
		cl.def("nElProj", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nElProj, "The number of elastically scattered projectile nucleons in the\n current event.\n\nC++: Pythia8::HIInfo::nElProj() const --> int");
		cl.def("nPartTarg", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nPartTarg, "The number of interacting projectile nucleons in the current\n event.\n\nC++: Pythia8::HIInfo::nPartTarg() const --> int");
		cl.def("nAbsTarg", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nAbsTarg, "The number of absorptively wounded projectile nucleons in the\n current event.\n\nC++: Pythia8::HIInfo::nAbsTarg() const --> int");
		cl.def("nDiffTarg", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nDiffTarg, "The number of diffractively wounded projectile nucleons in the\n current event.\n\nC++: Pythia8::HIInfo::nDiffTarg() const --> int");
		cl.def("nElTarg", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nElTarg, "The number of elastically scattered projectile nucleons in the\n current event.\n\nC++: Pythia8::HIInfo::nElTarg() const --> int");
		cl.def("weight", (double (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::weight, "The weight for this collision.\n\nC++: Pythia8::HIInfo::weight() const --> double");
		cl.def("weightSum", (double (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::weightSum, "The sum of weights of the produced events.\n\nC++: Pythia8::HIInfo::weightSum() const --> double");
		cl.def("nFail", (int (Pythia8::HIInfo::*)() const) &Pythia8::HIInfo::nFail, "The number of failed nuclon excitations in the current event.\n\nC++: Pythia8::HIInfo::nFail() const --> int");
		cl.def("failedExcitation", (void (Pythia8::HIInfo::*)()) &Pythia8::HIInfo::failedExcitation, "Register a failed nucleon excitation.\n\nC++: Pythia8::HIInfo::failedExcitation() --> void");
		cl.def("subCollisionsPtr", (class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > * (Pythia8::HIInfo::*)()) &Pythia8::HIInfo::subCollisionsPtr, "C++: Pythia8::HIInfo::subCollisionsPtr() --> class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > *", pybind11::return_value_policy::automatic);
		cl.def("subCollisionsPtr", (void (Pythia8::HIInfo::*)(class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > *)) &Pythia8::HIInfo::subCollisionsPtr, "C++: Pythia8::HIInfo::subCollisionsPtr(class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > *) --> void", pybind11::arg("sPtrIn"));
		cl.def("assign", (class Pythia8::HIInfo & (Pythia8::HIInfo::*)(const class Pythia8::HIInfo &)) &Pythia8::HIInfo::operator=, "C++: Pythia8::HIInfo::operator=(const class Pythia8::HIInfo &) --> class Pythia8::HIInfo &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::HIUserHooks file:Pythia8/HIUserHooks.h line:999
		pybind11::class_<Pythia8::HIUserHooks, std::shared_ptr<Pythia8::HIUserHooks>, PyCallBack_Pythia8_HIUserHooks> cl(M("Pythia8"), "HIUserHooks", "This is the heavy ion user hooks class which in the future may be\n used inside a Pythia object to generate heavy ion collisons. For\n now it is used outside Pythia and requires access to a number of\n Pythia objects.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::HIUserHooks(); }, [](){ return new PyCallBack_Pythia8_HIUserHooks(); } ) );
		cl.def_readwrite("idProjSave", &Pythia8::HIUserHooks::idProjSave);
		cl.def_readwrite("idTargSave", &Pythia8::HIUserHooks::idTargSave);
		cl.def("init", (void (Pythia8::HIUserHooks::*)(int, int)) &Pythia8::HIUserHooks::init, "Initialize this user hook.\n\nC++: Pythia8::HIUserHooks::init(int, int) --> void", pybind11::arg("idProjIn"), pybind11::arg("idTargIn"));
		cl.def("hasImpactParameterGenerator", (bool (Pythia8::HIUserHooks::*)() const) &Pythia8::HIUserHooks::hasImpactParameterGenerator, "A user-supplied impact parameter generator.\n\nC++: Pythia8::HIUserHooks::hasImpactParameterGenerator() const --> bool");
		cl.def("impactParameterGenerator", (class Pythia8::ImpactParameterGenerator * (Pythia8::HIUserHooks::*)() const) &Pythia8::HIUserHooks::impactParameterGenerator, "C++: Pythia8::HIUserHooks::impactParameterGenerator() const --> class Pythia8::ImpactParameterGenerator *", pybind11::return_value_policy::automatic);
		cl.def("hasProjectileModel", (bool (Pythia8::HIUserHooks::*)() const) &Pythia8::HIUserHooks::hasProjectileModel, "A suser-supplied NucleusModel for the projectile and target.\n\nC++: Pythia8::HIUserHooks::hasProjectileModel() const --> bool");
		cl.def("projectileModel", (class Pythia8::NucleusModel * (Pythia8::HIUserHooks::*)() const) &Pythia8::HIUserHooks::projectileModel, "C++: Pythia8::HIUserHooks::projectileModel() const --> class Pythia8::NucleusModel *", pybind11::return_value_policy::automatic);
		cl.def("hasTargetModel", (bool (Pythia8::HIUserHooks::*)() const) &Pythia8::HIUserHooks::hasTargetModel, "C++: Pythia8::HIUserHooks::hasTargetModel() const --> bool");
		cl.def("targetModel", (class Pythia8::NucleusModel * (Pythia8::HIUserHooks::*)() const) &Pythia8::HIUserHooks::targetModel, "C++: Pythia8::HIUserHooks::targetModel() const --> class Pythia8::NucleusModel *", pybind11::return_value_policy::automatic);
		cl.def("hasSubCollisionModel", (bool (Pythia8::HIUserHooks::*)()) &Pythia8::HIUserHooks::hasSubCollisionModel, "A user-supplied SubCollisionModel for generating nucleon-nucleon\n subcollisions.\n\nC++: Pythia8::HIUserHooks::hasSubCollisionModel() --> bool");
		cl.def("subCollisionModel", (class Pythia8::SubCollisionModel * (Pythia8::HIUserHooks::*)()) &Pythia8::HIUserHooks::subCollisionModel, "C++: Pythia8::HIUserHooks::subCollisionModel() --> class Pythia8::SubCollisionModel *", pybind11::return_value_policy::automatic);
		cl.def("hasEventOrdering", (bool (Pythia8::HIUserHooks::*)() const) &Pythia8::HIUserHooks::hasEventOrdering, "A user-supplied ordering of events in (inverse) hardness.\n\nC++: Pythia8::HIUserHooks::hasEventOrdering() const --> bool");
		cl.def("eventOrdering", (double (Pythia8::HIUserHooks::*)(const class Pythia8::Event &, const class Pythia8::Info &)) &Pythia8::HIUserHooks::eventOrdering, "C++: Pythia8::HIUserHooks::eventOrdering(const class Pythia8::Event &, const class Pythia8::Info &) --> double", pybind11::arg(""), pybind11::arg(""));
		cl.def("canFixIsoSpin", (bool (Pythia8::HIUserHooks::*)() const) &Pythia8::HIUserHooks::canFixIsoSpin, "A user-supplied method for fixing up proton-neutron mismatch in\n generated beams.\n\nC++: Pythia8::HIUserHooks::canFixIsoSpin() const --> bool");
		cl.def("fixIsoSpin", (bool (Pythia8::HIUserHooks::*)(class Pythia8::EventInfo &)) &Pythia8::HIUserHooks::fixIsoSpin, "C++: Pythia8::HIUserHooks::fixIsoSpin(class Pythia8::EventInfo &) --> bool", pybind11::arg(""));
		cl.def("canShiftEvent", (bool (Pythia8::HIUserHooks::*)() const) &Pythia8::HIUserHooks::canShiftEvent, "A user-supplied method for shifting the event in impact parameter space.\n\nC++: Pythia8::HIUserHooks::canShiftEvent() const --> bool");
		cl.def("shiftEvent", (class Pythia8::EventInfo & (Pythia8::HIUserHooks::*)(class Pythia8::EventInfo &) const) &Pythia8::HIUserHooks::shiftEvent, "C++: Pythia8::HIUserHooks::shiftEvent(class Pythia8::EventInfo &) const --> class Pythia8::EventInfo &", pybind11::return_value_policy::reference, pybind11::arg("ei"));
		cl.def("canAddNucleonExcitation", (bool (Pythia8::HIUserHooks::*)() const) &Pythia8::HIUserHooks::canAddNucleonExcitation, "A user-supplied method of adding a diffractive excitation event\n to another event, optionally connecting their colours.\n\nC++: Pythia8::HIUserHooks::canAddNucleonExcitation() const --> bool");
		cl.def("addNucleonExcitation", (bool (Pythia8::HIUserHooks::*)(class Pythia8::EventInfo &, class Pythia8::EventInfo &, bool) const) &Pythia8::HIUserHooks::addNucleonExcitation, "C++: Pythia8::HIUserHooks::addNucleonExcitation(class Pythia8::EventInfo &, class Pythia8::EventInfo &, bool) const --> bool", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("canForceHadronLevel", (bool (Pythia8::HIUserHooks::*)() const) &Pythia8::HIUserHooks::canForceHadronLevel, "A user supplied wrapper around the Pythia::forceHadronLevel()\n\nC++: Pythia8::HIUserHooks::canForceHadronLevel() const --> bool");
		cl.def("forceHadronLevel", (bool (Pythia8::HIUserHooks::*)(class Pythia8::Pythia &)) &Pythia8::HIUserHooks::forceHadronLevel, "C++: Pythia8::HIUserHooks::forceHadronLevel(class Pythia8::Pythia &) --> bool", pybind11::arg(""));
		cl.def("canFindRecoilers", (bool (Pythia8::HIUserHooks::*)() const) &Pythia8::HIUserHooks::canFindRecoilers, "A user-supplied way of finding the remnants of an\n non-diffrcative pp collision (on the target side if tside is\n true) to be used to give momentum when adding.\n\nC++: Pythia8::HIUserHooks::canFindRecoilers() const --> bool");
		cl.def("findRecoilers", (class std::vector<int, class std::allocator<int> > (Pythia8::HIUserHooks::*)(const class Pythia8::Event &, bool, int, int, const class Pythia8::Vec4 &, const class Pythia8::Vec4 &) const) &Pythia8::HIUserHooks::findRecoilers, "C++: Pythia8::HIUserHooks::findRecoilers(const class Pythia8::Event &, bool, int, int, const class Pythia8::Vec4 &, const class Pythia8::Vec4 &) const --> class std::vector<int, class std::allocator<int> >", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("assign", (class Pythia8::HIUserHooks & (Pythia8::HIUserHooks::*)(const class Pythia8::HIUserHooks &)) &Pythia8::HIUserHooks::operator=, "C++: Pythia8::HIUserHooks::operator=(const class Pythia8::HIUserHooks &) --> class Pythia8::HIUserHooks &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::HeavyIons file:Pythia8/HeavyIons.h line:31
		pybind11::class_<Pythia8::HeavyIons, std::shared_ptr<Pythia8::HeavyIons>, PyCallBack_Pythia8_HeavyIons, Pythia8::PhysicsBase> cl(M("Pythia8"), "HeavyIons", "");
		pybind11::handle cl_type = cl;

		{ // Pythia8::HeavyIons::InfoGrabber file:Pythia8/HeavyIons.h line:123
			auto & enclosing_class = cl;
			pybind11::class_<Pythia8::HeavyIons::InfoGrabber, std::shared_ptr<Pythia8::HeavyIons::InfoGrabber>, PyCallBack_Pythia8_HeavyIons_InfoGrabber, Pythia8::UserHooks> cl(enclosing_class, "InfoGrabber", "");
			pybind11::handle cl_type = cl;

			cl.def( pybind11::init( [](){ return new Pythia8::HeavyIons::InfoGrabber(); }, [](){ return new PyCallBack_Pythia8_HeavyIons_InfoGrabber(); } ) );
			cl.def("getInfo", (class Pythia8::Info * (Pythia8::HeavyIons::InfoGrabber::*)()) &Pythia8::HeavyIons::InfoGrabber::getInfo, "C++: Pythia8::HeavyIons::InfoGrabber::getInfo() --> class Pythia8::Info *", pybind11::return_value_policy::automatic);
			cl.def("assign", (struct Pythia8::HeavyIons::InfoGrabber & (Pythia8::HeavyIons::InfoGrabber::*)(const struct Pythia8::HeavyIons::InfoGrabber &)) &Pythia8::HeavyIons::InfoGrabber::operator=, "C++: Pythia8::HeavyIons::InfoGrabber::operator=(const struct Pythia8::HeavyIons::InfoGrabber &) --> struct Pythia8::HeavyIons::InfoGrabber &", pybind11::return_value_policy::reference, pybind11::arg(""));
		}

		cl.def( pybind11::init<class Pythia8::Pythia &>(), pybind11::arg("mainPythiaIn") );

		cl.def_readwrite("sigtot", &Pythia8::HeavyIons::sigtot);
		cl.def_readwrite("HIHooksPtr", &Pythia8::HeavyIons::HIHooksPtr);
		cl.def_readwrite("pythia", &Pythia8::HeavyIons::pythia);
		cl.def_readwrite("pythiaNames", &Pythia8::HeavyIons::pythiaNames);
		cl.def_readwrite("info", &Pythia8::HeavyIons::info);
		cl.def_readwrite("hiInfo", &Pythia8::HeavyIons::hiInfo);
		cl.def("init", (bool (Pythia8::HeavyIons::*)()) &Pythia8::HeavyIons::init, "C++: Pythia8::HeavyIons::init() --> bool");
		cl.def("next", (bool (Pythia8::HeavyIons::*)()) &Pythia8::HeavyIons::next, "C++: Pythia8::HeavyIons::next() --> bool");
		cl.def_static("addSpecialSettings", (void (*)(class Pythia8::Settings &)) &Pythia8::HeavyIons::addSpecialSettings, "C++: Pythia8::HeavyIons::addSpecialSettings(class Pythia8::Settings &) --> void", pybind11::arg("settings"));
		cl.def_static("isHeavyIon", (bool (*)(class Pythia8::Settings &)) &Pythia8::HeavyIons::isHeavyIon, "C++: Pythia8::HeavyIons::isHeavyIon(class Pythia8::Settings &) --> bool", pybind11::arg("settings"));
		cl.def("setHIUserHooksPtr", (bool (Pythia8::HeavyIons::*)(class std::shared_ptr<class Pythia8::HIUserHooks>)) &Pythia8::HeavyIons::setHIUserHooksPtr, "C++: Pythia8::HeavyIons::setHIUserHooksPtr(class std::shared_ptr<class Pythia8::HIUserHooks>) --> bool", pybind11::arg("userHooksPtrIn"));
		cl.def("sumUpMessages", (void (Pythia8::HeavyIons::*)(class Pythia8::Info &, std::string, const class Pythia8::Info *)) &Pythia8::HeavyIons::sumUpMessages, "C++: Pythia8::HeavyIons::sumUpMessages(class Pythia8::Info &, std::string, const class Pythia8::Info *) --> void", pybind11::arg("in"), pybind11::arg("tag"), pybind11::arg("other"));
		cl.def("updateInfo", (void (Pythia8::HeavyIons::*)()) &Pythia8::HeavyIons::updateInfo, "C++: Pythia8::HeavyIons::updateInfo() --> void");
		cl.def("clearProcessLevel", (void (Pythia8::HeavyIons::*)(class Pythia8::Pythia &)) &Pythia8::HeavyIons::clearProcessLevel, "C++: Pythia8::HeavyIons::clearProcessLevel(class Pythia8::Pythia &) --> void", pybind11::arg("pyt"));
		cl.def_static("setupSpecials", (void (*)(class Pythia8::Settings &, std::string)) &Pythia8::HeavyIons::setupSpecials, "C++: Pythia8::HeavyIons::setupSpecials(class Pythia8::Settings &, std::string) --> void", pybind11::arg("settings"), pybind11::arg("match"));
		cl.def_static("setupSpecials", (void (*)(class Pythia8::Pythia &, std::string)) &Pythia8::HeavyIons::setupSpecials, "C++: Pythia8::HeavyIons::setupSpecials(class Pythia8::Pythia &, std::string) --> void", pybind11::arg("p"), pybind11::arg("match"));
		cl.def("stat", (void (Pythia8::HeavyIons::*)()) &Pythia8::HeavyIons::stat, "C++: Pythia8::HeavyIons::stat() --> void");
		cl.def("assign", (class Pythia8::HeavyIons & (Pythia8::HeavyIons::*)(const class Pythia8::HeavyIons &)) &Pythia8::HeavyIons::operator=, "C++: Pythia8::HeavyIons::operator=(const class Pythia8::HeavyIons &) --> class Pythia8::HeavyIons &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}

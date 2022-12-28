#include <Pythia8/Basics.h>
#include <Pythia8/BeamParticle.h>
#include <Pythia8/Event.h>
#include <Pythia8/FragmentationFlavZpT.h>
#include <Pythia8/FragmentationSystems.h>
#include <Pythia8/HardDiffraction.h>
#include <Pythia8/History.h>
#include <Pythia8/MergingHooks.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/PartonDistributions.h>
#include <Pythia8/PartonLevel.h>
#include <Pythia8/PartonVertex.h>
#include <Pythia8/PhysicsBase.h>
#include <Pythia8/RHadrons.h>
#include <Pythia8/ResonanceDecays.h>
#include <Pythia8/SimpleWeakShowerMEs.h>
#include <Pythia8/SpaceShower.h>
#include <Pythia8/StringInteractions.h>
#include <Pythia8/TimeShower.h>
#include <iterator>
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

// Pythia8::HardDiffraction file:Pythia8/HardDiffraction.h line:31
struct PyCallBack_Pythia8_HardDiffraction : public Pythia8::HardDiffraction {
	using Pythia8::HardDiffraction::HardDiffraction;

	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardDiffraction *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardDiffraction *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardDiffraction *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardDiffraction *>(this), "onStat");
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

// Pythia8::ResonanceDecays file:Pythia8/ResonanceDecays.h line:28
struct PyCallBack_Pythia8_ResonanceDecays : public Pythia8::ResonanceDecays {
	using Pythia8::ResonanceDecays::ResonanceDecays;

	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceDecays *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceDecays *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceDecays *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceDecays *>(this), "onStat");
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

// Pythia8::PartonLevel file:Pythia8/PartonLevel.h line:45
struct PyCallBack_Pythia8_PartonLevel : public Pythia8::PartonLevel {
	using Pythia8::PartonLevel::PartonLevel;

	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonLevel *>(this), "onInitInfoPtr");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PartonLevel::onInitInfoPtr();
	}
	void onBeginEvent() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonLevel *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonLevel *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PartonLevel *>(this), "onStat");
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

void bind_Pythia8_HardDiffraction(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::HardDiffraction file:Pythia8/HardDiffraction.h line:31
		pybind11::class_<Pythia8::HardDiffraction, std::shared_ptr<Pythia8::HardDiffraction>, PyCallBack_Pythia8_HardDiffraction, Pythia8::PhysicsBase> cl(M("Pythia8"), "HardDiffraction", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::HardDiffraction(); }, [](){ return new PyCallBack_Pythia8_HardDiffraction(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_HardDiffraction const &o){ return new PyCallBack_Pythia8_HardDiffraction(o); } ) );
		cl.def( pybind11::init( [](Pythia8::HardDiffraction const &o){ return new Pythia8::HardDiffraction(o); } ) );
		cl.def("init", (void (Pythia8::HardDiffraction::*)(class Pythia8::BeamParticle *, class Pythia8::BeamParticle *)) &Pythia8::HardDiffraction::init, "C++: Pythia8::HardDiffraction::init(class Pythia8::BeamParticle *, class Pythia8::BeamParticle *) --> void", pybind11::arg("beamAPtrIn"), pybind11::arg("beamBPtrIn"));
		cl.def("isDiffractive", [](Pythia8::HardDiffraction &o) -> bool { return o.isDiffractive(); }, "");
		cl.def("isDiffractive", [](Pythia8::HardDiffraction &o, int const & a0) -> bool { return o.isDiffractive(a0); }, "", pybind11::arg("iBeamIn"));
		cl.def("isDiffractive", [](Pythia8::HardDiffraction &o, int const & a0, int const & a1) -> bool { return o.isDiffractive(a0, a1); }, "", pybind11::arg("iBeamIn"), pybind11::arg("partonIn"));
		cl.def("isDiffractive", [](Pythia8::HardDiffraction &o, int const & a0, int const & a1, double const & a2) -> bool { return o.isDiffractive(a0, a1, a2); }, "", pybind11::arg("iBeamIn"), pybind11::arg("partonIn"), pybind11::arg("xIn"));
		cl.def("isDiffractive", [](Pythia8::HardDiffraction &o, int const & a0, int const & a1, double const & a2, double const & a3) -> bool { return o.isDiffractive(a0, a1, a2, a3); }, "", pybind11::arg("iBeamIn"), pybind11::arg("partonIn"), pybind11::arg("xIn"), pybind11::arg("Q2In"));
		cl.def("isDiffractive", (bool (Pythia8::HardDiffraction::*)(int, int, double, double, double)) &Pythia8::HardDiffraction::isDiffractive, "C++: Pythia8::HardDiffraction::isDiffractive(int, int, double, double, double) --> bool", pybind11::arg("iBeamIn"), pybind11::arg("partonIn"), pybind11::arg("xIn"), pybind11::arg("Q2In"), pybind11::arg("xfIncIn"));
		cl.def("getXPomeronA", (double (Pythia8::HardDiffraction::*)()) &Pythia8::HardDiffraction::getXPomeronA, "C++: Pythia8::HardDiffraction::getXPomeronA() --> double");
		cl.def("getXPomeronB", (double (Pythia8::HardDiffraction::*)()) &Pythia8::HardDiffraction::getXPomeronB, "C++: Pythia8::HardDiffraction::getXPomeronB() --> double");
		cl.def("getTPomeronA", (double (Pythia8::HardDiffraction::*)()) &Pythia8::HardDiffraction::getTPomeronA, "C++: Pythia8::HardDiffraction::getTPomeronA() --> double");
		cl.def("getTPomeronB", (double (Pythia8::HardDiffraction::*)()) &Pythia8::HardDiffraction::getTPomeronB, "C++: Pythia8::HardDiffraction::getTPomeronB() --> double");
		cl.def("getThetaPomeronA", (double (Pythia8::HardDiffraction::*)()) &Pythia8::HardDiffraction::getThetaPomeronA, "C++: Pythia8::HardDiffraction::getThetaPomeronA() --> double");
		cl.def("getThetaPomeronB", (double (Pythia8::HardDiffraction::*)()) &Pythia8::HardDiffraction::getThetaPomeronB, "C++: Pythia8::HardDiffraction::getThetaPomeronB() --> double");
		cl.def("assign", (class Pythia8::HardDiffraction & (Pythia8::HardDiffraction::*)(const class Pythia8::HardDiffraction &)) &Pythia8::HardDiffraction::operator=, "C++: Pythia8::HardDiffraction::operator=(const class Pythia8::HardDiffraction &) --> class Pythia8::HardDiffraction &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceDecays file:Pythia8/ResonanceDecays.h line:28
		pybind11::class_<Pythia8::ResonanceDecays, std::shared_ptr<Pythia8::ResonanceDecays>, PyCallBack_Pythia8_ResonanceDecays, Pythia8::PhysicsBase> cl(M("Pythia8"), "ResonanceDecays", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::ResonanceDecays(); }, [](){ return new PyCallBack_Pythia8_ResonanceDecays(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceDecays const &o){ return new PyCallBack_Pythia8_ResonanceDecays(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceDecays const &o){ return new Pythia8::ResonanceDecays(o); } ) );
		cl.def("init", (void (Pythia8::ResonanceDecays::*)()) &Pythia8::ResonanceDecays::init, "C++: Pythia8::ResonanceDecays::init() --> void");
		cl.def("next", [](Pythia8::ResonanceDecays &o, class Pythia8::Event & a0) -> bool { return o.next(a0); }, "", pybind11::arg("process"));
		cl.def("next", (bool (Pythia8::ResonanceDecays::*)(class Pythia8::Event &, int)) &Pythia8::ResonanceDecays::next, "C++: Pythia8::ResonanceDecays::next(class Pythia8::Event &, int) --> bool", pybind11::arg("process"), pybind11::arg("iDecNow"));
		cl.def("assign", (class Pythia8::ResonanceDecays & (Pythia8::ResonanceDecays::*)(const class Pythia8::ResonanceDecays &)) &Pythia8::ResonanceDecays::operator=, "C++: Pythia8::ResonanceDecays::operator=(const class Pythia8::ResonanceDecays &) --> class Pythia8::ResonanceDecays &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::PartonLevel file:Pythia8/PartonLevel.h line:45
		pybind11::class_<Pythia8::PartonLevel, std::shared_ptr<Pythia8::PartonLevel>, PyCallBack_Pythia8_PartonLevel, Pythia8::PhysicsBase> cl(M("Pythia8"), "PartonLevel", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::PartonLevel(); }, [](){ return new PyCallBack_Pythia8_PartonLevel(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_PartonLevel const &o){ return new PyCallBack_Pythia8_PartonLevel(o); } ) );
		cl.def( pybind11::init( [](Pythia8::PartonLevel const &o){ return new Pythia8::PartonLevel(o); } ) );
		cl.def_readwrite("timesDecPtr", &Pythia8::PartonLevel::timesDecPtr);
		cl.def_readwrite("timesPtr", &Pythia8::PartonLevel::timesPtr);
		cl.def_readwrite("spacePtr", &Pythia8::PartonLevel::spacePtr);
		cl.def("init", (bool (Pythia8::PartonLevel::*)(class std::shared_ptr<class Pythia8::TimeShower>, class std::shared_ptr<class Pythia8::TimeShower>, class std::shared_ptr<class Pythia8::SpaceShower>, class Pythia8::RHadrons *, class std::shared_ptr<class Pythia8::MergingHooks>, class std::shared_ptr<class Pythia8::PartonVertex>, class std::shared_ptr<class Pythia8::StringInteractions>, bool)) &Pythia8::PartonLevel::init, "C++: Pythia8::PartonLevel::init(class std::shared_ptr<class Pythia8::TimeShower>, class std::shared_ptr<class Pythia8::TimeShower>, class std::shared_ptr<class Pythia8::SpaceShower>, class Pythia8::RHadrons *, class std::shared_ptr<class Pythia8::MergingHooks>, class std::shared_ptr<class Pythia8::PartonVertex>, class std::shared_ptr<class Pythia8::StringInteractions>, bool) --> bool", pybind11::arg("timesDecPtrIn"), pybind11::arg("timesPtrIn"), pybind11::arg("spacePtrIn"), pybind11::arg("rHadronsPtrIn"), pybind11::arg("mergingHooksPtr"), pybind11::arg("partonVertexPtrIn"), pybind11::arg("stringInteractionPtrIn"), pybind11::arg("useAsTrial"));
		cl.def("initSwitchID", (void (Pythia8::PartonLevel::*)(const class std::vector<int, class std::allocator<int> > &)) &Pythia8::PartonLevel::initSwitchID, "C++: Pythia8::PartonLevel::initSwitchID(const class std::vector<int, class std::allocator<int> > &) --> void", pybind11::arg("idAList"));
		cl.def("setBeamID", [](Pythia8::PartonLevel &o) -> void { return o.setBeamID(); }, "");
		cl.def("setBeamID", (void (Pythia8::PartonLevel::*)(int)) &Pythia8::PartonLevel::setBeamID, "C++: Pythia8::PartonLevel::setBeamID(int) --> void", pybind11::arg("iPDFA"));
		cl.def("next", (bool (Pythia8::PartonLevel::*)(class Pythia8::Event &, class Pythia8::Event &)) &Pythia8::PartonLevel::next, "C++: Pythia8::PartonLevel::next(class Pythia8::Event &, class Pythia8::Event &) --> bool", pybind11::arg("process"), pybind11::arg("event"));
		cl.def("setupShowerSys", (void (Pythia8::PartonLevel::*)(class Pythia8::Event &, class Pythia8::Event &)) &Pythia8::PartonLevel::setupShowerSys, "C++: Pythia8::PartonLevel::setupShowerSys(class Pythia8::Event &, class Pythia8::Event &) --> void", pybind11::arg("process"), pybind11::arg("event"));
		cl.def("resonanceShowers", (bool (Pythia8::PartonLevel::*)(class Pythia8::Event &, class Pythia8::Event &, bool)) &Pythia8::PartonLevel::resonanceShowers, "C++: Pythia8::PartonLevel::resonanceShowers(class Pythia8::Event &, class Pythia8::Event &, bool) --> bool", pybind11::arg("process"), pybind11::arg("event"), pybind11::arg("skipForR"));
		cl.def("wzDecayShowers", (bool (Pythia8::PartonLevel::*)(class Pythia8::Event &)) &Pythia8::PartonLevel::wzDecayShowers, "C++: Pythia8::PartonLevel::wzDecayShowers(class Pythia8::Event &) --> bool", pybind11::arg("event"));
		cl.def("hasVetoed", (bool (Pythia8::PartonLevel::*)() const) &Pythia8::PartonLevel::hasVetoed, "C++: Pythia8::PartonLevel::hasVetoed() const --> bool");
		cl.def("hasVetoedDiff", (bool (Pythia8::PartonLevel::*)() const) &Pythia8::PartonLevel::hasVetoedDiff, "C++: Pythia8::PartonLevel::hasVetoedDiff() const --> bool");
		cl.def("hasVetoedMerging", (bool (Pythia8::PartonLevel::*)() const) &Pythia8::PartonLevel::hasVetoedMerging, "C++: Pythia8::PartonLevel::hasVetoedMerging() const --> bool");
		cl.def("accumulate", (void (Pythia8::PartonLevel::*)()) &Pythia8::PartonLevel::accumulate, "C++: Pythia8::PartonLevel::accumulate() --> void");
		cl.def("statistics", [](Pythia8::PartonLevel &o) -> void { return o.statistics(); }, "");
		cl.def("statistics", (void (Pythia8::PartonLevel::*)(bool)) &Pythia8::PartonLevel::statistics, "C++: Pythia8::PartonLevel::statistics(bool) --> void", pybind11::arg("reset"));
		cl.def("resetStatistics", (void (Pythia8::PartonLevel::*)()) &Pythia8::PartonLevel::resetStatistics, "C++: Pythia8::PartonLevel::resetStatistics() --> void");
		cl.def("resetTrial", (void (Pythia8::PartonLevel::*)()) &Pythia8::PartonLevel::resetTrial, "C++: Pythia8::PartonLevel::resetTrial() --> void");
		cl.def("pTLastInShower", (double (Pythia8::PartonLevel::*)()) &Pythia8::PartonLevel::pTLastInShower, "C++: Pythia8::PartonLevel::pTLastInShower() --> double");
		cl.def("typeLastInShower", (int (Pythia8::PartonLevel::*)()) &Pythia8::PartonLevel::typeLastInShower, "C++: Pythia8::PartonLevel::typeLastInShower() --> int");
		cl.def("canEnhanceTrial", (bool (Pythia8::PartonLevel::*)()) &Pythia8::PartonLevel::canEnhanceTrial, "C++: Pythia8::PartonLevel::canEnhanceTrial() --> bool");
		cl.def("getEnhancedTrialPT", (double (Pythia8::PartonLevel::*)()) &Pythia8::PartonLevel::getEnhancedTrialPT, "C++: Pythia8::PartonLevel::getEnhancedTrialPT() --> double");
		cl.def("getEnhancedTrialWeight", (double (Pythia8::PartonLevel::*)()) &Pythia8::PartonLevel::getEnhancedTrialWeight, "C++: Pythia8::PartonLevel::getEnhancedTrialWeight() --> double");
		cl.def("onInitInfoPtr", (void (Pythia8::PartonLevel::*)()) &Pythia8::PartonLevel::onInitInfoPtr, "C++: Pythia8::PartonLevel::onInitInfoPtr() --> void");
		cl.def("assign", (class Pythia8::PartonLevel & (Pythia8::PartonLevel::*)(const class Pythia8::PartonLevel &)) &Pythia8::PartonLevel::operator=, "C++: Pythia8::PartonLevel::operator=(const class Pythia8::PartonLevel &) --> class Pythia8::PartonLevel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::SimpleWeakShowerMEs file:Pythia8/SimpleWeakShowerMEs.h line:26
		pybind11::class_<Pythia8::SimpleWeakShowerMEs, std::shared_ptr<Pythia8::SimpleWeakShowerMEs>> cl(M("Pythia8"), "SimpleWeakShowerMEs", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::SimpleWeakShowerMEs(); } ) );
		cl.def( pybind11::init( [](Pythia8::SimpleWeakShowerMEs const &o){ return new Pythia8::SimpleWeakShowerMEs(o); } ) );
		cl.def("getMEqg2qg", (double (Pythia8::SimpleWeakShowerMEs::*)(double, double, double)) &Pythia8::SimpleWeakShowerMEs::getMEqg2qg, "C++: Pythia8::SimpleWeakShowerMEs::getMEqg2qg(double, double, double) --> double", pybind11::arg("sH"), pybind11::arg("tH"), pybind11::arg("uH"));
		cl.def("getMEqq2qq", (double (Pythia8::SimpleWeakShowerMEs::*)(double, double, double, bool)) &Pythia8::SimpleWeakShowerMEs::getMEqq2qq, "C++: Pythia8::SimpleWeakShowerMEs::getMEqq2qq(double, double, double, bool) --> double", pybind11::arg("sH"), pybind11::arg("tH"), pybind11::arg("uH"), pybind11::arg("sameID"));
		cl.def("getMEgg2gg", (double (Pythia8::SimpleWeakShowerMEs::*)(double, double, double)) &Pythia8::SimpleWeakShowerMEs::getMEgg2gg, "C++: Pythia8::SimpleWeakShowerMEs::getMEgg2gg(double, double, double) --> double", pybind11::arg("sH"), pybind11::arg("tH"), pybind11::arg("uH"));
		cl.def("getMEgg2qqbar", (double (Pythia8::SimpleWeakShowerMEs::*)(double, double, double)) &Pythia8::SimpleWeakShowerMEs::getMEgg2qqbar, "C++: Pythia8::SimpleWeakShowerMEs::getMEgg2qqbar(double, double, double) --> double", pybind11::arg("sH"), pybind11::arg("tH"), pybind11::arg("uH"));
		cl.def("getMEqqbar2gg", (double (Pythia8::SimpleWeakShowerMEs::*)(double, double, double)) &Pythia8::SimpleWeakShowerMEs::getMEqqbar2gg, "C++: Pythia8::SimpleWeakShowerMEs::getMEqqbar2gg(double, double, double) --> double", pybind11::arg("sH"), pybind11::arg("tH"), pybind11::arg("uH"));
		cl.def("getMEqqbar2qqbar", (double (Pythia8::SimpleWeakShowerMEs::*)(double, double, double, bool)) &Pythia8::SimpleWeakShowerMEs::getMEqqbar2qqbar, "C++: Pythia8::SimpleWeakShowerMEs::getMEqqbar2qqbar(double, double, double, bool) --> double", pybind11::arg("sH"), pybind11::arg("tH"), pybind11::arg("uH"), pybind11::arg("sameID"));
		cl.def("getMEqg2qgZ", (double (Pythia8::SimpleWeakShowerMEs::*)(class Pythia8::Vec4, class Pythia8::Vec4, class Pythia8::Vec4, class Pythia8::Vec4, class Pythia8::Vec4)) &Pythia8::SimpleWeakShowerMEs::getMEqg2qgZ, "C++: Pythia8::SimpleWeakShowerMEs::getMEqg2qgZ(class Pythia8::Vec4, class Pythia8::Vec4, class Pythia8::Vec4, class Pythia8::Vec4, class Pythia8::Vec4) --> double", pybind11::arg("p1"), pybind11::arg("p2"), pybind11::arg("p3"), pybind11::arg("p4"), pybind11::arg("p5"));
		cl.def("getMEqq2qqZ", (double (Pythia8::SimpleWeakShowerMEs::*)(class Pythia8::Vec4, class Pythia8::Vec4, class Pythia8::Vec4, class Pythia8::Vec4, class Pythia8::Vec4)) &Pythia8::SimpleWeakShowerMEs::getMEqq2qqZ, "C++: Pythia8::SimpleWeakShowerMEs::getMEqq2qqZ(class Pythia8::Vec4, class Pythia8::Vec4, class Pythia8::Vec4, class Pythia8::Vec4, class Pythia8::Vec4) --> double", pybind11::arg("p1"), pybind11::arg("p2"), pybind11::arg("p3"), pybind11::arg("p4"), pybind11::arg("p5"));
		cl.def("assign", (class Pythia8::SimpleWeakShowerMEs & (Pythia8::SimpleWeakShowerMEs::*)(const class Pythia8::SimpleWeakShowerMEs &)) &Pythia8::SimpleWeakShowerMEs::operator=, "C++: Pythia8::SimpleWeakShowerMEs::operator=(const class Pythia8::SimpleWeakShowerMEs &) --> class Pythia8::SimpleWeakShowerMEs &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::Clustering file:Pythia8/History.h line:32
		pybind11::class_<Pythia8::Clustering, std::shared_ptr<Pythia8::Clustering>> cl(M("Pythia8"), "Clustering", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::Clustering(); } ) );
		cl.def( pybind11::init( [](Pythia8::Clustering const &o){ return new Pythia8::Clustering(o); } ) );
		cl.def( pybind11::init( [](int const & a0, int const & a1, int const & a2, int const & a3, double const & a4){ return new Pythia8::Clustering(a0, a1, a2, a3, a4); } ), "doc" , pybind11::arg("emtIn"), pybind11::arg("radIn"), pybind11::arg("recIn"), pybind11::arg("partnerIn"), pybind11::arg("pTscaleIn"));
		cl.def( pybind11::init( [](int const & a0, int const & a1, int const & a2, int const & a3, double const & a4, int const & a5){ return new Pythia8::Clustering(a0, a1, a2, a3, a4, a5); } ), "doc" , pybind11::arg("emtIn"), pybind11::arg("radIn"), pybind11::arg("recIn"), pybind11::arg("partnerIn"), pybind11::arg("pTscaleIn"), pybind11::arg("flavRadBefIn"));
		cl.def( pybind11::init( [](int const & a0, int const & a1, int const & a2, int const & a3, double const & a4, int const & a5, int const & a6){ return new Pythia8::Clustering(a0, a1, a2, a3, a4, a5, a6); } ), "doc" , pybind11::arg("emtIn"), pybind11::arg("radIn"), pybind11::arg("recIn"), pybind11::arg("partnerIn"), pybind11::arg("pTscaleIn"), pybind11::arg("flavRadBefIn"), pybind11::arg("spinRadIn"));
		cl.def( pybind11::init( [](int const & a0, int const & a1, int const & a2, int const & a3, double const & a4, int const & a5, int const & a6, int const & a7){ return new Pythia8::Clustering(a0, a1, a2, a3, a4, a5, a6, a7); } ), "doc" , pybind11::arg("emtIn"), pybind11::arg("radIn"), pybind11::arg("recIn"), pybind11::arg("partnerIn"), pybind11::arg("pTscaleIn"), pybind11::arg("flavRadBefIn"), pybind11::arg("spinRadIn"), pybind11::arg("spinEmtIn"));
		cl.def( pybind11::init( [](int const & a0, int const & a1, int const & a2, int const & a3, double const & a4, int const & a5, int const & a6, int const & a7, int const & a8){ return new Pythia8::Clustering(a0, a1, a2, a3, a4, a5, a6, a7, a8); } ), "doc" , pybind11::arg("emtIn"), pybind11::arg("radIn"), pybind11::arg("recIn"), pybind11::arg("partnerIn"), pybind11::arg("pTscaleIn"), pybind11::arg("flavRadBefIn"), pybind11::arg("spinRadIn"), pybind11::arg("spinEmtIn"), pybind11::arg("spinRecIn"));
		cl.def( pybind11::init( [](int const & a0, int const & a1, int const & a2, int const & a3, double const & a4, int const & a5, int const & a6, int const & a7, int const & a8, int const & a9){ return new Pythia8::Clustering(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); } ), "doc" , pybind11::arg("emtIn"), pybind11::arg("radIn"), pybind11::arg("recIn"), pybind11::arg("partnerIn"), pybind11::arg("pTscaleIn"), pybind11::arg("flavRadBefIn"), pybind11::arg("spinRadIn"), pybind11::arg("spinEmtIn"), pybind11::arg("spinRecIn"), pybind11::arg("spinRadBefIn"));
		cl.def( pybind11::init( [](int const & a0, int const & a1, int const & a2, int const & a3, double const & a4, int const & a5, int const & a6, int const & a7, int const & a8, int const & a9, int const & a10){ return new Pythia8::Clustering(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10); } ), "doc" , pybind11::arg("emtIn"), pybind11::arg("radIn"), pybind11::arg("recIn"), pybind11::arg("partnerIn"), pybind11::arg("pTscaleIn"), pybind11::arg("flavRadBefIn"), pybind11::arg("spinRadIn"), pybind11::arg("spinEmtIn"), pybind11::arg("spinRecIn"), pybind11::arg("spinRadBefIn"), pybind11::arg("radBefIn"));
		cl.def( pybind11::init<int, int, int, int, double, int, int, int, int, int, int, int>(), pybind11::arg("emtIn"), pybind11::arg("radIn"), pybind11::arg("recIn"), pybind11::arg("partnerIn"), pybind11::arg("pTscaleIn"), pybind11::arg("flavRadBefIn"), pybind11::arg("spinRadIn"), pybind11::arg("spinEmtIn"), pybind11::arg("spinRecIn"), pybind11::arg("spinRadBefIn"), pybind11::arg("radBefIn"), pybind11::arg("recBefIn") );

		cl.def_readwrite("emitted", &Pythia8::Clustering::emitted);
		cl.def_readwrite("emittor", &Pythia8::Clustering::emittor);
		cl.def_readwrite("recoiler", &Pythia8::Clustering::recoiler);
		cl.def_readwrite("partner", &Pythia8::Clustering::partner);
		cl.def_readwrite("pTscale", &Pythia8::Clustering::pTscale);
		cl.def_readwrite("flavRadBef", &Pythia8::Clustering::flavRadBef);
		cl.def_readwrite("spinRad", &Pythia8::Clustering::spinRad);
		cl.def_readwrite("spinEmt", &Pythia8::Clustering::spinEmt);
		cl.def_readwrite("spinRec", &Pythia8::Clustering::spinRec);
		cl.def_readwrite("spinRadBef", &Pythia8::Clustering::spinRadBef);
		cl.def_readwrite("radBef", &Pythia8::Clustering::radBef);
		cl.def_readwrite("recBef", &Pythia8::Clustering::recBef);
		cl.def("pT", (double (Pythia8::Clustering::*)() const) &Pythia8::Clustering::pT, "C++: Pythia8::Clustering::pT() const --> double");
		cl.def("list", (void (Pythia8::Clustering::*)() const) &Pythia8::Clustering::list, "C++: Pythia8::Clustering::list() const --> void");
	}
}

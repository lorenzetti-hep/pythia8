#include <Pythia8/Basics.h>
#include <Pythia8/BeamParticle.h>
#include <Pythia8/Event.h>
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
#include <Pythia8/Settings.h>
#include <Pythia8/SharedPointers.h>
#include <Pythia8/ShowerModel.h>
#include <Pythia8/SigmaLowEnergy.h>
#include <Pythia8/SigmaProcess.h>
#include <Pythia8/SigmaTotal.h>
#include <Pythia8/StandardModel.h>
#include <Pythia8/SusyCouplings.h>
#include <Pythia8/UserHooks.h>
#include <Pythia8/Weights.h>
#include <functional>
#include <istream>
#include <iterator>
#include <map>
#include <memory>
#include <set>
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

// Pythia8::Angantyr file:Pythia8/HeavyIons.h line:148
struct PyCallBack_Pythia8_Angantyr : public Pythia8::Angantyr {
	using Pythia8::Angantyr::Angantyr;

	bool init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Angantyr *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Angantyr::init();
	}
	bool next() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Angantyr *>(this), "next");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Angantyr::next();
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Angantyr *>(this), "onInitInfoPtr");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Angantyr::onInitInfoPtr();
	}
	void stat() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Angantyr *>(this), "stat");
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
	void onBeginEvent() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Angantyr *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Angantyr *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::Angantyr *>(this), "onStat");
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

void bind_Pythia8_HeavyIons(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::Angantyr file:Pythia8/HeavyIons.h line:148
		pybind11::class_<Pythia8::Angantyr, std::shared_ptr<Pythia8::Angantyr>, PyCallBack_Pythia8_Angantyr, Pythia8::HeavyIons> cl(M("Pythia8"), "Angantyr", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<class Pythia8::Pythia &>(), pybind11::arg("mainPythiaIn") );


		pybind11::enum_<Pythia8::Angantyr::PythiaObject>(cl, "PythiaObject", pybind11::arithmetic(), "")
			.value("HADRON", Pythia8::Angantyr::PythiaObject::HADRON)
			.value("MBIAS", Pythia8::Angantyr::PythiaObject::MBIAS)
			.value("SASD", Pythia8::Angantyr::PythiaObject::SASD)
			.value("SIGPP", Pythia8::Angantyr::PythiaObject::SIGPP)
			.value("SIGPN", Pythia8::Angantyr::PythiaObject::SIGPN)
			.value("SIGNP", Pythia8::Angantyr::PythiaObject::SIGNP)
			.value("SIGNN", Pythia8::Angantyr::PythiaObject::SIGNN)
			.value("ALL", Pythia8::Angantyr::PythiaObject::ALL)
			.export_values();

		cl.def("init", (bool (Pythia8::Angantyr::*)()) &Pythia8::Angantyr::init, "C++: Pythia8::Angantyr::init() --> bool");
		cl.def("next", (bool (Pythia8::Angantyr::*)()) &Pythia8::Angantyr::next, "C++: Pythia8::Angantyr::next() --> bool");
		cl.def("setUserHooksPtr", (bool (Pythia8::Angantyr::*)(enum Pythia8::Angantyr::PythiaObject, class std::shared_ptr<class Pythia8::UserHooks>)) &Pythia8::Angantyr::setUserHooksPtr, "C++: Pythia8::Angantyr::setUserHooksPtr(enum Pythia8::Angantyr::PythiaObject, class std::shared_ptr<class Pythia8::UserHooks>) --> bool", pybind11::arg("sel"), pybind11::arg("userHooksPtrIn"));
		cl.def("onInitInfoPtr", (void (Pythia8::Angantyr::*)()) &Pythia8::Angantyr::onInitInfoPtr, "C++: Pythia8::Angantyr::onInitInfoPtr() --> void");
		cl.def("init", [](Pythia8::Angantyr &o, enum Pythia8::Angantyr::PythiaObject const & a0, class std::basic_string<char> const & a1) -> bool { return o.init(a0, a1); }, "", pybind11::arg("sel"), pybind11::arg("name"));
		cl.def("init", (bool (Pythia8::Angantyr::*)(enum Pythia8::Angantyr::PythiaObject, std::string, int)) &Pythia8::Angantyr::init, "C++: Pythia8::Angantyr::init(enum Pythia8::Angantyr::PythiaObject, std::string, int) --> bool", pybind11::arg("sel"), pybind11::arg("name"), pybind11::arg("n"));
		cl.def("mkEventInfo", [](Pythia8::Angantyr &o, class Pythia8::Pythia & a0, class Pythia8::Info & a1) -> Pythia8::EventInfo { return o.mkEventInfo(a0, a1); }, "", pybind11::arg(""), pybind11::arg(""));
		cl.def("mkEventInfo", (class Pythia8::EventInfo (Pythia8::Angantyr::*)(class Pythia8::Pythia &, class Pythia8::Info &, const class Pythia8::SubCollision *)) &Pythia8::Angantyr::mkEventInfo, "C++: Pythia8::Angantyr::mkEventInfo(class Pythia8::Pythia &, class Pythia8::Info &, const class Pythia8::SubCollision *) --> class Pythia8::EventInfo", pybind11::arg(""), pybind11::arg(""), pybind11::arg("coll"));
		cl.def("getSignal", (class Pythia8::EventInfo (Pythia8::Angantyr::*)(const class Pythia8::SubCollision &)) &Pythia8::Angantyr::getSignal, "C++: Pythia8::Angantyr::getSignal(const class Pythia8::SubCollision &) --> class Pythia8::EventInfo", pybind11::arg("coll"));
		cl.def("getND", (class Pythia8::EventInfo (Pythia8::Angantyr::*)()) &Pythia8::Angantyr::getND, "C++: Pythia8::Angantyr::getND() --> class Pythia8::EventInfo");
		cl.def("getND", (class Pythia8::EventInfo (Pythia8::Angantyr::*)(const class Pythia8::SubCollision &)) &Pythia8::Angantyr::getND, "C++: Pythia8::Angantyr::getND(const class Pythia8::SubCollision &) --> class Pythia8::EventInfo", pybind11::arg("coll"));
		cl.def("getEl", (class Pythia8::EventInfo (Pythia8::Angantyr::*)(const class Pythia8::SubCollision &)) &Pythia8::Angantyr::getEl, "C++: Pythia8::Angantyr::getEl(const class Pythia8::SubCollision &) --> class Pythia8::EventInfo", pybind11::arg("coll"));
		cl.def("getSDP", (class Pythia8::EventInfo (Pythia8::Angantyr::*)(const class Pythia8::SubCollision &)) &Pythia8::Angantyr::getSDP, "C++: Pythia8::Angantyr::getSDP(const class Pythia8::SubCollision &) --> class Pythia8::EventInfo", pybind11::arg("coll"));
		cl.def("getSDT", (class Pythia8::EventInfo (Pythia8::Angantyr::*)(const class Pythia8::SubCollision &)) &Pythia8::Angantyr::getSDT, "C++: Pythia8::Angantyr::getSDT(const class Pythia8::SubCollision &) --> class Pythia8::EventInfo", pybind11::arg("coll"));
		cl.def("getDD", (class Pythia8::EventInfo (Pythia8::Angantyr::*)(const class Pythia8::SubCollision &)) &Pythia8::Angantyr::getDD, "C++: Pythia8::Angantyr::getDD(const class Pythia8::SubCollision &) --> class Pythia8::EventInfo", pybind11::arg("coll"));
		cl.def("getCD", (class Pythia8::EventInfo (Pythia8::Angantyr::*)(const class Pythia8::SubCollision &)) &Pythia8::Angantyr::getCD, "C++: Pythia8::Angantyr::getCD(const class Pythia8::SubCollision &) --> class Pythia8::EventInfo", pybind11::arg("coll"));
		cl.def("getSDabsP", (class Pythia8::EventInfo (Pythia8::Angantyr::*)(const class Pythia8::SubCollision &)) &Pythia8::Angantyr::getSDabsP, "C++: Pythia8::Angantyr::getSDabsP(const class Pythia8::SubCollision &) --> class Pythia8::EventInfo", pybind11::arg("coll"));
		cl.def("getSDabsT", (class Pythia8::EventInfo (Pythia8::Angantyr::*)(const class Pythia8::SubCollision &)) &Pythia8::Angantyr::getSDabsT, "C++: Pythia8::Angantyr::getSDabsT(const class Pythia8::SubCollision &) --> class Pythia8::EventInfo", pybind11::arg("coll"));
		cl.def("getMBIAS", (class Pythia8::EventInfo (Pythia8::Angantyr::*)(const class Pythia8::SubCollision *, int)) &Pythia8::Angantyr::getMBIAS, "C++: Pythia8::Angantyr::getMBIAS(const class Pythia8::SubCollision *, int) --> class Pythia8::EventInfo", pybind11::arg("coll"), pybind11::arg("procid"));
		cl.def("getSASD", (class Pythia8::EventInfo (Pythia8::Angantyr::*)(const class Pythia8::SubCollision *, int)) &Pythia8::Angantyr::getSASD, "C++: Pythia8::Angantyr::getSASD(const class Pythia8::SubCollision *, int) --> class Pythia8::EventInfo", pybind11::arg("coll"), pybind11::arg("procid"));
		cl.def("addSASD", (void (Pythia8::Angantyr::*)(const class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > &)) &Pythia8::Angantyr::addSASD, "C++: Pythia8::Angantyr::addSASD(const class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > &) --> void", pybind11::arg("coll"));
		cl.def("addSDsecond", (void (Pythia8::Angantyr::*)(const class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > &)) &Pythia8::Angantyr::addSDsecond, "C++: Pythia8::Angantyr::addSDsecond(const class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > &) --> void", pybind11::arg("coll"));
		cl.def("addCDsecond", (void (Pythia8::Angantyr::*)(const class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > &)) &Pythia8::Angantyr::addCDsecond, "C++: Pythia8::Angantyr::addCDsecond(const class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > &) --> void", pybind11::arg("coll"));
		cl.def("addELsecond", (void (Pythia8::Angantyr::*)(const class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > &)) &Pythia8::Angantyr::addELsecond, "C++: Pythia8::Angantyr::addELsecond(const class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > &) --> void", pybind11::arg("coll"));
		cl.def("setupFullCollision", (bool (Pythia8::Angantyr::*)(class Pythia8::EventInfo &, const class Pythia8::SubCollision &, enum Pythia8::Nucleon::Status, enum Pythia8::Nucleon::Status)) &Pythia8::Angantyr::setupFullCollision, "C++: Pythia8::Angantyr::setupFullCollision(class Pythia8::EventInfo &, const class Pythia8::SubCollision &, enum Pythia8::Nucleon::Status, enum Pythia8::Nucleon::Status) --> bool", pybind11::arg("ei"), pybind11::arg("coll"), pybind11::arg("ptype"), pybind11::arg("ttype"));
		cl.def("isRemnant", [](Pythia8::Angantyr const &o, const class Pythia8::EventInfo & a0, int const & a1) -> bool { return o.isRemnant(a0, a1); }, "", pybind11::arg("ei"), pybind11::arg("i"));
		cl.def("isRemnant", (bool (Pythia8::Angantyr::*)(const class Pythia8::EventInfo &, int, int) const) &Pythia8::Angantyr::isRemnant, "C++: Pythia8::Angantyr::isRemnant(const class Pythia8::EventInfo &, int, int) const --> bool", pybind11::arg("ei"), pybind11::arg("i"), pybind11::arg("past"));
		cl.def("fixIsoSpin", (bool (Pythia8::Angantyr::*)(class Pythia8::EventInfo &)) &Pythia8::Angantyr::fixIsoSpin, "C++: Pythia8::Angantyr::fixIsoSpin(class Pythia8::EventInfo &) --> bool", pybind11::arg("ei"));
		cl.def("shiftEvent", (class Pythia8::EventInfo & (Pythia8::Angantyr::*)(class Pythia8::EventInfo &)) &Pythia8::Angantyr::shiftEvent, "C++: Pythia8::Angantyr::shiftEvent(class Pythia8::EventInfo &) --> class Pythia8::EventInfo &", pybind11::return_value_policy::reference, pybind11::arg("ei"));
		cl.def_static("getBeam", (int (*)(class Pythia8::Event &, int)) &Pythia8::Angantyr::getBeam, "C++: Pythia8::Angantyr::getBeam(class Pythia8::Event &, int) --> int", pybind11::arg("ev"), pybind11::arg("i"));
		cl.def("nextSASD", (bool (Pythia8::Angantyr::*)(int)) &Pythia8::Angantyr::nextSASD, "C++: Pythia8::Angantyr::nextSASD(int) --> bool", pybind11::arg("proc"));
		cl.def("addNucleonExcitation", [](Pythia8::Angantyr &o, class Pythia8::EventInfo & a0, class Pythia8::EventInfo & a1) -> bool { return o.addNucleonExcitation(a0, a1); }, "", pybind11::arg("orig"), pybind11::arg("add"));
		cl.def("addNucleonExcitation", (bool (Pythia8::Angantyr::*)(class Pythia8::EventInfo &, class Pythia8::EventInfo &, bool)) &Pythia8::Angantyr::addNucleonExcitation, "C++: Pythia8::Angantyr::addNucleonExcitation(class Pythia8::EventInfo &, class Pythia8::EventInfo &, bool) --> bool", pybind11::arg("orig"), pybind11::arg("add"), pybind11::arg("colConnect"));
		cl.def("findRecoilers", (class std::vector<int, class std::allocator<int> > (Pythia8::Angantyr::*)(const class Pythia8::Event &, bool, int, int, const class Pythia8::Vec4 &, const class Pythia8::Vec4 &)) &Pythia8::Angantyr::findRecoilers, "C++: Pythia8::Angantyr::findRecoilers(const class Pythia8::Event &, bool, int, int, const class Pythia8::Vec4 &, const class Pythia8::Vec4 &) --> class std::vector<int, class std::allocator<int> >", pybind11::arg("e"), pybind11::arg("tside"), pybind11::arg("beam"), pybind11::arg("end"), pybind11::arg("pdiff"), pybind11::arg("pbeam"));
		cl.def("addSubEvent", (void (Pythia8::Angantyr::*)(class Pythia8::Event &, class Pythia8::Event &)) &Pythia8::Angantyr::addSubEvent, "C++: Pythia8::Angantyr::addSubEvent(class Pythia8::Event &, class Pythia8::Event &) --> void", pybind11::arg("evnt"), pybind11::arg("sub"));
		cl.def_static("addJunctions", (void (*)(class Pythia8::Event &, class Pythia8::Event &, int)) &Pythia8::Angantyr::addJunctions, "C++: Pythia8::Angantyr::addJunctions(class Pythia8::Event &, class Pythia8::Event &, int) --> void", pybind11::arg("evnt"), pybind11::arg("sub"), pybind11::arg("coloff"));
		cl.def("addNucleusRemnants", (bool (Pythia8::Angantyr::*)(const class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, const class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &)) &Pythia8::Angantyr::addNucleusRemnants, "C++: Pythia8::Angantyr::addNucleusRemnants(const class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, const class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &) --> bool", pybind11::arg("proj"), pybind11::arg("targ"));
		cl.def_static("mT2", (double (*)(const class Pythia8::Vec4 &)) &Pythia8::Angantyr::mT2, "C++: Pythia8::Angantyr::mT2(const class Pythia8::Vec4 &) --> double", pybind11::arg("p"));
		cl.def_static("mT", (double (*)(const class Pythia8::Vec4 &)) &Pythia8::Angantyr::mT, "C++: Pythia8::Angantyr::mT(const class Pythia8::Vec4 &) --> double", pybind11::arg("p"));
		cl.def("assign", (class Pythia8::Angantyr & (Pythia8::Angantyr::*)(const class Pythia8::Angantyr &)) &Pythia8::Angantyr::operator=, "C++: Pythia8::Angantyr::operator=(const class Pythia8::Angantyr &) --> class Pythia8::Angantyr &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}

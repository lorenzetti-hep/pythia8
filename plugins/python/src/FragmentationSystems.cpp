#include <Pythia8/Basics.h>
#include <Pythia8/BeamParticle.h>
#include <Pythia8/Event.h>
#include <Pythia8/FragmentationFlavZpT.h>
#include <Pythia8/FragmentationSystems.h>
#include <Pythia8/HadronWidths.h>
#include <Pythia8/Info.h>
#include <Pythia8/MiniStringFragmentation.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/PartonDistributions.h>
#include <Pythia8/PhysicsBase.h>
#include <Pythia8/ResonanceWidths.h>
#include <Pythia8/StringInteractions.h>
#include <ios>
#include <istream>
#include <iterator>
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

// Pythia8::HadronWidths file:Pythia8/HadronWidths.h line:22
struct PyCallBack_Pythia8_HadronWidths : public Pythia8::HadronWidths {
	using Pythia8::HadronWidths::HadronWidths;

	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HadronWidths *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HadronWidths *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HadronWidths *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HadronWidths *>(this), "onStat");
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

// Pythia8::MiniStringFragmentation file:Pythia8/MiniStringFragmentation.h line:30
struct PyCallBack_Pythia8_MiniStringFragmentation : public Pythia8::MiniStringFragmentation {
	using Pythia8::MiniStringFragmentation::MiniStringFragmentation;

	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MiniStringFragmentation *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MiniStringFragmentation *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MiniStringFragmentation *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::MiniStringFragmentation *>(this), "onStat");
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

// Pythia8::StringInteractions file:Pythia8/StringInteractions.h line:28
struct PyCallBack_Pythia8_StringInteractions : public Pythia8::StringInteractions {
	using Pythia8::StringInteractions::StringInteractions;

	bool init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringInteractions *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return StringInteractions::init();
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringInteractions *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringInteractions *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringInteractions *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringInteractions *>(this), "onStat");
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

// Pythia8::ColourReconnectionBase file:Pythia8/StringInteractions.h line:78
struct PyCallBack_Pythia8_ColourReconnectionBase : public Pythia8::ColourReconnectionBase {
	using Pythia8::ColourReconnectionBase::ColourReconnectionBase;

	bool init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ColourReconnectionBase *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return ColourReconnectionBase::init();
	}
	void reassignBeamPtrs(class Pythia8::BeamParticle * a0, class Pythia8::BeamParticle * a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ColourReconnectionBase *>(this), "reassignBeamPtrs");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ColourReconnectionBase::reassignBeamPtrs(a0, a1);
	}
	bool next(class Pythia8::Event & a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ColourReconnectionBase *>(this), "next");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"ColourReconnectionBase::next\"");
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ColourReconnectionBase *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ColourReconnectionBase *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ColourReconnectionBase *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ColourReconnectionBase *>(this), "onStat");
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

void bind_Pythia8_FragmentationSystems(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::StringSystem file:Pythia8/FragmentationSystems.h line:184
		pybind11::class_<Pythia8::StringSystem, std::shared_ptr<Pythia8::StringSystem>> cl(M("Pythia8"), "StringSystem", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::StringSystem(); } ) );
		cl.def( pybind11::init( [](Pythia8::StringSystem const &o){ return new Pythia8::StringSystem(o); } ) );
		cl.def_readwrite("system", &Pythia8::StringSystem::system);
		cl.def_readwrite("sizePartons", &Pythia8::StringSystem::sizePartons);
		cl.def_readwrite("sizeStrings", &Pythia8::StringSystem::sizeStrings);
		cl.def_readwrite("sizeRegions", &Pythia8::StringSystem::sizeRegions);
		cl.def_readwrite("indxReg", &Pythia8::StringSystem::indxReg);
		cl.def_readwrite("iMax", &Pythia8::StringSystem::iMax);
		cl.def_readwrite("mJoin", &Pythia8::StringSystem::mJoin);
		cl.def_readwrite("m2Join", &Pythia8::StringSystem::m2Join);
		cl.def("setUp", (void (Pythia8::StringSystem::*)(class std::vector<int, class std::allocator<int> > &, class Pythia8::Event &)) &Pythia8::StringSystem::setUp, "C++: Pythia8::StringSystem::setUp(class std::vector<int, class std::allocator<int> > &, class Pythia8::Event &) --> void", pybind11::arg("iSys"), pybind11::arg("event"));
		cl.def("iReg", (int (Pythia8::StringSystem::*)(int, int) const) &Pythia8::StringSystem::iReg, "C++: Pythia8::StringSystem::iReg(int, int) const --> int", pybind11::arg("iPos"), pybind11::arg("iNeg"));
		cl.def("region", (class Pythia8::StringRegion & (Pythia8::StringSystem::*)(int, int)) &Pythia8::StringSystem::region, "C++: Pythia8::StringSystem::region(int, int) --> class Pythia8::StringRegion &", pybind11::return_value_policy::reference, pybind11::arg("iPos"), pybind11::arg("iNeg"));
		cl.def("regionLowPos", (class Pythia8::StringRegion & (Pythia8::StringSystem::*)(int)) &Pythia8::StringSystem::regionLowPos, "C++: Pythia8::StringSystem::regionLowPos(int) --> class Pythia8::StringRegion &", pybind11::return_value_policy::reference, pybind11::arg("iPos"));
		cl.def("regionLowNeg", (class Pythia8::StringRegion & (Pythia8::StringSystem::*)(int)) &Pythia8::StringSystem::regionLowNeg, "C++: Pythia8::StringSystem::regionLowNeg(int) --> class Pythia8::StringRegion &", pybind11::return_value_policy::reference, pybind11::arg("iNeg"));
		cl.def("assign", (class Pythia8::StringSystem & (Pythia8::StringSystem::*)(const class Pythia8::StringSystem &)) &Pythia8::StringSystem::operator=, "C++: Pythia8::StringSystem::operator=(const class Pythia8::StringSystem &) --> class Pythia8::StringSystem &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::StringVertex file:Pythia8/FragmentationSystems.h line:222
		pybind11::class_<Pythia8::StringVertex, std::shared_ptr<Pythia8::StringVertex>> cl(M("Pythia8"), "StringVertex", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::StringVertex(); } ), "doc" );
		cl.def( pybind11::init( [](bool const & a0){ return new Pythia8::StringVertex(a0); } ), "doc" , pybind11::arg("fromPosIn"));
		cl.def( pybind11::init( [](bool const & a0, int const & a1){ return new Pythia8::StringVertex(a0, a1); } ), "doc" , pybind11::arg("fromPosIn"), pybind11::arg("iRegPosIn"));
		cl.def( pybind11::init( [](bool const & a0, int const & a1, int const & a2){ return new Pythia8::StringVertex(a0, a1, a2); } ), "doc" , pybind11::arg("fromPosIn"), pybind11::arg("iRegPosIn"), pybind11::arg("iRegNegIn"));
		cl.def( pybind11::init( [](bool const & a0, int const & a1, int const & a2, double const & a3){ return new Pythia8::StringVertex(a0, a1, a2, a3); } ), "doc" , pybind11::arg("fromPosIn"), pybind11::arg("iRegPosIn"), pybind11::arg("iRegNegIn"), pybind11::arg("xRegPosIn"));
		cl.def( pybind11::init<bool, int, int, double, double>(), pybind11::arg("fromPosIn"), pybind11::arg("iRegPosIn"), pybind11::arg("iRegNegIn"), pybind11::arg("xRegPosIn"), pybind11::arg("xRegNegIn") );

		cl.def( pybind11::init( [](Pythia8::StringVertex const &o){ return new Pythia8::StringVertex(o); } ) );
		cl.def_readwrite("fromPos", &Pythia8::StringVertex::fromPos);
		cl.def_readwrite("iRegPos", &Pythia8::StringVertex::iRegPos);
		cl.def_readwrite("iRegNeg", &Pythia8::StringVertex::iRegNeg);
		cl.def_readwrite("xRegPos", &Pythia8::StringVertex::xRegPos);
		cl.def_readwrite("xRegNeg", &Pythia8::StringVertex::xRegNeg);
		cl.def("assign", (class Pythia8::StringVertex & (Pythia8::StringVertex::*)(const class Pythia8::StringVertex &)) &Pythia8::StringVertex::operator=, "C++: Pythia8::StringVertex::operator=(const class Pythia8::StringVertex &) --> class Pythia8::StringVertex &", pybind11::return_value_policy::reference, pybind11::arg("v"));
	}
	{ // Pythia8::HadronWidths file:Pythia8/HadronWidths.h line:22
		pybind11::class_<Pythia8::HadronWidths, std::shared_ptr<Pythia8::HadronWidths>, PyCallBack_Pythia8_HadronWidths, Pythia8::PhysicsBase> cl(M("Pythia8"), "HadronWidths", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::HadronWidths(); }, [](){ return new PyCallBack_Pythia8_HadronWidths(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_HadronWidths const &o){ return new PyCallBack_Pythia8_HadronWidths(o); } ) );
		cl.def( pybind11::init( [](Pythia8::HadronWidths const &o){ return new Pythia8::HadronWidths(o); } ) );
		cl.def("init", (bool (Pythia8::HadronWidths::*)(std::string)) &Pythia8::HadronWidths::init, "C++: Pythia8::HadronWidths::init(std::string) --> bool", pybind11::arg("path"));
		cl.def("init", (bool (Pythia8::HadronWidths::*)(class std::basic_istream<char> &)) &Pythia8::HadronWidths::init, "C++: Pythia8::HadronWidths::init(class std::basic_istream<char> &) --> bool", pybind11::arg("stream"));
		cl.def("check", (bool (Pythia8::HadronWidths::*)()) &Pythia8::HadronWidths::check, "C++: Pythia8::HadronWidths::check() --> bool");
		cl.def("getResonances", (class std::vector<int, class std::allocator<int> > (Pythia8::HadronWidths::*)() const) &Pythia8::HadronWidths::getResonances, "C++: Pythia8::HadronWidths::getResonances() const --> class std::vector<int, class std::allocator<int> >");
		cl.def("hasResonances", (bool (Pythia8::HadronWidths::*)(int, int) const) &Pythia8::HadronWidths::hasResonances, "C++: Pythia8::HadronWidths::hasResonances(int, int) const --> bool", pybind11::arg("idA"), pybind11::arg("idB"));
		cl.def("possibleResonances", (class std::vector<int, class std::allocator<int> > (Pythia8::HadronWidths::*)(int, int) const) &Pythia8::HadronWidths::possibleResonances, "C++: Pythia8::HadronWidths::possibleResonances(int, int) const --> class std::vector<int, class std::allocator<int> >", pybind11::arg("idA"), pybind11::arg("idB"));
		cl.def("hasData", (bool (Pythia8::HadronWidths::*)(int) const) &Pythia8::HadronWidths::hasData, "C++: Pythia8::HadronWidths::hasData(int) const --> bool", pybind11::arg("id"));
		cl.def("canDecay", (bool (Pythia8::HadronWidths::*)(int, int, int) const) &Pythia8::HadronWidths::canDecay, "C++: Pythia8::HadronWidths::canDecay(int, int, int) const --> bool", pybind11::arg("id"), pybind11::arg("prodA"), pybind11::arg("prodB"));
		cl.def("width", (double (Pythia8::HadronWidths::*)(int, double) const) &Pythia8::HadronWidths::width, "C++: Pythia8::HadronWidths::width(int, double) const --> double", pybind11::arg("id"), pybind11::arg("m"));
		cl.def("partialWidth", (double (Pythia8::HadronWidths::*)(int, int, int, double) const) &Pythia8::HadronWidths::partialWidth, "C++: Pythia8::HadronWidths::partialWidth(int, int, int, double) const --> double", pybind11::arg("idR"), pybind11::arg("prodA"), pybind11::arg("prodB"), pybind11::arg("m"));
		cl.def("br", (double (Pythia8::HadronWidths::*)(int, int, int, double) const) &Pythia8::HadronWidths::br, "C++: Pythia8::HadronWidths::br(int, int, int, double) const --> double", pybind11::arg("idR"), pybind11::arg("prodA"), pybind11::arg("prodB"), pybind11::arg("m"));
		cl.def("mDistr", (double (Pythia8::HadronWidths::*)(int, double) const) &Pythia8::HadronWidths::mDistr, "C++: Pythia8::HadronWidths::mDistr(int, double) const --> double", pybind11::arg("id"), pybind11::arg("m"));
		cl.def("pickMasses", [](Pythia8::HadronWidths &o, int const & a0, int const & a1, double const & a2, double & a3, double & a4) -> bool { return o.pickMasses(a0, a1, a2, a3, a4); }, "", pybind11::arg("idA"), pybind11::arg("idB"), pybind11::arg("eCM"), pybind11::arg("mAOut"), pybind11::arg("mBOut"));
		cl.def("pickMasses", (bool (Pythia8::HadronWidths::*)(int, int, double, double &, double &, int)) &Pythia8::HadronWidths::pickMasses, "C++: Pythia8::HadronWidths::pickMasses(int, int, double, double &, double &, int) --> bool", pybind11::arg("idA"), pybind11::arg("idB"), pybind11::arg("eCM"), pybind11::arg("mAOut"), pybind11::arg("mBOut"), pybind11::arg("lType"));
		cl.def("pickDecay", (bool (Pythia8::HadronWidths::*)(int, double, int &, int &, double &, double &)) &Pythia8::HadronWidths::pickDecay, "C++: Pythia8::HadronWidths::pickDecay(int, double, int &, int &, double &, double &) --> bool", pybind11::arg("idDec"), pybind11::arg("m"), pybind11::arg("idAOut"), pybind11::arg("idBOut"), pybind11::arg("mAOut"), pybind11::arg("mBOut"));
		cl.def("widthCalc", (double (Pythia8::HadronWidths::*)(int, double) const) &Pythia8::HadronWidths::widthCalc, "C++: Pythia8::HadronWidths::widthCalc(int, double) const --> double", pybind11::arg("id"), pybind11::arg("m"));
		cl.def("widthCalc", (double (Pythia8::HadronWidths::*)(int, int, int, double) const) &Pythia8::HadronWidths::widthCalc, "C++: Pythia8::HadronWidths::widthCalc(int, int, int, double) const --> double", pybind11::arg("id"), pybind11::arg("prodA"), pybind11::arg("prodB"), pybind11::arg("m"));
		cl.def("parameterize", (bool (Pythia8::HadronWidths::*)(int, int)) &Pythia8::HadronWidths::parameterize, "C++: Pythia8::HadronWidths::parameterize(int, int) --> bool", pybind11::arg("id"), pybind11::arg("precision"));
		cl.def("parameterizeAll", (void (Pythia8::HadronWidths::*)(int)) &Pythia8::HadronWidths::parameterizeAll, "C++: Pythia8::HadronWidths::parameterizeAll(int) --> void", pybind11::arg("precision"));
		cl.def("save", (bool (Pythia8::HadronWidths::*)(std::ostream &) const) &Pythia8::HadronWidths::save, "C++: Pythia8::HadronWidths::save(std::ostream &) const --> bool", pybind11::arg("stream"));
		cl.def("save", [](Pythia8::HadronWidths const &o) -> bool { return o.save(); }, "");
		cl.def("save", (bool (Pythia8::HadronWidths::*)(std::string) const) &Pythia8::HadronWidths::save, "C++: Pythia8::HadronWidths::save(std::string) const --> bool", pybind11::arg("file"));
		cl.def("assign", (class Pythia8::HadronWidths & (Pythia8::HadronWidths::*)(const class Pythia8::HadronWidths &)) &Pythia8::HadronWidths::operator=, "C++: Pythia8::HadronWidths::operator=(const class Pythia8::HadronWidths &) --> class Pythia8::HadronWidths &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::MiniStringFragmentation file:Pythia8/MiniStringFragmentation.h line:30
		pybind11::class_<Pythia8::MiniStringFragmentation, std::shared_ptr<Pythia8::MiniStringFragmentation>, PyCallBack_Pythia8_MiniStringFragmentation, Pythia8::PhysicsBase> cl(M("Pythia8"), "MiniStringFragmentation", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::MiniStringFragmentation(); }, [](){ return new PyCallBack_Pythia8_MiniStringFragmentation(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_MiniStringFragmentation const &o){ return new PyCallBack_Pythia8_MiniStringFragmentation(o); } ) );
		cl.def( pybind11::init( [](Pythia8::MiniStringFragmentation const &o){ return new Pythia8::MiniStringFragmentation(o); } ) );
		cl.def("init", (void (Pythia8::MiniStringFragmentation::*)(class Pythia8::StringFlav *, class Pythia8::StringPT *, class Pythia8::StringZ *)) &Pythia8::MiniStringFragmentation::init, "C++: Pythia8::MiniStringFragmentation::init(class Pythia8::StringFlav *, class Pythia8::StringPT *, class Pythia8::StringZ *) --> void", pybind11::arg("flavSelPtrIn"), pybind11::arg("pTSelPtrIn"), pybind11::arg("zSelPtrIn"));
		cl.def("fragment", [](Pythia8::MiniStringFragmentation &o, int const & a0, class Pythia8::ColConfig & a1, class Pythia8::Event & a2) -> bool { return o.fragment(a0, a1, a2); }, "", pybind11::arg("iSub"), pybind11::arg("colConfig"), pybind11::arg("event"));
		cl.def("fragment", [](Pythia8::MiniStringFragmentation &o, int const & a0, class Pythia8::ColConfig & a1, class Pythia8::Event & a2, bool const & a3) -> bool { return o.fragment(a0, a1, a2, a3); }, "", pybind11::arg("iSub"), pybind11::arg("colConfig"), pybind11::arg("event"), pybind11::arg("isDiff"));
		cl.def("fragment", (bool (Pythia8::MiniStringFragmentation::*)(int, class Pythia8::ColConfig &, class Pythia8::Event &, bool, bool)) &Pythia8::MiniStringFragmentation::fragment, "C++: Pythia8::MiniStringFragmentation::fragment(int, class Pythia8::ColConfig &, class Pythia8::Event &, bool, bool) --> bool", pybind11::arg("iSub"), pybind11::arg("colConfig"), pybind11::arg("event"), pybind11::arg("isDiff"), pybind11::arg("systemRecoil"));
		cl.def("assign", (class Pythia8::MiniStringFragmentation & (Pythia8::MiniStringFragmentation::*)(const class Pythia8::MiniStringFragmentation &)) &Pythia8::MiniStringFragmentation::operator=, "C++: Pythia8::MiniStringFragmentation::operator=(const class Pythia8::MiniStringFragmentation &) --> class Pythia8::MiniStringFragmentation &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::StringInteractions file:Pythia8/StringInteractions.h line:28
		pybind11::class_<Pythia8::StringInteractions, std::shared_ptr<Pythia8::StringInteractions>, PyCallBack_Pythia8_StringInteractions, Pythia8::PhysicsBase> cl(M("Pythia8"), "StringInteractions", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::StringInteractions(); }, [](){ return new PyCallBack_Pythia8_StringInteractions(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_StringInteractions const &o){ return new PyCallBack_Pythia8_StringInteractions(o); } ) );
		cl.def( pybind11::init( [](Pythia8::StringInteractions const &o){ return new Pythia8::StringInteractions(o); } ) );
		cl.def_readwrite("colrecPtr", &Pythia8::StringInteractions::colrecPtr);
		cl.def_readwrite("dipswingPtr", &Pythia8::StringInteractions::dipswingPtr);
		cl.def_readwrite("stringrepPtr", &Pythia8::StringInteractions::stringrepPtr);
		cl.def_readwrite("fragmodPtr", &Pythia8::StringInteractions::fragmodPtr);
		cl.def("init", (bool (Pythia8::StringInteractions::*)()) &Pythia8::StringInteractions::init, "C++: Pythia8::StringInteractions::init() --> bool");
		cl.def("getColourReconnections", (class std::shared_ptr<class Pythia8::ColourReconnectionBase> (Pythia8::StringInteractions::*)() const) &Pythia8::StringInteractions::getColourReconnections, "C++: Pythia8::StringInteractions::getColourReconnections() const --> class std::shared_ptr<class Pythia8::ColourReconnectionBase>");
		cl.def("getDipoleSwing", (class std::shared_ptr<class Pythia8::DipoleSwingBase> (Pythia8::StringInteractions::*)() const) &Pythia8::StringInteractions::getDipoleSwing, "C++: Pythia8::StringInteractions::getDipoleSwing() const --> class std::shared_ptr<class Pythia8::DipoleSwingBase>");
		cl.def("getStringRepulsion", (class std::shared_ptr<class Pythia8::StringRepulsionBase> (Pythia8::StringInteractions::*)() const) &Pythia8::StringInteractions::getStringRepulsion, "C++: Pythia8::StringInteractions::getStringRepulsion() const --> class std::shared_ptr<class Pythia8::StringRepulsionBase>");
		cl.def("getFragmentationModifier", (class std::shared_ptr<class Pythia8::FragmentationModifierBase> (Pythia8::StringInteractions::*)() const) &Pythia8::StringInteractions::getFragmentationModifier, "C++: Pythia8::StringInteractions::getFragmentationModifier() const --> class std::shared_ptr<class Pythia8::FragmentationModifierBase>");
		cl.def("assign", (class Pythia8::StringInteractions & (Pythia8::StringInteractions::*)(const class Pythia8::StringInteractions &)) &Pythia8::StringInteractions::operator=, "C++: Pythia8::StringInteractions::operator=(const class Pythia8::StringInteractions &) --> class Pythia8::StringInteractions &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ColourReconnectionBase file:Pythia8/StringInteractions.h line:78
		pybind11::class_<Pythia8::ColourReconnectionBase, std::shared_ptr<Pythia8::ColourReconnectionBase>, PyCallBack_Pythia8_ColourReconnectionBase, Pythia8::PhysicsBase> cl(M("Pythia8"), "ColourReconnectionBase", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new PyCallBack_Pythia8_ColourReconnectionBase(); } ) );
		cl.def(pybind11::init<PyCallBack_Pythia8_ColourReconnectionBase const &>());
		cl.def("init", (bool (Pythia8::ColourReconnectionBase::*)()) &Pythia8::ColourReconnectionBase::init, "C++: Pythia8::ColourReconnectionBase::init() --> bool");
		cl.def("reassignBeamPtrs", (void (Pythia8::ColourReconnectionBase::*)(class Pythia8::BeamParticle *, class Pythia8::BeamParticle *)) &Pythia8::ColourReconnectionBase::reassignBeamPtrs, "C++: Pythia8::ColourReconnectionBase::reassignBeamPtrs(class Pythia8::BeamParticle *, class Pythia8::BeamParticle *) --> void", pybind11::arg("beamAPtrIn"), pybind11::arg("beamBPtrIn"));
		cl.def("next", (bool (Pythia8::ColourReconnectionBase::*)(class Pythia8::Event &, int)) &Pythia8::ColourReconnectionBase::next, "C++: Pythia8::ColourReconnectionBase::next(class Pythia8::Event &, int) --> bool", pybind11::arg("event"), pybind11::arg("oldSize"));
		cl.def("assign", (class Pythia8::ColourReconnectionBase & (Pythia8::ColourReconnectionBase::*)(const class Pythia8::ColourReconnectionBase &)) &Pythia8::ColourReconnectionBase::operator=, "C++: Pythia8::ColourReconnectionBase::operator=(const class Pythia8::ColourReconnectionBase &) --> class Pythia8::ColourReconnectionBase &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}

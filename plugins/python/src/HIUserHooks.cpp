#include <Pythia8/Basics.h>
#include <Pythia8/Event.h>
#include <Pythia8/HIUserHooks.h>
#include <Pythia8/Info.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/ResonanceWidths.h>
#include <Pythia8/Settings.h>
#include <Pythia8/SigmaTotal.h>
#include <functional>
#include <istream>
#include <iterator>
#include <map>
#include <memory>
#include <ostream>
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

// Pythia8::NucleusModel file:Pythia8/HIUserHooks.h line:245
struct PyCallBack_Pythia8_NucleusModel : public Pythia8::NucleusModel {
	using Pythia8::NucleusModel::NucleusModel;

	bool init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::NucleusModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return NucleusModel::init();
	}
	class Pythia8::Particle produceIon(bool a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::NucleusModel *>(this), "produceIon");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Particle>::value) {
				static pybind11::detail::overload_caster_t<class Pythia8::Particle> caster;
				return pybind11::detail::cast_ref<class Pythia8::Particle>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class Pythia8::Particle>(std::move(o));
		}
		return NucleusModel::produceIon(a0);
	}
	using _binder_ret_0 = class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> >;
	_binder_ret_0 generate() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::NucleusModel *>(this), "generate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_0>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_0> caster;
				return pybind11::detail::cast_ref<_binder_ret_0>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_0>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"NucleusModel::generate\"");
	}
};

// Pythia8::WoodsSaxonModel file:Pythia8/HIUserHooks.h line:299
struct PyCallBack_Pythia8_WoodsSaxonModel : public Pythia8::WoodsSaxonModel {
	using Pythia8::WoodsSaxonModel::WoodsSaxonModel;

	bool init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WoodsSaxonModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return WoodsSaxonModel::init();
	}
	class Pythia8::Particle produceIon(bool a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WoodsSaxonModel *>(this), "produceIon");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Particle>::value) {
				static pybind11::detail::overload_caster_t<class Pythia8::Particle> caster;
				return pybind11::detail::cast_ref<class Pythia8::Particle>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class Pythia8::Particle>(std::move(o));
		}
		return NucleusModel::produceIon(a0);
	}
	using _binder_ret_0 = class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> >;
	_binder_ret_0 generate() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WoodsSaxonModel *>(this), "generate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_0>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_0> caster;
				return pybind11::detail::cast_ref<_binder_ret_0>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_0>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"NucleusModel::generate\"");
	}
};

// Pythia8::GLISSANDOModel file:Pythia8/HIUserHooks.h line:351
struct PyCallBack_Pythia8_GLISSANDOModel : public Pythia8::GLISSANDOModel {
	using Pythia8::GLISSANDOModel::GLISSANDOModel;

	bool init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GLISSANDOModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return GLISSANDOModel::init();
	}
	using _binder_ret_0 = class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> >;
	_binder_ret_0 generate() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GLISSANDOModel *>(this), "generate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_0>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_0> caster;
				return pybind11::detail::cast_ref<_binder_ret_0>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_0>(std::move(o));
		}
		return GLISSANDOModel::generate();
	}
	class Pythia8::Particle produceIon(bool a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GLISSANDOModel *>(this), "produceIon");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Particle>::value) {
				static pybind11::detail::overload_caster_t<class Pythia8::Particle> caster;
				return pybind11::detail::cast_ref<class Pythia8::Particle>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class Pythia8::Particle>(std::move(o));
		}
		return NucleusModel::produceIon(a0);
	}
};

// Pythia8::ImpactParameterGenerator file:Pythia8/HIUserHooks.h line:394
struct PyCallBack_Pythia8_ImpactParameterGenerator : public Pythia8::ImpactParameterGenerator {
	using Pythia8::ImpactParameterGenerator::ImpactParameterGenerator;

	bool init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ImpactParameterGenerator *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return ImpactParameterGenerator::init();
	}
	class Pythia8::Vec4 generate(double & a0) const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ImpactParameterGenerator *>(this), "generate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Vec4>::value) {
				static pybind11::detail::overload_caster_t<class Pythia8::Vec4> caster;
				return pybind11::detail::cast_ref<class Pythia8::Vec4>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class Pythia8::Vec4>(std::move(o));
		}
		return ImpactParameterGenerator::generate(a0);
	}
};

void bind_Pythia8_HIUserHooks(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::Nucleon file:Pythia8/HIUserHooks.h line:62
		pybind11::class_<Pythia8::Nucleon, std::shared_ptr<Pythia8::Nucleon>> cl(M("Pythia8"), "Nucleon", "The Nucleon class represent a nucleon in a nucleus. It has an id\n number (proton or neutron) an impact parameter position (absolute\n and relative to the nucleus center), a status and a state to be\n defined and used by a SubCollisionModel.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::Nucleon(); } ), "doc" );
		cl.def( pybind11::init( [](int const & a0){ return new Pythia8::Nucleon(a0); } ), "doc" , pybind11::arg("idIn"));
		cl.def( pybind11::init( [](int const & a0, int const & a1){ return new Pythia8::Nucleon(a0, a1); } ), "doc" , pybind11::arg("idIn"), pybind11::arg("indexIn"));
		cl.def( pybind11::init<int, int, const class Pythia8::Vec4 &>(), pybind11::arg("idIn"), pybind11::arg("indexIn"), pybind11::arg("pos") );


		pybind11::enum_<Pythia8::Nucleon::Status>(cl, "Status", pybind11::arithmetic(), "Enum for specifying the status of a nucleon.")
			.value("UNWOUNDED", Pythia8::Nucleon::Status::UNWOUNDED)
			.value("ELASTIC", Pythia8::Nucleon::Status::ELASTIC)
			.value("DIFF", Pythia8::Nucleon::Status::DIFF)
			.value("ABS", Pythia8::Nucleon::Status::ABS)
			.export_values();

		cl.def("id", (int (Pythia8::Nucleon::*)() const) &Pythia8::Nucleon::id, "The nucleon type.\n\nC++: Pythia8::Nucleon::id() const --> int");
		cl.def("index", (int (Pythia8::Nucleon::*)() const) &Pythia8::Nucleon::index, "The nucleon type.\n\nC++: Pythia8::Nucleon::index() const --> int");
		cl.def("nPos", (const class Pythia8::Vec4 & (Pythia8::Nucleon::*)() const) &Pythia8::Nucleon::nPos, "The position of this nucleon relative to the nucleus center.\n\nC++: Pythia8::Nucleon::nPos() const --> const class Pythia8::Vec4 &", pybind11::return_value_policy::reference);
		cl.def("bPos", (const class Pythia8::Vec4 & (Pythia8::Nucleon::*)() const) &Pythia8::Nucleon::bPos, "The absolute position in impact parameter space.\n\nC++: Pythia8::Nucleon::bPos() const --> const class Pythia8::Vec4 &", pybind11::return_value_policy::reference);
		cl.def("bShift", (const class Pythia8::Vec4 & (Pythia8::Nucleon::*)(const class Pythia8::Vec4 &)) &Pythia8::Nucleon::bShift, "Shift the absolute position in impact parameter space.\n\nC++: Pythia8::Nucleon::bShift(const class Pythia8::Vec4 &) --> const class Pythia8::Vec4 &", pybind11::return_value_policy::reference, pybind11::arg("bvec"));
		cl.def("status", (enum Pythia8::Nucleon::Status (Pythia8::Nucleon::*)() const) &Pythia8::Nucleon::status, "The status.\n\nC++: Pythia8::Nucleon::status() const --> enum Pythia8::Nucleon::Status");
		cl.def("done", (bool (Pythia8::Nucleon::*)() const) &Pythia8::Nucleon::done, "Check if nucleon has been assigned.\n\nC++: Pythia8::Nucleon::done() const --> bool");
		cl.def("event", (class Pythia8::EventInfo * (Pythia8::Nucleon::*)() const) &Pythia8::Nucleon::event, "The event this nucleon is assigned to.\n\nC++: Pythia8::Nucleon::event() const --> class Pythia8::EventInfo *", pybind11::return_value_policy::automatic);
		cl.def("state", (const class std::vector<double, class std::allocator<double> > & (Pythia8::Nucleon::*)() const) &Pythia8::Nucleon::state, "The physical state of the incoming nucleon.\n\nC++: Pythia8::Nucleon::state() const --> const class std::vector<double, class std::allocator<double> > &", pybind11::return_value_policy::reference);
		cl.def("altState", [](Pythia8::Nucleon &o) -> const std::vector<double, class std::allocator<double> > & { return o.altState(); }, "", pybind11::return_value_policy::reference);
		cl.def("altState", (const class std::vector<double, class std::allocator<double> > & (Pythia8::Nucleon::*)(int)) &Pythia8::Nucleon::altState, "Return an alternative state.\n\nC++: Pythia8::Nucleon::altState(int) --> const class std::vector<double, class std::allocator<double> > &", pybind11::return_value_policy::reference, pybind11::arg("i"));
		cl.def("status", (void (Pythia8::Nucleon::*)(enum Pythia8::Nucleon::Status)) &Pythia8::Nucleon::status, "Set the status.\n\nC++: Pythia8::Nucleon::status(enum Pythia8::Nucleon::Status) --> void", pybind11::arg("s"));
		cl.def("state", (void (Pythia8::Nucleon::*)(class std::vector<double, class std::allocator<double> >)) &Pythia8::Nucleon::state, "Set the physical state.\n\nC++: Pythia8::Nucleon::state(class std::vector<double, class std::allocator<double> >) --> void", pybind11::arg("s"));
		cl.def("addAltState", (void (Pythia8::Nucleon::*)(class std::vector<double, class std::allocator<double> >)) &Pythia8::Nucleon::addAltState, "Add an alternative state.\n\nC++: Pythia8::Nucleon::addAltState(class std::vector<double, class std::allocator<double> >) --> void", pybind11::arg("s"));
		cl.def("select", (void (Pythia8::Nucleon::*)(class Pythia8::EventInfo &, enum Pythia8::Nucleon::Status)) &Pythia8::Nucleon::select, "Select an event for this nucleon.\n\nC++: Pythia8::Nucleon::select(class Pythia8::EventInfo &, enum Pythia8::Nucleon::Status) --> void", pybind11::arg("evp"), pybind11::arg("s"));
		cl.def("select", (void (Pythia8::Nucleon::*)()) &Pythia8::Nucleon::select, "Select this nucleon to be assigned to an event.\n\nC++: Pythia8::Nucleon::select() --> void");
		cl.def("debug", (void (Pythia8::Nucleon::*)()) &Pythia8::Nucleon::debug, "Print out debugging information.\n\nC++: Pythia8::Nucleon::debug() --> void");
	}
	{ // Pythia8::SubCollision file:Pythia8/HIUserHooks.h line:190
		pybind11::class_<Pythia8::SubCollision, std::shared_ptr<Pythia8::SubCollision>> cl(M("Pythia8"), "SubCollision", "SubCollision represents a possible collision between a projectile\n and a target Nucleon.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<class Pythia8::Nucleon &, class Pythia8::Nucleon &, double, double, enum Pythia8::SubCollision::Type>(), pybind11::arg("projIn"), pybind11::arg("targIn"), pybind11::arg("bIn"), pybind11::arg("bpIn"), pybind11::arg("typeIn") );

		cl.def( pybind11::init( [](){ return new Pythia8::SubCollision(); } ) );
		cl.def( pybind11::init( [](Pythia8::SubCollision const &o){ return new Pythia8::SubCollision(o); } ) );

		pybind11::enum_<Pythia8::SubCollision::Type>(cl, "Type", pybind11::arithmetic(), "This defines the type of a bunary nucleon collison.")
			.value("NONE", Pythia8::SubCollision::Type::NONE)
			.value("ELASTIC", Pythia8::SubCollision::Type::ELASTIC)
			.value("SDEP", Pythia8::SubCollision::Type::SDEP)
			.value("SDET", Pythia8::SubCollision::Type::SDET)
			.value("DDE", Pythia8::SubCollision::Type::DDE)
			.value("CDE", Pythia8::SubCollision::Type::CDE)
			.value("ABS", Pythia8::SubCollision::Type::ABS)
			.export_values();

		cl.def_readwrite("b", &Pythia8::SubCollision::b);
		cl.def_readwrite("bp", &Pythia8::SubCollision::bp);
		cl.def_readwrite("type", &Pythia8::SubCollision::type);
		cl.def("nucleons", (int (Pythia8::SubCollision::*)() const) &Pythia8::SubCollision::nucleons, "C++: Pythia8::SubCollision::nucleons() const --> int");
		cl.def("assign", (class Pythia8::SubCollision & (Pythia8::SubCollision::*)(const class Pythia8::SubCollision &)) &Pythia8::SubCollision::operator=, "C++: Pythia8::SubCollision::operator=(const class Pythia8::SubCollision &) --> class Pythia8::SubCollision &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::NucleusModel file:Pythia8/HIUserHooks.h line:245
		pybind11::class_<Pythia8::NucleusModel, std::shared_ptr<Pythia8::NucleusModel>, PyCallBack_Pythia8_NucleusModel> cl(M("Pythia8"), "NucleusModel", "This class generates the impact parameter distribution of nucleons\n in a nucleus.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new PyCallBack_Pythia8_NucleusModel(); } ) );
		cl.def(pybind11::init<PyCallBack_Pythia8_NucleusModel const &>());
		cl.def_readwrite("idSave", &Pythia8::NucleusModel::idSave);
		cl.def_readwrite("ISave", &Pythia8::NucleusModel::ISave);
		cl.def_readwrite("ASave", &Pythia8::NucleusModel::ASave);
		cl.def_readwrite("ZSave", &Pythia8::NucleusModel::ZSave);
		cl.def_readwrite("LSave", &Pythia8::NucleusModel::LSave);
		cl.def_readwrite("RSave", &Pythia8::NucleusModel::RSave);
		cl.def("initPtr", (void (Pythia8::NucleusModel::*)(int, class Pythia8::Settings &, class Pythia8::ParticleData &, class Pythia8::Rndm &)) &Pythia8::NucleusModel::initPtr, "Init method.\n\nC++: Pythia8::NucleusModel::initPtr(int, class Pythia8::Settings &, class Pythia8::ParticleData &, class Pythia8::Rndm &) --> void", pybind11::arg("idIn"), pybind11::arg("settingsIn"), pybind11::arg("particleDataIn"), pybind11::arg("rndIn"));
		cl.def("init", (bool (Pythia8::NucleusModel::*)()) &Pythia8::NucleusModel::init, "C++: Pythia8::NucleusModel::init() --> bool");
		cl.def("produceIon", (class Pythia8::Particle (Pythia8::NucleusModel::*)(bool)) &Pythia8::NucleusModel::produceIon, "C++: Pythia8::NucleusModel::produceIon(bool) --> class Pythia8::Particle", pybind11::arg("istarg"));
		cl.def("generate", (class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > (Pythia8::NucleusModel::*)() const) &Pythia8::NucleusModel::generate, "Generate a vector of nucleons according to the implemented model\n for a nucleus given by the PDG number.\n\nC++: Pythia8::NucleusModel::generate() const --> class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> >");
		cl.def("id", (int (Pythia8::NucleusModel::*)() const) &Pythia8::NucleusModel::id, "Accessor functions.\n\nC++: Pythia8::NucleusModel::id() const --> int");
		cl.def("I", (int (Pythia8::NucleusModel::*)() const) &Pythia8::NucleusModel::I, "C++: Pythia8::NucleusModel::I() const --> int");
		cl.def("A", (int (Pythia8::NucleusModel::*)() const) &Pythia8::NucleusModel::A, "C++: Pythia8::NucleusModel::A() const --> int");
		cl.def("Z", (int (Pythia8::NucleusModel::*)() const) &Pythia8::NucleusModel::Z, "C++: Pythia8::NucleusModel::Z() const --> int");
		cl.def("L", (int (Pythia8::NucleusModel::*)() const) &Pythia8::NucleusModel::L, "C++: Pythia8::NucleusModel::L() const --> int");
		cl.def("R", (double (Pythia8::NucleusModel::*)() const) &Pythia8::NucleusModel::R, "C++: Pythia8::NucleusModel::R() const --> double");
		cl.def("assign", (class Pythia8::NucleusModel & (Pythia8::NucleusModel::*)(const class Pythia8::NucleusModel &)) &Pythia8::NucleusModel::operator=, "C++: Pythia8::NucleusModel::operator=(const class Pythia8::NucleusModel &) --> class Pythia8::NucleusModel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::WoodsSaxonModel file:Pythia8/HIUserHooks.h line:299
		pybind11::class_<Pythia8::WoodsSaxonModel, std::shared_ptr<Pythia8::WoodsSaxonModel>, PyCallBack_Pythia8_WoodsSaxonModel, Pythia8::NucleusModel> cl(M("Pythia8"), "WoodsSaxonModel", "A general Woods-Saxon distributed nucleus.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new PyCallBack_Pythia8_WoodsSaxonModel(); } ) );
		cl.def(pybind11::init<PyCallBack_Pythia8_WoodsSaxonModel const &>());
		cl.def_readwrite("aSave", &Pythia8::WoodsSaxonModel::aSave);
		cl.def("a", (double (Pythia8::WoodsSaxonModel::*)() const) &Pythia8::WoodsSaxonModel::a, "Accessor functions:\n\nC++: Pythia8::WoodsSaxonModel::a() const --> double");
		cl.def("generateNucleon", (class Pythia8::Vec4 (Pythia8::WoodsSaxonModel::*)() const) &Pythia8::WoodsSaxonModel::generateNucleon, "Generate the position of a single nucleon. (The time component\n is always zero).\n\nC++: Pythia8::WoodsSaxonModel::generateNucleon() const --> class Pythia8::Vec4");
		cl.def("init", (bool (Pythia8::WoodsSaxonModel::*)()) &Pythia8::WoodsSaxonModel::init, "Setup the generation with a given nucleus radius, R, and a \"skin\n width\", a (both length in femtometers).\n\nC++: Pythia8::WoodsSaxonModel::init() --> bool");
		cl.def("assign", (class Pythia8::WoodsSaxonModel & (Pythia8::WoodsSaxonModel::*)(const class Pythia8::WoodsSaxonModel &)) &Pythia8::WoodsSaxonModel::operator=, "C++: Pythia8::WoodsSaxonModel::operator=(const class Pythia8::WoodsSaxonModel &) --> class Pythia8::WoodsSaxonModel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::GLISSANDOModel file:Pythia8/HIUserHooks.h line:351
		pybind11::class_<Pythia8::GLISSANDOModel, std::shared_ptr<Pythia8::GLISSANDOModel>, PyCallBack_Pythia8_GLISSANDOModel, Pythia8::WoodsSaxonModel> cl(M("Pythia8"), "GLISSANDOModel", "The GLISSANDOModel has a specific parameteraization of a\n Wood-Saxon potential for A>16 and is described in asXiv:1310.5475\n [nucl-th].");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::GLISSANDOModel(); }, [](){ return new PyCallBack_Pythia8_GLISSANDOModel(); } ) );
		cl.def("init", (bool (Pythia8::GLISSANDOModel::*)()) &Pythia8::GLISSANDOModel::init, "Initialize.\n\nC++: Pythia8::GLISSANDOModel::init() --> bool");
		cl.def("generate", (class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > (Pythia8::GLISSANDOModel::*)() const) &Pythia8::GLISSANDOModel::generate, "Generate a vector of nucleons according to the implemented model\n for a nucleus given by the PDG number.\n\nC++: Pythia8::GLISSANDOModel::generate() const --> class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> >");
		cl.def("Rh", (double (Pythia8::GLISSANDOModel::*)() const) &Pythia8::GLISSANDOModel::Rh, "Accessor functions.\n\nC++: Pythia8::GLISSANDOModel::Rh() const --> double");
		cl.def("RhGauss", (double (Pythia8::GLISSANDOModel::*)() const) &Pythia8::GLISSANDOModel::RhGauss, "C++: Pythia8::GLISSANDOModel::RhGauss() const --> double");
		cl.def("assign", (class Pythia8::GLISSANDOModel & (Pythia8::GLISSANDOModel::*)(const class Pythia8::GLISSANDOModel &)) &Pythia8::GLISSANDOModel::operator=, "C++: Pythia8::GLISSANDOModel::operator=(const class Pythia8::GLISSANDOModel &) --> class Pythia8::GLISSANDOModel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ImpactParameterGenerator file:Pythia8/HIUserHooks.h line:394
		pybind11::class_<Pythia8::ImpactParameterGenerator, std::shared_ptr<Pythia8::ImpactParameterGenerator>, PyCallBack_Pythia8_ImpactParameterGenerator> cl(M("Pythia8"), "ImpactParameterGenerator", "ImpactParameterGenerator is able to generate a specific impact\n parameter together with a weight such that aweighted average over\n any quantity X(b) corresponds to the infinite integral over d^2b\n X(b). This base class gives a Gaussian profile, d^2b exp(-b^2/2w^2).");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::ImpactParameterGenerator(); }, [](){ return new PyCallBack_Pythia8_ImpactParameterGenerator(); } ) );
		cl.def("init", (bool (Pythia8::ImpactParameterGenerator::*)()) &Pythia8::ImpactParameterGenerator::init, "Virtual init method.\n\nC++: Pythia8::ImpactParameterGenerator::init() --> bool");
		cl.def("initPtr", (void (Pythia8::ImpactParameterGenerator::*)(class Pythia8::SubCollisionModel &, class Pythia8::NucleusModel &, class Pythia8::NucleusModel &, class Pythia8::Settings &, class Pythia8::Rndm &)) &Pythia8::ImpactParameterGenerator::initPtr, "C++: Pythia8::ImpactParameterGenerator::initPtr(class Pythia8::SubCollisionModel &, class Pythia8::NucleusModel &, class Pythia8::NucleusModel &, class Pythia8::Settings &, class Pythia8::Rndm &) --> void", pybind11::arg("collIn"), pybind11::arg("projIn"), pybind11::arg("targIn"), pybind11::arg("settingsIn"), pybind11::arg("rndIn"));
		cl.def("generate", (class Pythia8::Vec4 (Pythia8::ImpactParameterGenerator::*)(double &) const) &Pythia8::ImpactParameterGenerator::generate, "Return a new impact parameter and set the corresponding weight\n provided.\n\nC++: Pythia8::ImpactParameterGenerator::generate(double &) const --> class Pythia8::Vec4", pybind11::arg("weight"));
		cl.def("width", (void (Pythia8::ImpactParameterGenerator::*)(double)) &Pythia8::ImpactParameterGenerator::width, "Set the width (in femtometers).\n\nC++: Pythia8::ImpactParameterGenerator::width(double) --> void", pybind11::arg("widthIn"));
		cl.def("width", (double (Pythia8::ImpactParameterGenerator::*)() const) &Pythia8::ImpactParameterGenerator::width, "Get the width.\n\nC++: Pythia8::ImpactParameterGenerator::width() const --> double");
		cl.def("assign", (class Pythia8::ImpactParameterGenerator & (Pythia8::ImpactParameterGenerator::*)(const class Pythia8::ImpactParameterGenerator &)) &Pythia8::ImpactParameterGenerator::operator=, "C++: Pythia8::ImpactParameterGenerator::operator=(const class Pythia8::ImpactParameterGenerator &) --> class Pythia8::ImpactParameterGenerator &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}

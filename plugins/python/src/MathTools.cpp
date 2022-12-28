#include <Pythia8/Basics.h>
#include <Pythia8/BeamParticle.h>
#include <Pythia8/FragmentationFlavZpT.h>
#include <Pythia8/HadronWidths.h>
#include <Pythia8/Info.h>
#include <Pythia8/LHEF3.h>
#include <Pythia8/MathTools.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/PartonSystems.h>
#include <Pythia8/PhysicsBase.h>
#include <Pythia8/Settings.h>
#include <Pythia8/SigmaLowEnergy.h>
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

// Pythia8::PhysicsBase file:Pythia8/PhysicsBase.h line:27
struct PyCallBack_Pythia8_PhysicsBase : public Pythia8::PhysicsBase {
	using Pythia8::PhysicsBase::PhysicsBase;

	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PhysicsBase *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PhysicsBase *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PhysicsBase *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::PhysicsBase *>(this), "onStat");
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

// Pythia8::StringFlav file:Pythia8/FragmentationFlavZpT.h line:84
struct PyCallBack_Pythia8_StringFlav : public Pythia8::StringFlav {
	using Pythia8::StringFlav::StringFlav;

	void init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StringFlav::init();
	}
	class Pythia8::FlavContainer pick(class Pythia8::FlavContainer & a0, double a1, double a2, bool a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "pick");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::FlavContainer>::value) {
				static pybind11::detail::overload_caster_t<class Pythia8::FlavContainer> caster;
				return pybind11::detail::cast_ref<class Pythia8::FlavContainer>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class Pythia8::FlavContainer>(std::move(o));
		}
		return StringFlav::pick(a0, a1, a2, a3);
	}
	class Pythia8::FlavContainer pickGauss(class Pythia8::FlavContainer & a0, bool a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "pickGauss");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::FlavContainer>::value) {
				static pybind11::detail::overload_caster_t<class Pythia8::FlavContainer> caster;
				return pybind11::detail::cast_ref<class Pythia8::FlavContainer>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class Pythia8::FlavContainer>(std::move(o));
		}
		return StringFlav::pickGauss(a0, a1);
	}
	class Pythia8::FlavContainer pickThermal(class Pythia8::FlavContainer & a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "pickThermal");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::FlavContainer>::value) {
				static pybind11::detail::overload_caster_t<class Pythia8::FlavContainer> caster;
				return pybind11::detail::cast_ref<class Pythia8::FlavContainer>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class Pythia8::FlavContainer>(std::move(o));
		}
		return StringFlav::pickThermal(a0, a1, a2);
	}
	int combine(class Pythia8::FlavContainer & a0, class Pythia8::FlavContainer & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "combine");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return StringFlav::combine(a0, a1);
	}
	int combineId(int a0, int a1, bool a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "combineId");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return StringFlav::combineId(a0, a1, a2);
	}
	int combineToLightest(int a0, int a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "combineToLightest");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return StringFlav::combineToLightest(a0, a1);
	}
	int idLightestNeutralMeson() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "idLightestNeutralMeson");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return StringFlav::idLightestNeutralMeson();
	}
	int getHadronIDwin() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "getHadronIDwin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return StringFlav::getHadronIDwin();
	}
	int combineLastThermal(class Pythia8::FlavContainer & a0, class Pythia8::FlavContainer & a1, double a2, double a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "combineLastThermal");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return StringFlav::combineLastThermal(a0, a1, a2, a3);
	}
	int getHadronID(class Pythia8::FlavContainer & a0, class Pythia8::FlavContainer & a1, double a2, double a3, bool a4) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "getHadronID");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return StringFlav::getHadronID(a0, a1, a2, a3, a4);
	}
	double getHadronMassWin(int a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "getHadronMassWin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return StringFlav::getHadronMassWin(a0);
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::StringFlav *>(this), "onStat");
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

void bind_Pythia8_MathTools(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// Pythia8::factorial(const int) file:Pythia8/MathTools.h line:44
	M("Pythia8").def("factorial", (double (*)(const int)) &Pythia8::factorial, "C++: Pythia8::factorial(const int) --> double", pybind11::arg(""));

	// Pythia8::binomial(const int, int) file:Pythia8/MathTools.h line:47
	M("Pythia8").def("binomial", (int (*)(const int, int)) &Pythia8::binomial, "C++: Pythia8::binomial(const int, int) --> int", pybind11::arg(""), pybind11::arg(""));

	// Pythia8::lambertW(const double) file:Pythia8/MathTools.h line:50
	M("Pythia8").def("lambertW", (double (*)(const double)) &Pythia8::lambertW, "C++: Pythia8::lambertW(const double) --> double", pybind11::arg("x"));

	// Pythia8::kallenFunction(const double, const double, const double) file:Pythia8/MathTools.h line:53
	M("Pythia8").def("kallenFunction", (double (*)(const double, const double, const double)) &Pythia8::kallenFunction, "C++: Pythia8::kallenFunction(const double, const double, const double) --> double", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));

	{ // Pythia8::LinearInterpolator file:Pythia8/MathTools.h line:60
		pybind11::class_<Pythia8::LinearInterpolator, std::shared_ptr<Pythia8::LinearInterpolator>> cl(M("Pythia8"), "LinearInterpolator", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::LinearInterpolator(); } ) );
		cl.def( pybind11::init<double, double, class std::vector<double, class std::allocator<double> >>(), pybind11::arg("leftIn"), pybind11::arg("rightIn"), pybind11::arg("ysIn") );

		cl.def( pybind11::init( [](Pythia8::LinearInterpolator const &o){ return new Pythia8::LinearInterpolator(o); } ) );
		cl.def("data", (const class std::vector<double, class std::allocator<double> > & (Pythia8::LinearInterpolator::*)() const) &Pythia8::LinearInterpolator::data, "C++: Pythia8::LinearInterpolator::data() const --> const class std::vector<double, class std::allocator<double> > &", pybind11::return_value_policy::reference);
		cl.def("left", (double (Pythia8::LinearInterpolator::*)() const) &Pythia8::LinearInterpolator::left, "C++: Pythia8::LinearInterpolator::left() const --> double");
		cl.def("right", (double (Pythia8::LinearInterpolator::*)() const) &Pythia8::LinearInterpolator::right, "C++: Pythia8::LinearInterpolator::right() const --> double");
		cl.def("dx", (double (Pythia8::LinearInterpolator::*)() const) &Pythia8::LinearInterpolator::dx, "C++: Pythia8::LinearInterpolator::dx() const --> double");
		cl.def("__call__", (double (Pythia8::LinearInterpolator::*)(double) const) &Pythia8::LinearInterpolator::operator(), "C++: Pythia8::LinearInterpolator::operator()(double) const --> double", pybind11::arg("x"));
		cl.def("plot", (class Pythia8::Hist (Pythia8::LinearInterpolator::*)(std::string) const) &Pythia8::LinearInterpolator::plot, "C++: Pythia8::LinearInterpolator::plot(std::string) const --> class Pythia8::Hist", pybind11::arg("title"));
		cl.def("plot", (class Pythia8::Hist (Pythia8::LinearInterpolator::*)(std::string, double, double) const) &Pythia8::LinearInterpolator::plot, "C++: Pythia8::LinearInterpolator::plot(std::string, double, double) const --> class Pythia8::Hist", pybind11::arg("title"), pybind11::arg("xMin"), pybind11::arg("xMax"));
		cl.def("assign", (class Pythia8::LinearInterpolator & (Pythia8::LinearInterpolator::*)(const class Pythia8::LinearInterpolator &)) &Pythia8::LinearInterpolator::operator=, "C++: Pythia8::LinearInterpolator::operator=(const class Pythia8::LinearInterpolator &) --> class Pythia8::LinearInterpolator &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::HungarianAlgorithm file:Pythia8/MathTools.h line:132
		pybind11::class_<Pythia8::HungarianAlgorithm, std::shared_ptr<Pythia8::HungarianAlgorithm>> cl(M("Pythia8"), "HungarianAlgorithm", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::HungarianAlgorithm(); } ) );
		cl.def("solve", (double (Pythia8::HungarianAlgorithm::*)(class std::vector<class std::vector<double, class std::allocator<double> >, class std::allocator<class std::vector<double, class std::allocator<double> > > > &, class std::vector<int, class std::allocator<int> > &)) &Pythia8::HungarianAlgorithm::solve, "C++: Pythia8::HungarianAlgorithm::solve(class std::vector<class std::vector<double, class std::allocator<double> >, class std::allocator<class std::vector<double, class std::allocator<double> > > > &, class std::vector<int, class std::allocator<int> > &) --> double", pybind11::arg("distMatrix"), pybind11::arg("assignment"));
	}
	{ // Pythia8::PhysicsBase file:Pythia8/PhysicsBase.h line:27
		pybind11::class_<Pythia8::PhysicsBase, std::shared_ptr<Pythia8::PhysicsBase>, PyCallBack_Pythia8_PhysicsBase> cl(M("Pythia8"), "PhysicsBase", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::PhysicsBase(); }, [](){ return new PyCallBack_Pythia8_PhysicsBase(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_PhysicsBase const &o){ return new PyCallBack_Pythia8_PhysicsBase(o); } ) );
		cl.def( pybind11::init( [](Pythia8::PhysicsBase const &o){ return new Pythia8::PhysicsBase(o); } ) );

		pybind11::enum_<Pythia8::PhysicsBase::Status>(cl, "Status", pybind11::arithmetic(), "")
			.value("INCOMPLETE", Pythia8::PhysicsBase::Status::INCOMPLETE)
			.value("COMPLETE", Pythia8::PhysicsBase::Status::COMPLETE)
			.value("CONSTRUCTOR_FAILED", Pythia8::PhysicsBase::Status::CONSTRUCTOR_FAILED)
			.value("INIT_FAILED", Pythia8::PhysicsBase::Status::INIT_FAILED)
			.value("LHEF_END", Pythia8::PhysicsBase::Status::LHEF_END)
			.value("LOWENERGY_FAILED", Pythia8::PhysicsBase::Status::LOWENERGY_FAILED)
			.value("PROCESSLEVEL_FAILED", Pythia8::PhysicsBase::Status::PROCESSLEVEL_FAILED)
			.value("PROCESSLEVEL_USERVETO", Pythia8::PhysicsBase::Status::PROCESSLEVEL_USERVETO)
			.value("MERGING_FAILED", Pythia8::PhysicsBase::Status::MERGING_FAILED)
			.value("PARTONLEVEL_FAILED", Pythia8::PhysicsBase::Status::PARTONLEVEL_FAILED)
			.value("PARTONLEVEL_USERVETO", Pythia8::PhysicsBase::Status::PARTONLEVEL_USERVETO)
			.value("HADRONLEVEL_FAILED", Pythia8::PhysicsBase::Status::HADRONLEVEL_FAILED)
			.value("CHECK_FAILED", Pythia8::PhysicsBase::Status::CHECK_FAILED)
			.value("OTHER_UNPHYSICAL", Pythia8::PhysicsBase::Status::OTHER_UNPHYSICAL)
			.value("HEAVYION_FAILED", Pythia8::PhysicsBase::Status::HEAVYION_FAILED)
			.value("HADRONLEVEL_USERVETO", Pythia8::PhysicsBase::Status::HADRONLEVEL_USERVETO)
			.export_values();

		cl.def_readwrite("subObjects", &Pythia8::PhysicsBase::subObjects);
		cl.def_readwrite("userHooksPtr", &Pythia8::PhysicsBase::userHooksPtr);
		cl.def("initInfoPtr", (void (Pythia8::PhysicsBase::*)(class Pythia8::Info &)) &Pythia8::PhysicsBase::initInfoPtr, "C++: Pythia8::PhysicsBase::initInfoPtr(class Pythia8::Info &) --> void", pybind11::arg("infoPtrIn"));
		cl.def("flag", (bool (Pythia8::PhysicsBase::*)(std::string) const) &Pythia8::PhysicsBase::flag, "C++: Pythia8::PhysicsBase::flag(std::string) const --> bool", pybind11::arg("key"));
		cl.def("mode", (int (Pythia8::PhysicsBase::*)(std::string) const) &Pythia8::PhysicsBase::mode, "C++: Pythia8::PhysicsBase::mode(std::string) const --> int", pybind11::arg("key"));
		cl.def("parm", (double (Pythia8::PhysicsBase::*)(std::string) const) &Pythia8::PhysicsBase::parm, "C++: Pythia8::PhysicsBase::parm(std::string) const --> double", pybind11::arg("key"));
		cl.def("word", (std::string (Pythia8::PhysicsBase::*)(std::string) const) &Pythia8::PhysicsBase::word, "C++: Pythia8::PhysicsBase::word(std::string) const --> std::string", pybind11::arg("key"));
		cl.def("onInitInfoPtr", (void (Pythia8::PhysicsBase::*)()) &Pythia8::PhysicsBase::onInitInfoPtr, "C++: Pythia8::PhysicsBase::onInitInfoPtr() --> void");
		cl.def("onBeginEvent", (void (Pythia8::PhysicsBase::*)()) &Pythia8::PhysicsBase::onBeginEvent, "C++: Pythia8::PhysicsBase::onBeginEvent() --> void");
		cl.def("onEndEvent", (void (Pythia8::PhysicsBase::*)(enum Pythia8::PhysicsBase::Status)) &Pythia8::PhysicsBase::onEndEvent, "C++: Pythia8::PhysicsBase::onEndEvent(enum Pythia8::PhysicsBase::Status) --> void", pybind11::arg(""));
		cl.def("onStat", (void (Pythia8::PhysicsBase::*)()) &Pythia8::PhysicsBase::onStat, "C++: Pythia8::PhysicsBase::onStat() --> void");
		cl.def("registerSubObject", (void (Pythia8::PhysicsBase::*)(class Pythia8::PhysicsBase &)) &Pythia8::PhysicsBase::registerSubObject, "C++: Pythia8::PhysicsBase::registerSubObject(class Pythia8::PhysicsBase &) --> void", pybind11::arg("pb"));
		cl.def("assign", (class Pythia8::PhysicsBase & (Pythia8::PhysicsBase::*)(const class Pythia8::PhysicsBase &)) &Pythia8::PhysicsBase::operator=, "C++: Pythia8::PhysicsBase::operator=(const class Pythia8::PhysicsBase &) --> class Pythia8::PhysicsBase &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	// Pythia8::LundFFRaw(double, double, double, double, double) file:Pythia8/FragmentationFlavZpT.h line:27
	M("Pythia8").def("LundFFRaw", (double (*)(double, double, double, double, double)) &Pythia8::LundFFRaw, "C++: Pythia8::LundFFRaw(double, double, double, double, double) --> double", pybind11::arg("z"), pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("mT2"));

	// Pythia8::LundFFAvg(double, double, double, double, double) file:Pythia8/FragmentationFlavZpT.h line:29
	M("Pythia8").def("LundFFAvg", (double (*)(double, double, double, double, double)) &Pythia8::LundFFAvg, "C++: Pythia8::LundFFAvg(double, double, double, double, double) --> double", pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("mT2"), pybind11::arg("tol"));

	{ // Pythia8::FlavContainer file:Pythia8/FragmentationFlavZpT.h line:41
		pybind11::class_<Pythia8::FlavContainer, std::shared_ptr<Pythia8::FlavContainer>> cl(M("Pythia8"), "FlavContainer", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::FlavContainer(); } ), "doc" );
		cl.def( pybind11::init( [](int const & a0){ return new Pythia8::FlavContainer(a0); } ), "doc" , pybind11::arg("idIn"));
		cl.def( pybind11::init( [](int const & a0, int const & a1){ return new Pythia8::FlavContainer(a0, a1); } ), "doc" , pybind11::arg("idIn"), pybind11::arg("rankIn"));
		cl.def( pybind11::init( [](int const & a0, int const & a1, int const & a2){ return new Pythia8::FlavContainer(a0, a1, a2); } ), "doc" , pybind11::arg("idIn"), pybind11::arg("rankIn"), pybind11::arg("nPopIn"));
		cl.def( pybind11::init( [](int const & a0, int const & a1, int const & a2, int const & a3){ return new Pythia8::FlavContainer(a0, a1, a2, a3); } ), "doc" , pybind11::arg("idIn"), pybind11::arg("rankIn"), pybind11::arg("nPopIn"), pybind11::arg("idPopIn"));
		cl.def( pybind11::init<int, int, int, int, int>(), pybind11::arg("idIn"), pybind11::arg("rankIn"), pybind11::arg("nPopIn"), pybind11::arg("idPopIn"), pybind11::arg("idVtxIn") );

		cl.def( pybind11::init( [](Pythia8::FlavContainer const &o){ return new Pythia8::FlavContainer(o); } ) );
		cl.def_readwrite("id", &Pythia8::FlavContainer::id);
		cl.def_readwrite("rank", &Pythia8::FlavContainer::rank);
		cl.def_readwrite("nPop", &Pythia8::FlavContainer::nPop);
		cl.def_readwrite("idPop", &Pythia8::FlavContainer::idPop);
		cl.def_readwrite("idVtx", &Pythia8::FlavContainer::idVtx);
		cl.def("assign", (class Pythia8::FlavContainer & (Pythia8::FlavContainer::*)(const class Pythia8::FlavContainer &)) &Pythia8::FlavContainer::operator=, "C++: Pythia8::FlavContainer::operator=(const class Pythia8::FlavContainer &) --> class Pythia8::FlavContainer &", pybind11::return_value_policy::reference, pybind11::arg("flav"));
		cl.def("anti", (class Pythia8::FlavContainer & (Pythia8::FlavContainer::*)()) &Pythia8::FlavContainer::anti, "C++: Pythia8::FlavContainer::anti() --> class Pythia8::FlavContainer &", pybind11::return_value_policy::reference);
		cl.def("copy", (class Pythia8::FlavContainer & (Pythia8::FlavContainer::*)(const class Pythia8::FlavContainer &)) &Pythia8::FlavContainer::copy, "C++: Pythia8::FlavContainer::copy(const class Pythia8::FlavContainer &) --> class Pythia8::FlavContainer &", pybind11::return_value_policy::reference, pybind11::arg("flav"));
		cl.def("anti", (class Pythia8::FlavContainer & (Pythia8::FlavContainer::*)(const class Pythia8::FlavContainer &)) &Pythia8::FlavContainer::anti, "C++: Pythia8::FlavContainer::anti(const class Pythia8::FlavContainer &) --> class Pythia8::FlavContainer &", pybind11::return_value_policy::reference, pybind11::arg("flav"));
		cl.def("isDiquark", (bool (Pythia8::FlavContainer::*)()) &Pythia8::FlavContainer::isDiquark, "C++: Pythia8::FlavContainer::isDiquark() --> bool");
	}
	{ // Pythia8::StringFlav file:Pythia8/FragmentationFlavZpT.h line:84
		pybind11::class_<Pythia8::StringFlav, std::shared_ptr<Pythia8::StringFlav>, PyCallBack_Pythia8_StringFlav, Pythia8::PhysicsBase> cl(M("Pythia8"), "StringFlav", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::StringFlav(); }, [](){ return new PyCallBack_Pythia8_StringFlav(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_StringFlav const &o){ return new PyCallBack_Pythia8_StringFlav(o); } ) );
		cl.def( pybind11::init( [](Pythia8::StringFlav const &o){ return new Pythia8::StringFlav(o); } ) );
		cl.def_readwrite("suppressLeadingB", &Pythia8::StringFlav::suppressLeadingB);
		cl.def_readwrite("mT2suppression", &Pythia8::StringFlav::mT2suppression);
		cl.def_readwrite("useWidthPre", &Pythia8::StringFlav::useWidthPre);
		cl.def_readwrite("probQQtoQ", &Pythia8::StringFlav::probQQtoQ);
		cl.def_readwrite("probStoUD", &Pythia8::StringFlav::probStoUD);
		cl.def_readwrite("probSQtoQQ", &Pythia8::StringFlav::probSQtoQQ);
		cl.def_readwrite("probQQ1toQQ0", &Pythia8::StringFlav::probQQ1toQQ0);
		cl.def_readwrite("probQandQQ", &Pythia8::StringFlav::probQandQQ);
		cl.def_readwrite("probQandS", &Pythia8::StringFlav::probQandS);
		cl.def_readwrite("probQandSinQQ", &Pythia8::StringFlav::probQandSinQQ);
		cl.def_readwrite("probQQ1corr", &Pythia8::StringFlav::probQQ1corr);
		cl.def_readwrite("probQQ1corrInv", &Pythia8::StringFlav::probQQ1corrInv);
		cl.def_readwrite("probQQ1norm", &Pythia8::StringFlav::probQQ1norm);
		cl.def_readwrite("etaSup", &Pythia8::StringFlav::etaSup);
		cl.def_readwrite("etaPrimeSup", &Pythia8::StringFlav::etaPrimeSup);
		cl.def_readwrite("decupletSup", &Pythia8::StringFlav::decupletSup);
		cl.def_readwrite("popcornRate", &Pythia8::StringFlav::popcornRate);
		cl.def_readwrite("popcornSpair", &Pythia8::StringFlav::popcornSpair);
		cl.def_readwrite("popcornSmeson", &Pythia8::StringFlav::popcornSmeson);
		cl.def_readwrite("popFrac", &Pythia8::StringFlav::popFrac);
		cl.def_readwrite("lightLeadingBSup", &Pythia8::StringFlav::lightLeadingBSup);
		cl.def_readwrite("heavyLeadingBSup", &Pythia8::StringFlav::heavyLeadingBSup);
		cl.def_readwrite("sigmaHad", &Pythia8::StringFlav::sigmaHad);
		cl.def_readwrite("widthPreStrange", &Pythia8::StringFlav::widthPreStrange);
		cl.def_readwrite("widthPreDiquark", &Pythia8::StringFlav::widthPreDiquark);
		cl.def_readwrite("thermalModel", &Pythia8::StringFlav::thermalModel);
		cl.def_readwrite("mesonNonetL1", &Pythia8::StringFlav::mesonNonetL1);
		cl.def_readwrite("temperature", &Pythia8::StringFlav::temperature);
		cl.def_readwrite("tempPreFactor", &Pythia8::StringFlav::tempPreFactor);
		cl.def_readwrite("nNewQuark", &Pythia8::StringFlav::nNewQuark);
		cl.def_readwrite("closePacking", &Pythia8::StringFlav::closePacking);
		cl.def_readwrite("exponentMPI", &Pythia8::StringFlav::exponentMPI);
		cl.def_readwrite("exponentNSP", &Pythia8::StringFlav::exponentNSP);
		cl.def_readwrite("hadronConstIDs", &Pythia8::StringFlav::hadronConstIDs);
		cl.def_readwrite("possibleHadrons", &Pythia8::StringFlav::possibleHadrons);
		cl.def_readwrite("possibleRatePrefacs", &Pythia8::StringFlav::possibleRatePrefacs);
		cl.def_readwrite("possibleHadronsLast", &Pythia8::StringFlav::possibleHadronsLast);
		cl.def_readwrite("possibleRatePrefacsLast", &Pythia8::StringFlav::possibleRatePrefacsLast);
		cl.def_readwrite("hadronIDwin", &Pythia8::StringFlav::hadronIDwin);
		cl.def_readwrite("idNewWin", &Pythia8::StringFlav::idNewWin);
		cl.def_readwrite("hadronMassWin", &Pythia8::StringFlav::hadronMassWin);
		cl.def("init", (void (Pythia8::StringFlav::*)()) &Pythia8::StringFlav::init, "C++: Pythia8::StringFlav::init() --> void");
		cl.def("pickLightQ", (int (Pythia8::StringFlav::*)()) &Pythia8::StringFlav::pickLightQ, "C++: Pythia8::StringFlav::pickLightQ() --> int");
		cl.def("pick", [](Pythia8::StringFlav &o, class Pythia8::FlavContainer & a0) -> Pythia8::FlavContainer { return o.pick(a0); }, "", pybind11::arg("flavOld"));
		cl.def("pick", [](Pythia8::StringFlav &o, class Pythia8::FlavContainer & a0, double const & a1) -> Pythia8::FlavContainer { return o.pick(a0, a1); }, "", pybind11::arg("flavOld"), pybind11::arg("pT"));
		cl.def("pick", [](Pythia8::StringFlav &o, class Pythia8::FlavContainer & a0, double const & a1, double const & a2) -> Pythia8::FlavContainer { return o.pick(a0, a1, a2); }, "", pybind11::arg("flavOld"), pybind11::arg("pT"), pybind11::arg("nNSP"));
		cl.def("pick", (class Pythia8::FlavContainer (Pythia8::StringFlav::*)(class Pythia8::FlavContainer &, double, double, bool)) &Pythia8::StringFlav::pick, "C++: Pythia8::StringFlav::pick(class Pythia8::FlavContainer &, double, double, bool) --> class Pythia8::FlavContainer", pybind11::arg("flavOld"), pybind11::arg("pT"), pybind11::arg("nNSP"), pybind11::arg("allowPop"));
		cl.def("pickGauss", [](Pythia8::StringFlav &o, class Pythia8::FlavContainer & a0) -> Pythia8::FlavContainer { return o.pickGauss(a0); }, "", pybind11::arg("flavOld"));
		cl.def("pickGauss", (class Pythia8::FlavContainer (Pythia8::StringFlav::*)(class Pythia8::FlavContainer &, bool)) &Pythia8::StringFlav::pickGauss, "C++: Pythia8::StringFlav::pickGauss(class Pythia8::FlavContainer &, bool) --> class Pythia8::FlavContainer", pybind11::arg("flavOld"), pybind11::arg("allowPop"));
		cl.def("pickThermal", (class Pythia8::FlavContainer (Pythia8::StringFlav::*)(class Pythia8::FlavContainer &, double, double)) &Pythia8::StringFlav::pickThermal, "C++: Pythia8::StringFlav::pickThermal(class Pythia8::FlavContainer &, double, double) --> class Pythia8::FlavContainer", pybind11::arg("flavOld"), pybind11::arg("pT"), pybind11::arg("nNSP"));
		cl.def("combine", (int (Pythia8::StringFlav::*)(class Pythia8::FlavContainer &, class Pythia8::FlavContainer &)) &Pythia8::StringFlav::combine, "C++: Pythia8::StringFlav::combine(class Pythia8::FlavContainer &, class Pythia8::FlavContainer &) --> int", pybind11::arg("flav1"), pybind11::arg("flav2"));
		cl.def("combineId", [](Pythia8::StringFlav &o, int const & a0, int const & a1) -> int { return o.combineId(a0, a1); }, "", pybind11::arg("id1"), pybind11::arg("id2"));
		cl.def("combineId", (int (Pythia8::StringFlav::*)(int, int, bool)) &Pythia8::StringFlav::combineId, "C++: Pythia8::StringFlav::combineId(int, int, bool) --> int", pybind11::arg("id1"), pybind11::arg("id2"), pybind11::arg("keepTrying"));
		cl.def("combineToLightest", (int (Pythia8::StringFlav::*)(int, int)) &Pythia8::StringFlav::combineToLightest, "C++: Pythia8::StringFlav::combineToLightest(int, int) --> int", pybind11::arg("id1"), pybind11::arg("id2"));
		cl.def("idLightestNeutralMeson", (int (Pythia8::StringFlav::*)()) &Pythia8::StringFlav::idLightestNeutralMeson, "C++: Pythia8::StringFlav::idLightestNeutralMeson() --> int");
		cl.def("getHadronIDwin", (int (Pythia8::StringFlav::*)()) &Pythia8::StringFlav::getHadronIDwin, "C++: Pythia8::StringFlav::getHadronIDwin() --> int");
		cl.def("combineLastThermal", (int (Pythia8::StringFlav::*)(class Pythia8::FlavContainer &, class Pythia8::FlavContainer &, double, double)) &Pythia8::StringFlav::combineLastThermal, "C++: Pythia8::StringFlav::combineLastThermal(class Pythia8::FlavContainer &, class Pythia8::FlavContainer &, double, double) --> int", pybind11::arg("flav1"), pybind11::arg("flav2"), pybind11::arg("pT"), pybind11::arg("nNSP"));
		cl.def("getHadronID", [](Pythia8::StringFlav &o, class Pythia8::FlavContainer & a0, class Pythia8::FlavContainer & a1) -> int { return o.getHadronID(a0, a1); }, "", pybind11::arg("flav1"), pybind11::arg("flav2"));
		cl.def("getHadronID", [](Pythia8::StringFlav &o, class Pythia8::FlavContainer & a0, class Pythia8::FlavContainer & a1, double const & a2) -> int { return o.getHadronID(a0, a1, a2); }, "", pybind11::arg("flav1"), pybind11::arg("flav2"), pybind11::arg("pT"));
		cl.def("getHadronID", [](Pythia8::StringFlav &o, class Pythia8::FlavContainer & a0, class Pythia8::FlavContainer & a1, double const & a2, double const & a3) -> int { return o.getHadronID(a0, a1, a2, a3); }, "", pybind11::arg("flav1"), pybind11::arg("flav2"), pybind11::arg("pT"), pybind11::arg("nNSP"));
		cl.def("getHadronID", (int (Pythia8::StringFlav::*)(class Pythia8::FlavContainer &, class Pythia8::FlavContainer &, double, double, bool)) &Pythia8::StringFlav::getHadronID, "C++: Pythia8::StringFlav::getHadronID(class Pythia8::FlavContainer &, class Pythia8::FlavContainer &, double, double, bool) --> int", pybind11::arg("flav1"), pybind11::arg("flav2"), pybind11::arg("pT"), pybind11::arg("nNSP"), pybind11::arg("finalTwo"));
		cl.def("getHadronMassWin", (double (Pythia8::StringFlav::*)(int)) &Pythia8::StringFlav::getHadronMassWin, "C++: Pythia8::StringFlav::getHadronMassWin(int) --> double", pybind11::arg("idHad"));
		cl.def("assignPopQ", (void (Pythia8::StringFlav::*)(class Pythia8::FlavContainer &)) &Pythia8::StringFlav::assignPopQ, "C++: Pythia8::StringFlav::assignPopQ(class Pythia8::FlavContainer &) --> void", pybind11::arg("flav"));
		cl.def("makeDiquark", [](Pythia8::StringFlav &o, int const & a0, int const & a1) -> int { return o.makeDiquark(a0, a1); }, "", pybind11::arg("id1"), pybind11::arg("id2"));
		cl.def("makeDiquark", (int (Pythia8::StringFlav::*)(int, int, int)) &Pythia8::StringFlav::makeDiquark, "C++: Pythia8::StringFlav::makeDiquark(int, int, int) --> int", pybind11::arg("id1"), pybind11::arg("id2"), pybind11::arg("idHad"));
		cl.def("addQuarkDiquark", (void (Pythia8::StringFlav::*)(class std::vector<struct std::pair<int, int>, class std::allocator<struct std::pair<int, int> > > &, int, int, int)) &Pythia8::StringFlav::addQuarkDiquark, "C++: Pythia8::StringFlav::addQuarkDiquark(class std::vector<struct std::pair<int, int>, class std::allocator<struct std::pair<int, int> > > &, int, int, int) --> void", pybind11::arg("quarkCombis"), pybind11::arg("qID"), pybind11::arg("diqID"), pybind11::arg("hadronID"));
		cl.def("getMesonSpinCounter", (int (Pythia8::StringFlav::*)(int)) &Pythia8::StringFlav::getMesonSpinCounter, "C++: Pythia8::StringFlav::getMesonSpinCounter(int) --> int", pybind11::arg("hadronID"));
		cl.def("assign", (class Pythia8::StringFlav & (Pythia8::StringFlav::*)(const class Pythia8::StringFlav &)) &Pythia8::StringFlav::operator=, "C++: Pythia8::StringFlav::operator=(const class Pythia8::StringFlav &) --> class Pythia8::StringFlav &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}

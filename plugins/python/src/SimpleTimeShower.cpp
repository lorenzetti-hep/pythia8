#include <Pythia8/Basics.h>
#include <Pythia8/BeamParticle.h>
#include <Pythia8/Event.h>
#include <Pythia8/FragmentationFlavZpT.h>
#include <Pythia8/HadronWidths.h>
#include <Pythia8/Info.h>
#include <Pythia8/LHEF3.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/PartonDistributions.h>
#include <Pythia8/PartonSystems.h>
#include <Pythia8/PhysicsBase.h>
#include <Pythia8/ResonanceWidths.h>
#include <Pythia8/Settings.h>
#include <Pythia8/SigmaLowEnergy.h>
#include <Pythia8/SigmaTotal.h>
#include <Pythia8/SimpleTimeShower.h>
#include <Pythia8/StandardModel.h>
#include <Pythia8/SusyCouplings.h>
#include <Pythia8/TimeShower.h>
#include <Pythia8/VinciaCommon.h>
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

// Pythia8::SimpleTimeShower file:Pythia8/SimpleTimeShower.h line:74
struct PyCallBack_Pythia8_SimpleTimeShower : public Pythia8::SimpleTimeShower {
	using Pythia8::SimpleTimeShower::SimpleTimeShower;

	void init(class Pythia8::BeamParticle * a0, class Pythia8::BeamParticle * a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SimpleTimeShower::init(a0, a1);
	}
	bool limitPTmax(class Pythia8::Event & a0, double a1, double a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "limitPTmax");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SimpleTimeShower::limitPTmax(a0, a1, a2);
	}
	int shower(int a0, int a1, class Pythia8::Event & a2, double a3, int a4) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "shower");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SimpleTimeShower::shower(a0, a1, a2, a3, a4);
	}
	int showerQED(int a0, int a1, class Pythia8::Event & a2, double a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "showerQED");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SimpleTimeShower::showerQED(a0, a1, a2, a3);
	}
	void prepareProcess(class Pythia8::Event & a0, class Pythia8::Event & a1, class std::vector<int, class std::allocator<int> > & a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "prepareProcess");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SimpleTimeShower::prepareProcess(a0, a1, a2);
	}
	void prepareGlobal(class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "prepareGlobal");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SimpleTimeShower::prepareGlobal(a0);
	}
	void prepare(int a0, class Pythia8::Event & a1, bool a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "prepare");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SimpleTimeShower::prepare(a0, a1, a2);
	}
	void rescatterUpdate(int a0, class Pythia8::Event & a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "rescatterUpdate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SimpleTimeShower::rescatterUpdate(a0, a1);
	}
	void update(int a0, class Pythia8::Event & a1, bool a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "update");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SimpleTimeShower::update(a0, a1, a2);
	}
	double pTnext(class Pythia8::Event & a0, double a1, double a2, bool a3, bool a4) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "pTnext");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SimpleTimeShower::pTnext(a0, a1, a2, a3, a4);
	}
	double pTnextResDec() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "pTnextResDec");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SimpleTimeShower::pTnextResDec();
	}
	bool branch(class Pythia8::Event & a0, bool a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "branch");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SimpleTimeShower::branch(a0, a1);
	}
	bool resonanceShower(class Pythia8::Event & a0, class Pythia8::Event & a1, class std::vector<int, class std::allocator<int> > & a2, double a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "resonanceShower");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SimpleTimeShower::resonanceShower(a0, a1, a2, a3);
	}
	void list() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "list");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SimpleTimeShower::list();
	}
	bool initUncertainties() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "initUncertainties");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SimpleTimeShower::initUncertainties();
	}
	bool initEnhancements() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "initEnhancements");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SimpleTimeShower::initEnhancements();
	}
	bool getHasWeaklyRadiated() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "getHasWeaklyRadiated");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SimpleTimeShower::getHasWeaklyRadiated();
	}
	int system() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "system");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return SimpleTimeShower::system();
	}
	double enhancePTmax() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "enhancePTmax");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SimpleTimeShower::enhancePTmax();
	}
	double pTLastInShower() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "pTLastInShower");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return SimpleTimeShower::pTLastInShower();
	}
	int showerQEDafterRemnants(class Pythia8::Event & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "showerQEDafterRemnants");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return TimeShower::showerQEDafterRemnants(a0);
	}
	class Pythia8::Event clustered(const class Pythia8::Event & a0, int a1, int a2, int a3, class std::basic_string<char> a4) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "clustered");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Event>::value) {
				static pybind11::detail::overload_caster_t<class Pythia8::Event> caster;
				return pybind11::detail::cast_ref<class Pythia8::Event>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class Pythia8::Event>(std::move(o));
		}
		return TimeShower::clustered(a0, a1, a2, a3, a4);
	}
	using _binder_ret_0 = class std::map<class std::basic_string<char>, double, struct std::less<class std::basic_string<char> >, class std::allocator<struct std::pair<const class std::basic_string<char>, double> > >;
	_binder_ret_0 getStateVariables(const class Pythia8::Event & a0, int a1, int a2, int a3, class std::basic_string<char> a4) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "getStateVariables");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_0>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_0> caster;
				return pybind11::detail::cast_ref<_binder_ret_0>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_0>(std::move(o));
		}
		return TimeShower::getStateVariables(a0, a1, a2, a3, a4);
	}
	bool isTimelike(const class Pythia8::Event & a0, int a1, int a2, int a3, class std::basic_string<char> a4) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "isTimelike");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TimeShower::isTimelike(a0, a1, a2, a3, a4);
	}
	using _binder_ret_1 = class std::vector<class std::basic_string<char>, class std::allocator<class std::basic_string<char> > >;
	_binder_ret_1 getSplittingName(const class Pythia8::Event & a0, int a1, int a2, int a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "getSplittingName");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_1>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_1> caster;
				return pybind11::detail::cast_ref<_binder_ret_1>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_1>(std::move(o));
		}
		return TimeShower::getSplittingName(a0, a1, a2, a3);
	}
	double getSplittingProb(const class Pythia8::Event & a0, int a1, int a2, int a3, class std::basic_string<char> a4) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "getSplittingProb");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return TimeShower::getSplittingProb(a0, a1, a2, a3, a4);
	}
	bool allowedSplitting(const class Pythia8::Event & a0, int a1, int a2) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "allowedSplitting");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TimeShower::allowedSplitting(a0, a1, a2);
	}
	using _binder_ret_2 = class std::vector<int, class std::allocator<int> >;
	_binder_ret_2 getRecoilers(const class Pythia8::Event & a0, int a1, int a2, class std::basic_string<char> a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "getRecoilers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_2>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_2> caster;
				return pybind11::detail::cast_ref<_binder_ret_2>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_2>(std::move(o));
		}
		return TimeShower::getRecoilers(a0, a1, a2, a3);
	}
	double enhanceFactor(const class std::basic_string<char> & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "enhanceFactor");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::overload_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return TimeShower::enhanceFactor(a0);
	}
	void onInitInfoPtr() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "onInitInfoPtr");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SimpleTimeShower *>(this), "onStat");
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

void bind_Pythia8_SimpleTimeShower(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::SimpleTimeShower file:Pythia8/SimpleTimeShower.h line:74
		pybind11::class_<Pythia8::SimpleTimeShower, std::shared_ptr<Pythia8::SimpleTimeShower>, PyCallBack_Pythia8_SimpleTimeShower, Pythia8::TimeShower> cl(M("Pythia8"), "SimpleTimeShower", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::SimpleTimeShower(); }, [](){ return new PyCallBack_Pythia8_SimpleTimeShower(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_SimpleTimeShower const &o){ return new PyCallBack_Pythia8_SimpleTimeShower(o); } ) );
		cl.def( pybind11::init( [](Pythia8::SimpleTimeShower const &o){ return new Pythia8::SimpleTimeShower(o); } ) );
		cl.def("init", [](Pythia8::SimpleTimeShower &o) -> void { return o.init(); }, "");
		cl.def("init", [](Pythia8::SimpleTimeShower &o, class Pythia8::BeamParticle * a0) -> void { return o.init(a0); }, "", pybind11::arg("beamAPtrIn"));
		cl.def("init", (void (Pythia8::SimpleTimeShower::*)(class Pythia8::BeamParticle *, class Pythia8::BeamParticle *)) &Pythia8::SimpleTimeShower::init, "C++: Pythia8::SimpleTimeShower::init(class Pythia8::BeamParticle *, class Pythia8::BeamParticle *) --> void", pybind11::arg("beamAPtrIn"), pybind11::arg("beamBPtrIn"));
		cl.def("limitPTmax", [](Pythia8::SimpleTimeShower &o, class Pythia8::Event & a0) -> bool { return o.limitPTmax(a0); }, "", pybind11::arg("event"));
		cl.def("limitPTmax", [](Pythia8::SimpleTimeShower &o, class Pythia8::Event & a0, double const & a1) -> bool { return o.limitPTmax(a0, a1); }, "", pybind11::arg("event"), pybind11::arg("Q2Fac"));
		cl.def("limitPTmax", (bool (Pythia8::SimpleTimeShower::*)(class Pythia8::Event &, double, double)) &Pythia8::SimpleTimeShower::limitPTmax, "C++: Pythia8::SimpleTimeShower::limitPTmax(class Pythia8::Event &, double, double) --> bool", pybind11::arg("event"), pybind11::arg("Q2Fac"), pybind11::arg("Q2Ren"));
		cl.def("shower", [](Pythia8::SimpleTimeShower &o, int const & a0, int const & a1, class Pythia8::Event & a2, double const & a3) -> int { return o.shower(a0, a1, a2, a3); }, "", pybind11::arg("iBeg"), pybind11::arg("iEnd"), pybind11::arg("event"), pybind11::arg("pTmax"));
		cl.def("shower", (int (Pythia8::SimpleTimeShower::*)(int, int, class Pythia8::Event &, double, int)) &Pythia8::SimpleTimeShower::shower, "C++: Pythia8::SimpleTimeShower::shower(int, int, class Pythia8::Event &, double, int) --> int", pybind11::arg("iBeg"), pybind11::arg("iEnd"), pybind11::arg("event"), pybind11::arg("pTmax"), pybind11::arg("nBranchMax"));
		cl.def("showerQED", (int (Pythia8::SimpleTimeShower::*)(int, int, class Pythia8::Event &, double)) &Pythia8::SimpleTimeShower::showerQED, "C++: Pythia8::SimpleTimeShower::showerQED(int, int, class Pythia8::Event &, double) --> int", pybind11::arg("i1"), pybind11::arg("i2"), pybind11::arg("event"), pybind11::arg("pTmax"));
		cl.def("prepareProcess", (void (Pythia8::SimpleTimeShower::*)(class Pythia8::Event &, class Pythia8::Event &, class std::vector<int, class std::allocator<int> > &)) &Pythia8::SimpleTimeShower::prepareProcess, "C++: Pythia8::SimpleTimeShower::prepareProcess(class Pythia8::Event &, class Pythia8::Event &, class std::vector<int, class std::allocator<int> > &) --> void", pybind11::arg("process"), pybind11::arg(""), pybind11::arg(""));
		cl.def("prepareGlobal", (void (Pythia8::SimpleTimeShower::*)(class Pythia8::Event &)) &Pythia8::SimpleTimeShower::prepareGlobal, "C++: Pythia8::SimpleTimeShower::prepareGlobal(class Pythia8::Event &) --> void", pybind11::arg("event"));
		cl.def("prepare", [](Pythia8::SimpleTimeShower &o, int const & a0, class Pythia8::Event & a1) -> void { return o.prepare(a0, a1); }, "", pybind11::arg("iSys"), pybind11::arg("event"));
		cl.def("prepare", (void (Pythia8::SimpleTimeShower::*)(int, class Pythia8::Event &, bool)) &Pythia8::SimpleTimeShower::prepare, "C++: Pythia8::SimpleTimeShower::prepare(int, class Pythia8::Event &, bool) --> void", pybind11::arg("iSys"), pybind11::arg("event"), pybind11::arg("limitPTmaxIn"));
		cl.def("rescatterUpdate", (void (Pythia8::SimpleTimeShower::*)(int, class Pythia8::Event &)) &Pythia8::SimpleTimeShower::rescatterUpdate, "C++: Pythia8::SimpleTimeShower::rescatterUpdate(int, class Pythia8::Event &) --> void", pybind11::arg("iSys"), pybind11::arg("event"));
		cl.def("update", [](Pythia8::SimpleTimeShower &o, int const & a0, class Pythia8::Event & a1) -> void { return o.update(a0, a1); }, "", pybind11::arg("iSys"), pybind11::arg("event"));
		cl.def("update", (void (Pythia8::SimpleTimeShower::*)(int, class Pythia8::Event &, bool)) &Pythia8::SimpleTimeShower::update, "C++: Pythia8::SimpleTimeShower::update(int, class Pythia8::Event &, bool) --> void", pybind11::arg("iSys"), pybind11::arg("event"), pybind11::arg("hasWeakRad"));
		cl.def("pTnext", [](Pythia8::SimpleTimeShower &o, class Pythia8::Event & a0, double const & a1, double const & a2) -> double { return o.pTnext(a0, a1, a2); }, "", pybind11::arg("event"), pybind11::arg("pTbegAll"), pybind11::arg("pTendAll"));
		cl.def("pTnext", [](Pythia8::SimpleTimeShower &o, class Pythia8::Event & a0, double const & a1, double const & a2, bool const & a3) -> double { return o.pTnext(a0, a1, a2, a3); }, "", pybind11::arg("event"), pybind11::arg("pTbegAll"), pybind11::arg("pTendAll"), pybind11::arg("isFirstTrial"));
		cl.def("pTnext", (double (Pythia8::SimpleTimeShower::*)(class Pythia8::Event &, double, double, bool, bool)) &Pythia8::SimpleTimeShower::pTnext, "C++: Pythia8::SimpleTimeShower::pTnext(class Pythia8::Event &, double, double, bool, bool) --> double", pybind11::arg("event"), pybind11::arg("pTbegAll"), pybind11::arg("pTendAll"), pybind11::arg("isFirstTrial"), pybind11::arg("doTrialIn"));
		cl.def("pTnextResDec", (double (Pythia8::SimpleTimeShower::*)()) &Pythia8::SimpleTimeShower::pTnextResDec, "C++: Pythia8::SimpleTimeShower::pTnextResDec() --> double");
		cl.def("branch", [](Pythia8::SimpleTimeShower &o, class Pythia8::Event & a0) -> bool { return o.branch(a0); }, "", pybind11::arg("event"));
		cl.def("branch", (bool (Pythia8::SimpleTimeShower::*)(class Pythia8::Event &, bool)) &Pythia8::SimpleTimeShower::branch, "C++: Pythia8::SimpleTimeShower::branch(class Pythia8::Event &, bool) --> bool", pybind11::arg("event"), pybind11::arg("isInterleaved"));
		cl.def("resonanceShower", (bool (Pythia8::SimpleTimeShower::*)(class Pythia8::Event &, class Pythia8::Event &, class std::vector<int, class std::allocator<int> > &, double)) &Pythia8::SimpleTimeShower::resonanceShower, "C++: Pythia8::SimpleTimeShower::resonanceShower(class Pythia8::Event &, class Pythia8::Event &, class std::vector<int, class std::allocator<int> > &, double) --> bool", pybind11::arg("process"), pybind11::arg("event"), pybind11::arg("iPos"), pybind11::arg("qRestart"));
		cl.def("list", (void (Pythia8::SimpleTimeShower::*)() const) &Pythia8::SimpleTimeShower::list, "C++: Pythia8::SimpleTimeShower::list() const --> void");
		cl.def("initUncertainties", (bool (Pythia8::SimpleTimeShower::*)()) &Pythia8::SimpleTimeShower::initUncertainties, "C++: Pythia8::SimpleTimeShower::initUncertainties() --> bool");
		cl.def("initEnhancements", (bool (Pythia8::SimpleTimeShower::*)()) &Pythia8::SimpleTimeShower::initEnhancements, "C++: Pythia8::SimpleTimeShower::initEnhancements() --> bool");
		cl.def("getHasWeaklyRadiated", (bool (Pythia8::SimpleTimeShower::*)()) &Pythia8::SimpleTimeShower::getHasWeaklyRadiated, "C++: Pythia8::SimpleTimeShower::getHasWeaklyRadiated() --> bool");
		cl.def("system", (int (Pythia8::SimpleTimeShower::*)() const) &Pythia8::SimpleTimeShower::system, "C++: Pythia8::SimpleTimeShower::system() const --> int");
		cl.def("enhancePTmax", (double (Pythia8::SimpleTimeShower::*)()) &Pythia8::SimpleTimeShower::enhancePTmax, "C++: Pythia8::SimpleTimeShower::enhancePTmax() --> double");
		cl.def("pTLastInShower", (double (Pythia8::SimpleTimeShower::*)()) &Pythia8::SimpleTimeShower::pTLastInShower, "C++: Pythia8::SimpleTimeShower::pTLastInShower() --> double");
		cl.def("assign", (class Pythia8::SimpleTimeShower & (Pythia8::SimpleTimeShower::*)(const class Pythia8::SimpleTimeShower &)) &Pythia8::SimpleTimeShower::operator=, "C++: Pythia8::SimpleTimeShower::operator=(const class Pythia8::SimpleTimeShower &) --> class Pythia8::SimpleTimeShower &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	// Pythia8::AntFunType file:Pythia8/VinciaCommon.h line:76
	pybind11::enum_<Pythia8::AntFunType>(M("Pythia8"), "AntFunType", pybind11::arithmetic(), "")
		.value("NoFun", Pythia8::AntFunType::NoFun)
		.value("QQemitFF", Pythia8::AntFunType::QQemitFF)
		.value("QGemitFF", Pythia8::AntFunType::QGemitFF)
		.value("GQemitFF", Pythia8::AntFunType::GQemitFF)
		.value("GGemitFF", Pythia8::AntFunType::GGemitFF)
		.value("GXsplitFF", Pythia8::AntFunType::GXsplitFF)
		.value("QQemitRF", Pythia8::AntFunType::QQemitRF)
		.value("QGemitRF", Pythia8::AntFunType::QGemitRF)
		.value("XGsplitRF", Pythia8::AntFunType::XGsplitRF)
		.value("QQemitII", Pythia8::AntFunType::QQemitII)
		.value("GQemitII", Pythia8::AntFunType::GQemitII)
		.value("GGemitII", Pythia8::AntFunType::GGemitII)
		.value("QXsplitII", Pythia8::AntFunType::QXsplitII)
		.value("GXconvII", Pythia8::AntFunType::GXconvII)
		.value("QQemitIF", Pythia8::AntFunType::QQemitIF)
		.value("QGemitIF", Pythia8::AntFunType::QGemitIF)
		.value("GQemitIF", Pythia8::AntFunType::GQemitIF)
		.value("GGemitIF", Pythia8::AntFunType::GGemitIF)
		.value("QXsplitIF", Pythia8::AntFunType::QXsplitIF)
		.value("GXconvIF", Pythia8::AntFunType::GXconvIF)
		.value("XGsplitIF", Pythia8::AntFunType::XGsplitIF)
		.export_values();

;

	// Pythia8::methodName(const std::string &, bool) file:Pythia8/VinciaCommon.h line:154
	M("Pythia8").def("methodName", [](const class std::basic_string<char> & a0) -> std::string { return Pythia8::methodName(a0); }, "", pybind11::arg("prettyFunction"));
	M("Pythia8").def("methodName", (std::string (*)(const std::string &, bool)) &Pythia8::methodName, "C++: Pythia8::methodName(const std::string &, bool) --> std::string", pybind11::arg("prettyFunction"), pybind11::arg("withPythia"));

	// Pythia8::printOut(std::string, std::string, int, char) file:Pythia8/VinciaCommon.h line:172
	M("Pythia8").def("printOut", [](class std::basic_string<char> const & a0, class std::basic_string<char> const & a1) -> void { return Pythia8::printOut(a0, a1); }, "", pybind11::arg(""), pybind11::arg(""));
	M("Pythia8").def("printOut", [](class std::basic_string<char> const & a0, class std::basic_string<char> const & a1, int const & a2) -> void { return Pythia8::printOut(a0, a1, a2); }, "", pybind11::arg(""), pybind11::arg(""), pybind11::arg("nPad"));
	M("Pythia8").def("printOut", (void (*)(std::string, std::string, int, char)) &Pythia8::printOut, "C++: Pythia8::printOut(std::string, std::string, int, char) --> void", pybind11::arg(""), pybind11::arg(""), pybind11::arg("nPad"), pybind11::arg("padChar"));

	// Pythia8::num2str(int, int) file:Pythia8/VinciaCommon.h line:175
	M("Pythia8").def("num2str", [](int const & a0) -> std::string { return Pythia8::num2str(a0); }, "", pybind11::arg(""));
	M("Pythia8").def("num2str", (std::string (*)(int, int)) &Pythia8::num2str, "C++: Pythia8::num2str(int, int) --> std::string", pybind11::arg(""), pybind11::arg("width"));

	// Pythia8::num2str(double, int) file:Pythia8/VinciaCommon.h line:176
	M("Pythia8").def("num2str", [](double const & a0) -> std::string { return Pythia8::num2str(a0); }, "", pybind11::arg(""));
	M("Pythia8").def("num2str", (std::string (*)(double, int)) &Pythia8::num2str, "C++: Pythia8::num2str(double, int) --> std::string", pybind11::arg(""), pybind11::arg("width"));

	// Pythia8::bool2str(bool, int) file:Pythia8/VinciaCommon.h line:177
	M("Pythia8").def("bool2str", [](bool const & a0) -> std::string { return Pythia8::bool2str(a0); }, "", pybind11::arg(""));
	M("Pythia8").def("bool2str", (std::string (*)(bool, int)) &Pythia8::bool2str, "C++: Pythia8::bool2str(bool, int) --> std::string", pybind11::arg(""), pybind11::arg("width"));

	// Pythia8::replaceString(std::string, const std::string &, const std::string &) file:Pythia8/VinciaCommon.h line:180
	M("Pythia8").def("replaceString", (std::string (*)(std::string, const std::string &, const std::string &)) &Pythia8::replaceString, "C++: Pythia8::replaceString(std::string, const std::string &, const std::string &) --> std::string", pybind11::arg("subject"), pybind11::arg("search"), pybind11::arg("replace"));

	// Pythia8::sanitizeFileName(std::string) file:Pythia8/VinciaCommon.h line:192
	M("Pythia8").def("sanitizeFileName", (std::string (*)(std::string)) &Pythia8::sanitizeFileName, "C++: Pythia8::sanitizeFileName(std::string) --> std::string", pybind11::arg("fileName"));

	// Pythia8::fileExists(const std::string &) file:Pythia8/VinciaCommon.h line:206
	M("Pythia8").def("fileExists", (bool (*)(const std::string &)) &Pythia8::fileExists, "C++: Pythia8::fileExists(const std::string &) --> bool", pybind11::arg("name"));

	{ // Pythia8::VinciaColour file:Pythia8/VinciaCommon.h line:221
		pybind11::class_<Pythia8::VinciaColour, std::shared_ptr<Pythia8::VinciaColour>> cl(M("Pythia8"), "VinciaColour", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::VinciaColour(); } ) );
		cl.def("initPtr", (void (Pythia8::VinciaColour::*)(class Pythia8::Info *)) &Pythia8::VinciaColour::initPtr, "C++: Pythia8::VinciaColour::initPtr(class Pythia8::Info *) --> void", pybind11::arg("infoPtrIn"));
		cl.def("init", (bool (Pythia8::VinciaColour::*)()) &Pythia8::VinciaColour::init, "C++: Pythia8::VinciaColour::init() --> bool");
		cl.def("colourise", (bool (Pythia8::VinciaColour::*)(int, class Pythia8::Event &)) &Pythia8::VinciaColour::colourise, "C++: Pythia8::VinciaColour::colourise(int, class Pythia8::Event &) --> bool", pybind11::arg("iSys"), pybind11::arg("event"));
		cl.def("makeColourMaps", (void (Pythia8::VinciaColour::*)(const int, const class Pythia8::Event &, class std::map<int, int, struct std::less<int>, class std::allocator<struct std::pair<const int, int> > > &, class std::map<int, int, struct std::less<int>, class std::allocator<struct std::pair<const int, int> > > &, class std::vector<struct std::pair<int, int>, class std::allocator<struct std::pair<int, int> > > &, const bool, const bool)) &Pythia8::VinciaColour::makeColourMaps, "C++: Pythia8::VinciaColour::makeColourMaps(const int, const class Pythia8::Event &, class std::map<int, int, struct std::less<int>, class std::allocator<struct std::pair<const int, int> > > &, class std::map<int, int, struct std::less<int>, class std::allocator<struct std::pair<const int, int> > > &, class std::vector<struct std::pair<int, int>, class std::allocator<struct std::pair<int, int> > > &, const bool, const bool) --> void", pybind11::arg("iSysIn"), pybind11::arg("event"), pybind11::arg("indexOfAcol"), pybind11::arg("indexOfCol"), pybind11::arg("antLC"), pybind11::arg("findFF"), pybind11::arg("findIX"));
		cl.def("inherit01", (bool (Pythia8::VinciaColour::*)(double, double)) &Pythia8::VinciaColour::inherit01, "C++: Pythia8::VinciaColour::inherit01(double, double) --> bool", pybind11::arg("s01"), pybind11::arg("s12"));
		cl.def("setVerbose", (void (Pythia8::VinciaColour::*)(int)) &Pythia8::VinciaColour::setVerbose, "C++: Pythia8::VinciaColour::setVerbose(int) --> void", pybind11::arg("verboseIn"));
	}
	{ // Pythia8::VinciaClustering file:Pythia8/VinciaCommon.h line:288
		pybind11::class_<Pythia8::VinciaClustering, std::shared_ptr<Pythia8::VinciaClustering>> cl(M("Pythia8"), "VinciaClustering", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::VinciaClustering(); } ) );
		cl.def( pybind11::init( [](Pythia8::VinciaClustering const &o){ return new Pythia8::VinciaClustering(o); } ) );
		cl.def_readwrite("child1", &Pythia8::VinciaClustering::child1);
		cl.def_readwrite("child2", &Pythia8::VinciaClustering::child2);
		cl.def_readwrite("child3", &Pythia8::VinciaClustering::child3);
		cl.def_readwrite("isFSR", &Pythia8::VinciaClustering::isFSR);
		cl.def_readwrite("antFunType", &Pythia8::VinciaClustering::antFunType);
		cl.def_readwrite("idMoth1", &Pythia8::VinciaClustering::idMoth1);
		cl.def_readwrite("idMoth2", &Pythia8::VinciaClustering::idMoth2);
		cl.def_readwrite("helChildren", &Pythia8::VinciaClustering::helChildren);
		cl.def_readwrite("helMothers", &Pythia8::VinciaClustering::helMothers);
		cl.def_readwrite("massesChildren", &Pythia8::VinciaClustering::massesChildren);
		cl.def_readwrite("massesMothers", &Pythia8::VinciaClustering::massesMothers);
		cl.def_readwrite("saj", &Pythia8::VinciaClustering::saj);
		cl.def_readwrite("sjb", &Pythia8::VinciaClustering::sjb);
		cl.def_readwrite("sab", &Pythia8::VinciaClustering::sab);
		cl.def_readwrite("invariants", &Pythia8::VinciaClustering::invariants);
		cl.def_readwrite("Q2res", &Pythia8::VinciaClustering::Q2res);
		cl.def_readwrite("Q2evol", &Pythia8::VinciaClustering::Q2evol);
		cl.def_readwrite("kMapType", &Pythia8::VinciaClustering::kMapType);
		cl.def("setChildren", (void (Pythia8::VinciaClustering::*)(class Pythia8::Event &, int, int, int)) &Pythia8::VinciaClustering::setChildren, "C++: Pythia8::VinciaClustering::setChildren(class Pythia8::Event &, int, int, int) --> void", pybind11::arg("state"), pybind11::arg("child1In"), pybind11::arg("child2In"), pybind11::arg("child3In"));
		cl.def("setChildren", (void (Pythia8::VinciaClustering::*)(class std::vector<class Pythia8::Particle, class std::allocator<class Pythia8::Particle> > &, int, int, int)) &Pythia8::VinciaClustering::setChildren, "C++: Pythia8::VinciaClustering::setChildren(class std::vector<class Pythia8::Particle, class std::allocator<class Pythia8::Particle> > &, int, int, int) --> void", pybind11::arg("state"), pybind11::arg("child1In"), pybind11::arg("child2In"), pybind11::arg("child3In"));
		cl.def("setMothers", (void (Pythia8::VinciaClustering::*)(int, int)) &Pythia8::VinciaClustering::setMothers, "C++: Pythia8::VinciaClustering::setMothers(int, int) --> void", pybind11::arg("idMoth1In"), pybind11::arg("idMoth2In"));
		cl.def("setAntenna", (void (Pythia8::VinciaClustering::*)(bool, enum Pythia8::AntFunType)) &Pythia8::VinciaClustering::setAntenna, "C++: Pythia8::VinciaClustering::setAntenna(bool, enum Pythia8::AntFunType) --> void", pybind11::arg("isFSRin"), pybind11::arg("antFunTypeIn"));
		cl.def("initInvariantAndMassVecs", (bool (Pythia8::VinciaClustering::*)()) &Pythia8::VinciaClustering::initInvariantAndMassVecs, "C++: Pythia8::VinciaClustering::initInvariantAndMassVecs() --> bool");
		cl.def("setInvariantsAndMasses", (void (Pythia8::VinciaClustering::*)(class Pythia8::Event &)) &Pythia8::VinciaClustering::setInvariantsAndMasses, "C++: Pythia8::VinciaClustering::setInvariantsAndMasses(class Pythia8::Event &) --> void", pybind11::arg("state"));
		cl.def("setInvariantsAndMasses", (void (Pythia8::VinciaClustering::*)(class std::vector<class Pythia8::Particle, class std::allocator<class Pythia8::Particle> > &)) &Pythia8::VinciaClustering::setInvariantsAndMasses, "C++: Pythia8::VinciaClustering::setInvariantsAndMasses(class std::vector<class Pythia8::Particle, class std::allocator<class Pythia8::Particle> > &) --> void", pybind11::arg("state"));
		cl.def("swap13", (void (Pythia8::VinciaClustering::*)()) &Pythia8::VinciaClustering::swap13, "C++: Pythia8::VinciaClustering::swap13() --> void");
		cl.def("isFF", (bool (Pythia8::VinciaClustering::*)() const) &Pythia8::VinciaClustering::isFF, "C++: Pythia8::VinciaClustering::isFF() const --> bool");
		cl.def("isRF", (bool (Pythia8::VinciaClustering::*)() const) &Pythia8::VinciaClustering::isRF, "C++: Pythia8::VinciaClustering::isRF() const --> bool");
		cl.def("isII", (bool (Pythia8::VinciaClustering::*)() const) &Pythia8::VinciaClustering::isII, "C++: Pythia8::VinciaClustering::isII() const --> bool");
		cl.def("isIF", (bool (Pythia8::VinciaClustering::*)() const) &Pythia8::VinciaClustering::isIF, "C++: Pythia8::VinciaClustering::isIF() const --> bool");
		cl.def("getAntName", (std::string (Pythia8::VinciaClustering::*)() const) &Pythia8::VinciaClustering::getAntName, "C++: Pythia8::VinciaClustering::getAntName() const --> std::string");
		cl.def("is2to3", (bool (Pythia8::VinciaClustering::*)() const) &Pythia8::VinciaClustering::is2to3, "C++: Pythia8::VinciaClustering::is2to3() const --> bool");
	}
}
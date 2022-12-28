#include <Pythia8/Basics.h>
#include <Pythia8/BeamParticle.h>
#include <Pythia8/Event.h>
#include <Pythia8/HIUserHooks.h>
#include <Pythia8/HadronWidths.h>
#include <Pythia8/Info.h>
#include <Pythia8/LHEF3.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/PartonSystems.h>
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

// Pythia8::SubCollisionModel file:Pythia8/HIUserHooks.h line:448
struct PyCallBack_Pythia8_SubCollisionModel : public Pythia8::SubCollisionModel {
	using Pythia8::SubCollisionModel::SubCollisionModel;

	bool init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SubCollisionModel::init();
	}
	using _binder_ret_0 = class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> >;
	_binder_ret_0 getCollisions(class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > & a0, class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > & a1, const class Pythia8::Vec4 & a2, double & a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "getCollisions");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_0>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_0> caster;
				return pybind11::detail::cast_ref<_binder_ret_0>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_0>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"SubCollisionModel::getCollisions\"");
	}
	struct Pythia8::SubCollisionModel::SigEst getSig() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "getSig");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<struct Pythia8::SubCollisionModel::SigEst>::value) {
				static pybind11::detail::overload_caster_t<struct Pythia8::SubCollisionModel::SigEst> caster;
				return pybind11::detail::cast_ref<struct Pythia8::SubCollisionModel::SigEst>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<struct Pythia8::SubCollisionModel::SigEst>(std::move(o));
		}
		return SubCollisionModel::getSig();
	}
	bool evolve() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "evolve");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SubCollisionModel::evolve();
	}
	void setParm(const class std::vector<double, class std::allocator<double> > & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "setParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SubCollisionModel::setParm(a0);
	}
	using _binder_ret_1 = class std::vector<double, class std::allocator<double> >;
	_binder_ret_1 getParm() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "getParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_1>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_1> caster;
				return pybind11::detail::cast_ref<_binder_ret_1>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_1>(std::move(o));
		}
		return SubCollisionModel::getParm();
	}
	using _binder_ret_2 = class std::vector<double, class std::allocator<double> >;
	_binder_ret_2 minParm() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "minParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_2>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_2> caster;
				return pybind11::detail::cast_ref<_binder_ret_2>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_2>(std::move(o));
		}
		return SubCollisionModel::minParm();
	}
	using _binder_ret_3 = class std::vector<double, class std::allocator<double> >;
	_binder_ret_3 maxParm() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "maxParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_3>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_3> caster;
				return pybind11::detail::cast_ref<_binder_ret_3>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_3>(std::move(o));
		}
		return SubCollisionModel::maxParm();
	}
};

// Pythia8::BlackSubCollisionModel file:Pythia8/HIUserHooks.h line:607
struct PyCallBack_Pythia8_BlackSubCollisionModel : public Pythia8::BlackSubCollisionModel {
	using Pythia8::BlackSubCollisionModel::BlackSubCollisionModel;

	using _binder_ret_0 = class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> >;
	_binder_ret_0 getCollisions(class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > & a0, class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > & a1, const class Pythia8::Vec4 & a2, double & a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::BlackSubCollisionModel *>(this), "getCollisions");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_0>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_0> caster;
				return pybind11::detail::cast_ref<_binder_ret_0>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_0>(std::move(o));
		}
		return BlackSubCollisionModel::getCollisions(a0, a1, a2, a3);
	}
	bool init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::BlackSubCollisionModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SubCollisionModel::init();
	}
	struct Pythia8::SubCollisionModel::SigEst getSig() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::BlackSubCollisionModel *>(this), "getSig");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<struct Pythia8::SubCollisionModel::SigEst>::value) {
				static pybind11::detail::overload_caster_t<struct Pythia8::SubCollisionModel::SigEst> caster;
				return pybind11::detail::cast_ref<struct Pythia8::SubCollisionModel::SigEst>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<struct Pythia8::SubCollisionModel::SigEst>(std::move(o));
		}
		return SubCollisionModel::getSig();
	}
	bool evolve() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::BlackSubCollisionModel *>(this), "evolve");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SubCollisionModel::evolve();
	}
	void setParm(const class std::vector<double, class std::allocator<double> > & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::BlackSubCollisionModel *>(this), "setParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SubCollisionModel::setParm(a0);
	}
	using _binder_ret_1 = class std::vector<double, class std::allocator<double> >;
	_binder_ret_1 getParm() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::BlackSubCollisionModel *>(this), "getParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_1>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_1> caster;
				return pybind11::detail::cast_ref<_binder_ret_1>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_1>(std::move(o));
		}
		return SubCollisionModel::getParm();
	}
	using _binder_ret_2 = class std::vector<double, class std::allocator<double> >;
	_binder_ret_2 minParm() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::BlackSubCollisionModel *>(this), "minParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_2>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_2> caster;
				return pybind11::detail::cast_ref<_binder_ret_2>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_2>(std::move(o));
		}
		return SubCollisionModel::minParm();
	}
	using _binder_ret_3 = class std::vector<double, class std::allocator<double> >;
	_binder_ret_3 maxParm() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::BlackSubCollisionModel *>(this), "maxParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_3>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_3> caster;
				return pybind11::detail::cast_ref<_binder_ret_3>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_3>(std::move(o));
		}
		return SubCollisionModel::maxParm();
	}
};

// Pythia8::NaiveSubCollisionModel file:Pythia8/HIUserHooks.h line:633
struct PyCallBack_Pythia8_NaiveSubCollisionModel : public Pythia8::NaiveSubCollisionModel {
	using Pythia8::NaiveSubCollisionModel::NaiveSubCollisionModel;

	using _binder_ret_0 = class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> >;
	_binder_ret_0 getCollisions(class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > & a0, class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > & a1, const class Pythia8::Vec4 & a2, double & a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::NaiveSubCollisionModel *>(this), "getCollisions");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_0>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_0> caster;
				return pybind11::detail::cast_ref<_binder_ret_0>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_0>(std::move(o));
		}
		return NaiveSubCollisionModel::getCollisions(a0, a1, a2, a3);
	}
	bool init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::NaiveSubCollisionModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SubCollisionModel::init();
	}
	struct Pythia8::SubCollisionModel::SigEst getSig() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::NaiveSubCollisionModel *>(this), "getSig");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<struct Pythia8::SubCollisionModel::SigEst>::value) {
				static pybind11::detail::overload_caster_t<struct Pythia8::SubCollisionModel::SigEst> caster;
				return pybind11::detail::cast_ref<struct Pythia8::SubCollisionModel::SigEst>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<struct Pythia8::SubCollisionModel::SigEst>(std::move(o));
		}
		return SubCollisionModel::getSig();
	}
	bool evolve() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::NaiveSubCollisionModel *>(this), "evolve");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SubCollisionModel::evolve();
	}
	void setParm(const class std::vector<double, class std::allocator<double> > & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::NaiveSubCollisionModel *>(this), "setParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SubCollisionModel::setParm(a0);
	}
	using _binder_ret_1 = class std::vector<double, class std::allocator<double> >;
	_binder_ret_1 getParm() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::NaiveSubCollisionModel *>(this), "getParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_1>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_1> caster;
				return pybind11::detail::cast_ref<_binder_ret_1>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_1>(std::move(o));
		}
		return SubCollisionModel::getParm();
	}
	using _binder_ret_2 = class std::vector<double, class std::allocator<double> >;
	_binder_ret_2 minParm() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::NaiveSubCollisionModel *>(this), "minParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_2>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_2> caster;
				return pybind11::detail::cast_ref<_binder_ret_2>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_2>(std::move(o));
		}
		return SubCollisionModel::minParm();
	}
	using _binder_ret_3 = class std::vector<double, class std::allocator<double> >;
	_binder_ret_3 maxParm() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::NaiveSubCollisionModel *>(this), "maxParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_3>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_3> caster;
				return pybind11::detail::cast_ref<_binder_ret_3>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_3>(std::move(o));
		}
		return SubCollisionModel::maxParm();
	}
};

// Pythia8::DoubleStrikman file:Pythia8/HIUserHooks.h line:658
struct PyCallBack_Pythia8_DoubleStrikman : public Pythia8::DoubleStrikman {
	using Pythia8::DoubleStrikman::DoubleStrikman;

	using _binder_ret_0 = class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> >;
	_binder_ret_0 getCollisions(class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > & a0, class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > & a1, const class Pythia8::Vec4 & a2, double & a3) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DoubleStrikman *>(this), "getCollisions");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_0>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_0> caster;
				return pybind11::detail::cast_ref<_binder_ret_0>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_0>(std::move(o));
		}
		return DoubleStrikman::getCollisions(a0, a1, a2, a3);
	}
	struct Pythia8::SubCollisionModel::SigEst getSig() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DoubleStrikman *>(this), "getSig");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<struct Pythia8::SubCollisionModel::SigEst>::value) {
				static pybind11::detail::overload_caster_t<struct Pythia8::SubCollisionModel::SigEst> caster;
				return pybind11::detail::cast_ref<struct Pythia8::SubCollisionModel::SigEst>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<struct Pythia8::SubCollisionModel::SigEst>(std::move(o));
		}
		return DoubleStrikman::getSig();
	}
	void setParm(const class std::vector<double, class std::allocator<double> > & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DoubleStrikman *>(this), "setParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return DoubleStrikman::setParm(a0);
	}
	using _binder_ret_1 = class std::vector<double, class std::allocator<double> >;
	_binder_ret_1 getParm() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DoubleStrikman *>(this), "getParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_1>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_1> caster;
				return pybind11::detail::cast_ref<_binder_ret_1>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_1>(std::move(o));
		}
		return DoubleStrikman::getParm();
	}
	using _binder_ret_2 = class std::vector<double, class std::allocator<double> >;
	_binder_ret_2 minParm() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DoubleStrikman *>(this), "minParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_2>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_2> caster;
				return pybind11::detail::cast_ref<_binder_ret_2>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_2>(std::move(o));
		}
		return DoubleStrikman::minParm();
	}
	using _binder_ret_3 = class std::vector<double, class std::allocator<double> >;
	_binder_ret_3 maxParm() const override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DoubleStrikman *>(this), "maxParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<_binder_ret_3>::value) {
				static pybind11::detail::overload_caster_t<_binder_ret_3> caster;
				return pybind11::detail::cast_ref<_binder_ret_3>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<_binder_ret_3>(std::move(o));
		}
		return DoubleStrikman::maxParm();
	}
	bool init() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DoubleStrikman *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SubCollisionModel::init();
	}
	bool evolve() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DoubleStrikman *>(this), "evolve");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SubCollisionModel::evolve();
	}
};

void bind_Pythia8_HIUserHooks_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::SubCollisionModel file:Pythia8/HIUserHooks.h line:448
		pybind11::class_<Pythia8::SubCollisionModel, std::shared_ptr<Pythia8::SubCollisionModel>, PyCallBack_Pythia8_SubCollisionModel> cl(M("Pythia8"), "SubCollisionModel", "The SubCollisionModel is is able to model the collision between two\n nucleons to tell which type of collision has occurred. The model\n may manipulate the corresponing state of the nucleons.");
		pybind11::handle cl_type = cl;

		{ // Pythia8::SubCollisionModel::SigEst file:Pythia8/HIUserHooks.h line:453
			auto & enclosing_class = cl;
			pybind11::class_<Pythia8::SubCollisionModel::SigEst, std::shared_ptr<Pythia8::SubCollisionModel::SigEst>> cl(enclosing_class, "SigEst", "Internal class to report cross section estimates.");
			pybind11::handle cl_type = cl;

			cl.def( pybind11::init( [](){ return new Pythia8::SubCollisionModel::SigEst(); } ) );
			cl.def( pybind11::init( [](Pythia8::SubCollisionModel::SigEst const &o){ return new Pythia8::SubCollisionModel::SigEst(o); } ) );
			cl.def_readwrite("sig", &Pythia8::SubCollisionModel::SigEst::sig);
			cl.def_readwrite("dsig2", &Pythia8::SubCollisionModel::SigEst::dsig2);
			cl.def_readwrite("fsig", &Pythia8::SubCollisionModel::SigEst::fsig);
			cl.def_readwrite("avNDb", &Pythia8::SubCollisionModel::SigEst::avNDb);
			cl.def_readwrite("davNDb2", &Pythia8::SubCollisionModel::SigEst::davNDb2);
		}

		cl.def( pybind11::init( [](){ return new PyCallBack_Pythia8_SubCollisionModel(); } ) );
		cl.def(pybind11::init<PyCallBack_Pythia8_SubCollisionModel const &>());
		cl.def_readwrite("NInt", &Pythia8::SubCollisionModel::NInt);
		cl.def_readwrite("NGen", &Pythia8::SubCollisionModel::NGen);
		cl.def_readwrite("NPop", &Pythia8::SubCollisionModel::NPop);
		cl.def_readwrite("sigFuzz", &Pythia8::SubCollisionModel::sigFuzz);
		cl.def_readwrite("fitPrint", &Pythia8::SubCollisionModel::fitPrint);
		cl.def_readwrite("avNDb", &Pythia8::SubCollisionModel::avNDb);
		cl.def("init", (bool (Pythia8::SubCollisionModel::*)()) &Pythia8::SubCollisionModel::init, "Virtual init method.\n\nC++: Pythia8::SubCollisionModel::init() --> bool");
		cl.def("initPtr", (void (Pythia8::SubCollisionModel::*)(class Pythia8::NucleusModel &, class Pythia8::NucleusModel &, class Pythia8::SigmaTotal &, class Pythia8::Settings &, class Pythia8::Info &, class Pythia8::Rndm &)) &Pythia8::SubCollisionModel::initPtr, "C++: Pythia8::SubCollisionModel::initPtr(class Pythia8::NucleusModel &, class Pythia8::NucleusModel &, class Pythia8::SigmaTotal &, class Pythia8::Settings &, class Pythia8::Info &, class Pythia8::Rndm &) --> void", pybind11::arg("projIn"), pybind11::arg("targIn"), pybind11::arg("sigTotIn"), pybind11::arg("settingsIn"), pybind11::arg("infoIn"), pybind11::arg("rndIn"));
		cl.def("getCollisions", (class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > (Pythia8::SubCollisionModel::*)(class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, const class Pythia8::Vec4 &, double &)) &Pythia8::SubCollisionModel::getCollisions, "Take two vectors of Nucleons and an impact parameter vector and\n produce the corrsponding sub-collisions. Note that states of the\n nucleons may be changed. The function in this abstract base\n class will reset the nucleon states for convenience. The\n sub-collisions are ordered in the impact parameter distance\n between the nucleons. The T-variable will be set to the summed\n elastic amplityde.\n\nC++: Pythia8::SubCollisionModel::getCollisions(class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, const class Pythia8::Vec4 &, double &) --> class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> >", pybind11::arg("proj"), pybind11::arg("targ"), pybind11::arg("bvec"), pybind11::arg("T"));
		cl.def("sigTot", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigTot, "The total cross section.\n\nC++: Pythia8::SubCollisionModel::sigTot() const --> double");
		cl.def("sigEl", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigEl, "The total cross section.\n\nC++: Pythia8::SubCollisionModel::sigEl() const --> double");
		cl.def("sigCDE", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigCDE, "The central diffractive excitation cross section.\n\nC++: Pythia8::SubCollisionModel::sigCDE() const --> double");
		cl.def("sigSDE", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigSDE, "The single diffractive excitation cross section (both sides summed).\n\nC++: Pythia8::SubCollisionModel::sigSDE() const --> double");
		cl.def("sigSDEP", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigSDEP, "The single diffractive excitation cross section (excited projectile).\n\nC++: Pythia8::SubCollisionModel::sigSDEP() const --> double");
		cl.def("sigSDET", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigSDET, "The single diffractive excitation cross section (excited target).\n\nC++: Pythia8::SubCollisionModel::sigSDET() const --> double");
		cl.def("sigDDE", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigDDE, "The double diffractive excitation cross section.\n\nC++: Pythia8::SubCollisionModel::sigDDE() const --> double");
		cl.def("sigND", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigND, "The non-diffractive (absorptive) cross section.\n\nC++: Pythia8::SubCollisionModel::sigND() const --> double");
		cl.def("bSlope", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::bSlope, "The elastic b-slope parameter.\n\nC++: Pythia8::SubCollisionModel::bSlope() const --> double");
		cl.def("getSig", (struct Pythia8::SubCollisionModel::SigEst (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::getSig, "Calculate the cross sections for the given set of parameters.\n\nC++: Pythia8::SubCollisionModel::getSig() const --> struct Pythia8::SubCollisionModel::SigEst");
		cl.def("avNDB", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::avNDB, "Return the average non-diffractive impact parameter.\n\nC++: Pythia8::SubCollisionModel::avNDB() const --> double");
		cl.def("Chi2", (double (Pythia8::SubCollisionModel::*)(const struct Pythia8::SubCollisionModel::SigEst &, int) const) &Pythia8::SubCollisionModel::Chi2, "Calculate the Chi2 for the given cross section estimates.\n\nC++: Pythia8::SubCollisionModel::Chi2(const struct Pythia8::SubCollisionModel::SigEst &, int) const --> double", pybind11::arg("sigs"), pybind11::arg("npar"));
		cl.def("evolve", (bool (Pythia8::SubCollisionModel::*)()) &Pythia8::SubCollisionModel::evolve, "Use a simlified genetic algorithm to fit the parameters.\n\nC++: Pythia8::SubCollisionModel::evolve() --> bool");
		cl.def("setParm", (void (Pythia8::SubCollisionModel::*)(const class std::vector<double, class std::allocator<double> > &)) &Pythia8::SubCollisionModel::setParm, "Set the parameters of this model.\n\nC++: Pythia8::SubCollisionModel::setParm(const class std::vector<double, class std::allocator<double> > &) --> void", pybind11::arg(""));
		cl.def("getParm", (class std::vector<double, class std::allocator<double> > (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::getParm, "Return the current parameters and the minimum and maximum\n allowed values for the parameters of this model.\n\nC++: Pythia8::SubCollisionModel::getParm() const --> class std::vector<double, class std::allocator<double> >");
		cl.def("minParm", (class std::vector<double, class std::allocator<double> > (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::minParm, "C++: Pythia8::SubCollisionModel::minParm() const --> class std::vector<double, class std::allocator<double> >");
		cl.def("maxParm", (class std::vector<double, class std::allocator<double> > (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::maxParm, "C++: Pythia8::SubCollisionModel::maxParm() const --> class std::vector<double, class std::allocator<double> >");
		cl.def("assign", (class Pythia8::SubCollisionModel & (Pythia8::SubCollisionModel::*)(const class Pythia8::SubCollisionModel &)) &Pythia8::SubCollisionModel::operator=, "C++: Pythia8::SubCollisionModel::operator=(const class Pythia8::SubCollisionModel &) --> class Pythia8::SubCollisionModel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::BlackSubCollisionModel file:Pythia8/HIUserHooks.h line:607
		pybind11::class_<Pythia8::BlackSubCollisionModel, std::shared_ptr<Pythia8::BlackSubCollisionModel>, PyCallBack_Pythia8_BlackSubCollisionModel, Pythia8::SubCollisionModel> cl(M("Pythia8"), "BlackSubCollisionModel", "The most naive sub-collision model, asuming static nucleons and\n the absorptive cross section equal to the total inelastic. No\n  fluctuations, meaning no diffraction.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::BlackSubCollisionModel(); }, [](){ return new PyCallBack_Pythia8_BlackSubCollisionModel(); } ) );
		cl.def("getCollisions", (class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > (Pythia8::BlackSubCollisionModel::*)(class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, const class Pythia8::Vec4 &, double &)) &Pythia8::BlackSubCollisionModel::getCollisions, "Take two vectors of Nucleons and an impact parameter vector and\n produce the corrsponding sub-collisions. Note that states of the\n nucleons may be changed.\n\nC++: Pythia8::BlackSubCollisionModel::getCollisions(class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, const class Pythia8::Vec4 &, double &) --> class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> >", pybind11::arg("proj"), pybind11::arg("targ"), pybind11::arg("bvec"), pybind11::arg("T"));
		cl.def("assign", (class Pythia8::BlackSubCollisionModel & (Pythia8::BlackSubCollisionModel::*)(const class Pythia8::BlackSubCollisionModel &)) &Pythia8::BlackSubCollisionModel::operator=, "C++: Pythia8::BlackSubCollisionModel::operator=(const class Pythia8::BlackSubCollisionModel &) --> class Pythia8::BlackSubCollisionModel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::NaiveSubCollisionModel file:Pythia8/HIUserHooks.h line:633
		pybind11::class_<Pythia8::NaiveSubCollisionModel, std::shared_ptr<Pythia8::NaiveSubCollisionModel>, PyCallBack_Pythia8_NaiveSubCollisionModel, Pythia8::SubCollisionModel> cl(M("Pythia8"), "NaiveSubCollisionModel", "A very simple sub-collision model, asuming static nucleons and\n just assuring that the individual nucleon-nucleon cross sections\n are preserved.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::NaiveSubCollisionModel(); }, [](){ return new PyCallBack_Pythia8_NaiveSubCollisionModel(); } ) );
		cl.def("getCollisions", (class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > (Pythia8::NaiveSubCollisionModel::*)(class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, const class Pythia8::Vec4 &, double &)) &Pythia8::NaiveSubCollisionModel::getCollisions, "Take two vectors of Nucleons and an impact parameter vector and\n produce the corrsponding sub-collisions. Note that states of the\n nucleons may be changed.\n\nC++: Pythia8::NaiveSubCollisionModel::getCollisions(class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, const class Pythia8::Vec4 &, double &) --> class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> >", pybind11::arg("proj"), pybind11::arg("targ"), pybind11::arg("bvec"), pybind11::arg("T"));
		cl.def("assign", (class Pythia8::NaiveSubCollisionModel & (Pythia8::NaiveSubCollisionModel::*)(const class Pythia8::NaiveSubCollisionModel &)) &Pythia8::NaiveSubCollisionModel::operator=, "C++: Pythia8::NaiveSubCollisionModel::operator=(const class Pythia8::NaiveSubCollisionModel &) --> class Pythia8::NaiveSubCollisionModel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::DoubleStrikman file:Pythia8/HIUserHooks.h line:658
		pybind11::class_<Pythia8::DoubleStrikman, std::shared_ptr<Pythia8::DoubleStrikman>, PyCallBack_Pythia8_DoubleStrikman, Pythia8::SubCollisionModel> cl(M("Pythia8"), "DoubleStrikman", "A more complicated model where each nucleon has a fluctuating\n \"radius\" according to a Strikman-inspired distribution.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Pythia8::DoubleStrikman(); }, [](){ return new PyCallBack_Pythia8_DoubleStrikman(); } ), "doc");
		cl.def( pybind11::init<int>(), pybind11::arg("modein") );

		cl.def_readwrite("r0", &Pythia8::DoubleStrikman::r0);
		cl.def_readwrite("k0", &Pythia8::DoubleStrikman::k0);
		cl.def_readwrite("sigd", &Pythia8::DoubleStrikman::sigd);
		cl.def_readwrite("alpha", &Pythia8::DoubleStrikman::alpha);
		cl.def_readwrite("opacityMode", &Pythia8::DoubleStrikman::opacityMode);
		cl.def("getCollisions", (class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> > (Pythia8::DoubleStrikman::*)(class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, const class Pythia8::Vec4 &, double &)) &Pythia8::DoubleStrikman::getCollisions, "Take two vectors of Nucleons and an impact parameter vector and\n produce the corrsponding sub-collisions. Note that states of the\n nucleons may be changed.\n\nC++: Pythia8::DoubleStrikman::getCollisions(class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, class std::vector<class Pythia8::Nucleon, class std::allocator<class Pythia8::Nucleon> > &, const class Pythia8::Vec4 &, double &) --> class std::multiset<class Pythia8::SubCollision, struct std::less<class Pythia8::SubCollision>, class std::allocator<class Pythia8::SubCollision> >", pybind11::arg("proj"), pybind11::arg("targ"), pybind11::arg("bvec"), pybind11::arg("T"));
		cl.def("gamma", (double (Pythia8::DoubleStrikman::*)() const) &Pythia8::DoubleStrikman::gamma, "Generate a random number according to a Gamma-distribution.\n\nC++: Pythia8::DoubleStrikman::gamma() const --> double");
		cl.def("opacity", (double (Pythia8::DoubleStrikman::*)(double) const) &Pythia8::DoubleStrikman::opacity, "The opacity of the collision at a given sigma.\n\nC++: Pythia8::DoubleStrikman::opacity(double) const --> double", pybind11::arg("sig"));
		cl.def("Tpt", (double (Pythia8::DoubleStrikman::*)(const class std::vector<double, class std::allocator<double> > &, const class std::vector<double, class std::allocator<double> > &, double) const) &Pythia8::DoubleStrikman::Tpt, "Return the elastic amplitude for a projectile and target state\n and the impact parameter between the corresponding nucleons.\n\nC++: Pythia8::DoubleStrikman::Tpt(const class std::vector<double, class std::allocator<double> > &, const class std::vector<double, class std::allocator<double> > &, double) const --> double", pybind11::arg("p"), pybind11::arg("t"), pybind11::arg("b"));
		cl.def("getSig", (struct Pythia8::SubCollisionModel::SigEst (Pythia8::DoubleStrikman::*)() const) &Pythia8::DoubleStrikman::getSig, "Calculate the cross sections for the given set of parameters.\n\nC++: Pythia8::DoubleStrikman::getSig() const --> struct Pythia8::SubCollisionModel::SigEst");
		cl.def("setParm", (void (Pythia8::DoubleStrikman::*)(const class std::vector<double, class std::allocator<double> > &)) &Pythia8::DoubleStrikman::setParm, "Set the parameters of this model.\n\nC++: Pythia8::DoubleStrikman::setParm(const class std::vector<double, class std::allocator<double> > &) --> void", pybind11::arg(""));
		cl.def("getParm", (class std::vector<double, class std::allocator<double> > (Pythia8::DoubleStrikman::*)() const) &Pythia8::DoubleStrikman::getParm, "Return the current parameters and the minimum and maximum\n allowed values for the parameters of this model.\n\nC++: Pythia8::DoubleStrikman::getParm() const --> class std::vector<double, class std::allocator<double> >");
		cl.def("minParm", (class std::vector<double, class std::allocator<double> > (Pythia8::DoubleStrikman::*)() const) &Pythia8::DoubleStrikman::minParm, "C++: Pythia8::DoubleStrikman::minParm() const --> class std::vector<double, class std::allocator<double> >");
		cl.def("maxParm", (class std::vector<double, class std::allocator<double> > (Pythia8::DoubleStrikman::*)() const) &Pythia8::DoubleStrikman::maxParm, "C++: Pythia8::DoubleStrikman::maxParm() const --> class std::vector<double, class std::allocator<double> >");
		cl.def_static("shuffle", (void (*)(double, double, double &, double &)) &Pythia8::DoubleStrikman::shuffle, "C++: Pythia8::DoubleStrikman::shuffle(double, double, double &, double &) --> void", pybind11::arg("PND1"), pybind11::arg("PND2"), pybind11::arg("PW1"), pybind11::arg("PW2"));
		cl.def_static("shuffel", (void (*)(double &, double, double, double, double)) &Pythia8::DoubleStrikman::shuffel, "C++: Pythia8::DoubleStrikman::shuffel(double &, double, double, double, double) --> void", pybind11::arg("PEL11"), pybind11::arg("P11"), pybind11::arg("P12"), pybind11::arg("P21"), pybind11::arg("P22"));
		cl.def_static("PNW", (double (*)(double, double, double)) &Pythia8::DoubleStrikman::PNW, "C++: Pythia8::DoubleStrikman::PNW(double, double, double) --> double", pybind11::arg("PWp"), pybind11::arg("PWt"), pybind11::arg("PND"));
		cl.def("assign", (class Pythia8::DoubleStrikman & (Pythia8::DoubleStrikman::*)(const class Pythia8::DoubleStrikman &)) &Pythia8::DoubleStrikman::operator=, "C++: Pythia8::DoubleStrikman::operator=(const class Pythia8::DoubleStrikman &) --> class Pythia8::DoubleStrikman &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}

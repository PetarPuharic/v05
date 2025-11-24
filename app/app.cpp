#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	tire::tire(double diameter) : diameter_(diameter) {}
	double tire::diameter() const {
		return diameter_;
	}


	vehicle::vehicle(int year) : year_(year) {}
	int vehicle::year() const {
		return year_;
	}


	product::product(double price) : price_(price) {}
	double product::price() const {
		return price_;
	}


	car::car(int year, double price, double tire_diameter)
		: vehicle(year), product(price), tire_(tire_diameter) {
	}
	double car::tire_diameter() const {
		return tire_;
	}
}
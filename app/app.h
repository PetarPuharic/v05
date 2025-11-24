#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 {
	constexpr double operator"" _inch(unsigned long long val) {
		return val * 2.54;
	}

	constexpr double operator"" _eur(unsigned long long val) {
		return val * 7.5345;
	}
	
	class tire {
	public:
		tire(double diameter);
		double diameter() const;
	private:
		double diameter_;
	};

	class vehicle {
	public:
		vehicle(int year);
		int year() const;
	private:
		int year_;
	};
	
	class product {
	public:
		product(double price);
		double price() const;
	private:
		double price_;
	};

	

	class car : public vehicle, public product {
	public:
		car(int year, double price, double tire_diameter);
		double tire_diameter() const;
	private:
		double tire_;
	};
}
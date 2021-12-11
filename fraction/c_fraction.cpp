#include "c_fraction.h"
#include<iostream>

c_fraction::c_fraction()
{
	numerator = denomerator = 1;
}

c_fraction::c_fraction(int num, int den)
{
	this->numerator = num;
	this->denomerator = den;
	reduce();
}

void c_fraction::print()
{
	std::cout << numerator << "/" << denomerator << "\n";
}

void c_fraction::reduce()
{
	for (int i = abs(numerator); i > 0; i--) 
	{
		if (numerator % i == 0 && denomerator % i == 0)
		{
			numerator /= i;
			denomerator /= i;
		}
	}
}

void c_fraction::plus(c_fraction fr)
{
	if(this->denomerator != fr.denomerator)
	{
		this->numerator *= fr.denomerator;
		fr.numerator *= this->denomerator;
		this->denomerator *= fr.denomerator;
	}
	this->numerator += fr.numerator;
	reduce();
}

void c_fraction::minus(c_fraction fr)
{
	if (this->denomerator != fr.denomerator)
	{
		this->numerator *= fr.denomerator;
		fr.numerator *= this->denomerator;
		this->denomerator *= fr.denomerator;
	}
	this->numerator -= fr.numerator;
	reduce();
}

void c_fraction::multiply(c_fraction fr)
{
	this->numerator *= fr.numerator;
	this->denomerator *= fr.denomerator;
	reduce();
}

void c_fraction::divide(c_fraction fr)
{
	std::swap(fr.numerator,fr.denomerator);
	multiply(fr);
	reduce();
}

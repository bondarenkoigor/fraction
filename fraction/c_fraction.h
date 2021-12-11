#pragma once
class c_fraction
{
private:
	int numerator;
	int denomerator;
public:
	c_fraction();
	c_fraction(int num, int den);
	void print();
	void reduce();
	void plus(c_fraction fr);
	void minus(c_fraction fr);
	void multiply(c_fraction fr);
	void divide(c_fraction fr);
	void inline setnum(int num)
	{
		this->numerator = num;
	}
	void inline setden(int den)
	{
		this->denomerator = den;
	}
	void inline setnumden(int num, int den)
	{
		this->numerator = num;
		this->denomerator = den;
	}
};


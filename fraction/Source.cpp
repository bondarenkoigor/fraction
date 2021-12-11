#include<iostream> 
#include"c_fraction.h"
int main()
{
	c_fraction fr1(3, 4);
	c_fraction fr2(2, 3);

	fr1.plus(fr2); //	3/4 + 2/3 =  17/12
	fr1.print();
	fr1.setnumden(3, 4);

	fr1.minus(fr2);//	3/4 - 2/3 = 1/12
	fr1.print();
	fr1.setnumden(3, 4);

	fr1.multiply(fr2);//	3/4 * 2/3 = 1/2
	fr1.print();
	fr1.setnumden(3, 4);

	fr1.divide(fr2);//	3/4 : 2/3 = 9/8
	fr1.print();
	fr1.setnumden(3, 4);
}
#include<iostream>

// Function definition
int sum(int a, int b, int c){

	return a + b + c;
}

// Another function
// With default values of all parameters
/*TODO: what happen if we change the type of parameters
from double to integer? */
double average(double d=1, double e=0, double g=0)
{
    return (d + e + g)/3;
}


int main(){

	// Definition of some variables
	int a = 4; int b = 2; int c = 1;

	// sum function call
	auto s = sum(a,b,c);
	std::cout << "s = " << s << std::endl;

	// average function call
	// Where are the input variables?
	double avg = average();
	std::cout << "avg = " << avg << std::endl;

	// We just declare the varibles here
	double d,e,g;
	// See what happens here 
	// if we do not initialize the values for d, e, and g.
	auto avg1 = average(d,e,g);
	std::cout << "avg1 = " << avg1 << std::endl;

	//Now intialize d
	d = 2; 
	// Where are the input variables e and g?
	auto avg2 = average(d);
	std::cout << "avg2 = " << avg2 << std::endl;

	//Now intialize e
	e = 4; 
	// Where are the input variable g?
	auto avg3 = average(d, e);
	std::cout << "avg3 = " << avg3 << std::endl;

	//Now intialize g
	g = 4; 
	auto avg4 = average(d, e, g);
	std::cout << "avg4 = " << avg4 << std::endl;

	return 0;
}

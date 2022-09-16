#include<iostream>


int square(int n) { return n*n; }
double square(double n) { return n*n; }

int main(){

        
	auto sq_i = square(4);
	auto sq_d = square(4.5);
	
	std::cout<<"integer square: " << sq_i << std::endl;
    std::cout<<"double square: " << sq_d << std::endl;

    return 0;
}


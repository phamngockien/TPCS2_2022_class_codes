#include<iostream>


int main(){

	int i = 0; //regular variable
	int &j = i; //ref variable

        std::cout<<"regular variable i: " << i << std::endl;
        std::cout<<"ref variable j: " << j << std::endl;
	std::cout<<"memory address of regular variable i is: " << &i << std::endl;
        std::cout<<"memory address of ref variable j is: " << &j << std::endl;

        std::cout<< std::endl;
	i = 2;
        std::cout<<"i is changed to: " << i << std::endl;
	std::cout<<"ref variable j: " << j << std::endl;

        std::cout<< std::endl;
        j = 6;
        std::cout<<"j is changed to: " << j << std::endl;
        std::cout<<"regular variable i: " << i << std::endl;


        return 0;
}


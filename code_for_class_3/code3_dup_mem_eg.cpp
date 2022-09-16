#include<iostream>

//TODO change to a ref variable
void print(int a){

	std::cout << "memory address of a in the print function: " << &a << std::endl;
	std::cout<<"the integer is: " << a << std::endl;
	a = 2;
	std::cout<<"the integer has been changed to: " << a << std::endl;

}

int main(){

        int a = 1;
        std::cout << "memory address of a: " << &a << std::endl;
 
        print(a);
	
	std::cout<<"the integer in the main function is: " << a << std::endl;

	return 0;
}

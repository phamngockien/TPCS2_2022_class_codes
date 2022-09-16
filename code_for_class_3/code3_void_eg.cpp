#include<iostream>


void print(int a){

	std::cout<<"the input integer is: " << a << std::endl;

}

int main(){

	int input;
	std::cout << "please input an integer: ";
	std::cin >> input;
	print(input);
	return 0;
}


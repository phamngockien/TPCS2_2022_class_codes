#include<iostream>

namespace earth{
	double radius(){return 6371;}
}

namespace one::two {
  int b() { return 2; }
}

int main(){
	auto radius = earth::radius();
	std::cout<<"radius of the earth is: " << radius << std::endl;

	std::cout<<std::endl;

	int b = one::two::b();
	std::cout<<"integer b in the namespace one::two is: " << b << std::endl;

	return 0;
}

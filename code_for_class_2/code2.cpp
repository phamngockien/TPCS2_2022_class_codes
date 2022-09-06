#include<iostream>

int sum(int a, int b, int c){

	return a + b + c;
}


int main(){

	 int a = 4; int b = 2; int c = 1;
	 auto s = sum(a,b,c);
	 std::cout << "s = " << s << std::endl;
	 return 0;
}

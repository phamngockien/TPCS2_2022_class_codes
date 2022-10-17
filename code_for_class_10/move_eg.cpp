#include<iostream>
#include<vector>

void f1(int& x) {std::cout << x << std::endl;}

void f2(const int& x) {std::cout << x << std::endl;}

void f3(int&& x) {std::cout << x << std::endl;}

void f4(int x) {std::cout << x << std::endl;}

int func(std::vector<int> vec)
{
    return vec[0];
}

int main()
{
    int i = 0; // i, here, is a lvalue 
    
    f1(i); //OK
    //f1(std::move(i)); //ERROR: std::move(i) is a rvalue (temporary)
    
    f2(i); //OK
    f2(std::move(i)); //OK: thanks to const
   
    //f3(i); //ERROR: the input argument of f3 should be an rvalue (temporary)
    f3(std::move(i)); //OK

    f4(i); //OK
    f4(std::move(i)); //OK

    //######################################################
    std::vector<int> v {1,2,3,4,5,6};

    std::cout<< "check if vector v is empty after initialization: ";
    std::cout<< v.empty() <<"\n";


    std::vector<int> w(std::move(v));
    std::cout<< "check if vector v is empty after move: ";
    std::cout<< v.empty() <<"\n";

    //-----------------------------------------------
    std::vector<int> vec1 {1,2,3,4,5,6};
    std::cout<< "check if vector vec1 is empty before func is called: ";
    std::cout<< vec1.empty() <<"\n";
    int first_element = func(std::move(vec1));
    std::cout<< "check if vector vec1 is empty after func is called: ";
    std::cout<< vec1.empty() <<"\n";

    return 0;
}
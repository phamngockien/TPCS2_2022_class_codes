#include<iostream>

//Here is class declaration
//Usually in a header file
template <typename T> 
class Array {  
private:
    T* ptr;
    int size;
  
public:
    Array(T arr[], int s); //Constructor declaration
    ~Array(); //Destructor declaration
    void print();
};

//----------------------------------------------------------
//Class definitions
//Usually in the cpp file  
template <typename T> 
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (unsigned int i = 0; i < size; ++i)
        ptr[i] = arr[i];
}

template <typename T> 
Array<T>::~Array()
{
    delete [] ptr;
}
  
template <typename T> 
void Array<T>::print()
{
    for (unsigned int i = 0; i < size; ++i)
        std::cout << *(ptr + i) << " "; 
    
    std::cout << std::endl;
}

//----------------------------------------------------------
int main()
{
    //Array object of ints
    std::cout << "Array of integers:\n"; 
    int arr[5] = { 1, 2, 3, 4, 5 };
    Array<int> a(arr, 5);
    a.print();
    
    //Array object of doubles
    std::cout << "\nArray of doubles:\n"; 
    double d_arr[3] = { 1.2, 2.6, 3.4};
    Array<double> d(d_arr, 3);
    d.print();

    return 0;
}
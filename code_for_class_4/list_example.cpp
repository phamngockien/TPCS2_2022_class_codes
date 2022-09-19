#include <iostream>
#include <list>

// Helper function
void print_list(std::list<int> list)
{
    // Print out the list
    std::cout << "{ ";
    for (int n : list) {
        std::cout << n << ", ";
    }
    std::cout << "} \n";
}

int main()
{
    // Create a list containing integers
    std::list<int> mylist = { 7, 5, 16, 8 };

    // Crete the second list by copying mylist
    std::list<int> list1 = mylist;

    // Add an integer to the front of the list
    mylist.push_front(25);
    // Add an integer to the back of the list
    mylist.push_back(13);

    std::cout << "\n"; 
    // Check if the list is empty?   
    std::cout << "Is mylist empty? " << mylist.empty() <<"\n";

    // Sorting the two lists above
    mylist.sort();
    list1.sort();
    //Display
    std::cout << "mylist: \n";
    print_list(mylist);
    std::cout << "list1: \n";
    print_list(list1);

    //merge two sorted list into mylist
    mylist.merge(list1);
    //Display
    std::cout << "mylist after merging: \n";
    print_list(mylist);

    

    return 0;
}
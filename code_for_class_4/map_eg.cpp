#include <map>
#include <string>
#include<iostream>

// Helper function
void print_map(auto m)
{
       
    for (const auto& n : m) {
      std::cout << n.first << " = " << n.second << "; ";
    }
    std::cout << std::endl;
}

int main()
{
    // Create a map of three (strings, int) pairs
    std::map<std::string, int> m { {"CPU", 10}, {"GPU", 15}, {"RAM", 20} };
  
    m["CPU"] = 25;  // update an existing value
    m["SSD"] = 30;  // insert a new value
 
    // using operator[] with non-existent key always performs an insert
    m["UPS"];

    // Display the map
    print_map(m);
 
    m.erase("GPU"); //erase element which has the key “GPU”

    // Display the map
    std::cout << "the map after deleting the key 'GPU' \n";
    print_map(m);
 
    m.clear(); //clear the contents
}
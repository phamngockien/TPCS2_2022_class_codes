#include"students.hpp"

Students::Students(std::string name, unsigned int ID, const double& HW, const double& exam)
    : _name(name)
    , _ID(ID)
    , _grade(std::make_unique<Grades>(HW, exam))
{
    
}

Students::~Students()
{
}

void Students::print_data() const
{
    std::cout << "name: " << _name << "\n";
    std::cout << "ID: " << _ID << "\n";
    std::cout << "final grade is: " << _grade->get_final_grad() << "\n";
}
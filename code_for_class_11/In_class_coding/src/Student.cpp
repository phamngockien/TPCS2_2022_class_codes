//We do this because all header files are in the headers folder
//and all source files (.cpp) are in the src folder
#include "../headers/Student.hpp"

Student::Student(std::string Input_Information)
{
    std::stringstream this_student(Input_Information);
    
    //Extracts and parses characters sequentially from the stream 
    //to interpret them as the representation of a value of the proper type
    //Note: this stream should be in the same order 
    //with respect to the information in the input file
    this_student >> _firstName;
    this_student >> _lastName;
    this_student >> _ID;
    this_student >> _no_HWs;

    //To control the input file
    if (_no_HWs == 0) 
    {
        std::cout << "There is an error in the input file!\n";
        std::cout << "This course should have at least 1 Homework \n";
        
    }
    //loop over the number of HWs to load the data for Hws' grades
    _HWs.resize(_no_HWs);
    for (unsigned int i = 0; i < _no_HWs; ++i)
    {
        this_student >> _HWs[i];
        
    }

    this_student >> _midterm;
    this_student >> _final;
    
    //Compute the GPA after getting the data from stringstream
    comp_GPA();

}

std::string Student::get_firstName() const
{
    return _firstName;
}

std::string Student::get_lastName() const
{
    return _lastName;
}

std::string Student::get_ID() const
{
    return _ID;
}

double Student::get_midterm() const
{
    return _midterm;
}

double Student::get_final() const
{
    return _final;
}

std::vector<double> Student::get_HWs() const
{
    return _HWs;
}

double Student::get_GPA() const
{
    return _GPA;
}


double Student::comp_GPA()
{
    //compute the average grade of all HWs
    //In this case we assume the number of HWs depends on
    //the input file.
    double HW_total = 0;
    for (auto v:_HWs) HW_total += v;
    HW_total /= _HWs.size();
    
    // for eg., GPA includes 40% of final, 30% for midterm, 
    // and 30% for average of all Homeworks
    _GPA = _final * 0.4 + _midterm * 0.3 + HW_total * 0.3;
    
    return _GPA;
}

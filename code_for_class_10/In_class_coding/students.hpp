#ifndef STUDENTS_H
#define STUDENTS_H

#include<string>
#include<iostream>
#include<memory>

#include"grades.hpp"

class Students
{

public:
    Students(std::string name, unsigned int ID, const double& HW, const double& exam);
    ~Students();

    void print_data() const; 

private:
    /* data */
    std::string _name;
    unsigned int _ID;
    std::unique_ptr<Grades> _grade;

};





#endif
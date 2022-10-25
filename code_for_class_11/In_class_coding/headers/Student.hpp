#ifndef STUDENT_H
#define STUDENT_H

#include<string>
#include<vector>
#include<iostream>
#include<sstream> //for stringstream

//Declaration of a class 
//that stores all input parameters loaded from a file
class Student
{
public:

    Student(std::string studentInformation); //User-defined default Constructor

    //member functions to query the data
    std::string get_firstName() const;
    std::string get_lastName() const;
    std::string get_ID() const;
    double get_midterm() const;
    double get_final() const;
    std::vector<double> get_HWs() const;
    double get_GPA() const; 

private:
    std::string _firstName;
    std::string _lastName;
    std::string _ID;
    double _midterm, _final, _GPA;
    std::vector<double> _HWs; //grades for homeworks
    unsigned int _no_HWs; //number of Homeworks

    //this is not a const member function
    //because we compute the GPA for each student 
    //after setting the values of midterm, final, and HWs
    double comp_GPA();
};


#endif
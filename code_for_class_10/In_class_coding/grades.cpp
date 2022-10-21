#include"grades.hpp"

Grades::Grades(const double& HW, const double& exam)
{
    this->HW = HW;
    this->exam = exam;
    this->comp_grade();
}

Grades::~Grades()
{
}



double Grades::get_final_grad()
{
    return final_grade;
}

void Grades::comp_grade()
{
    final_grade = 0.5*(HW + exam);
}
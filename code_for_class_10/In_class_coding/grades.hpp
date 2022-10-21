#ifndef GRADES_H
#define GRADES_H

class Grades
{
public:
    Grades(const double& HW, const double& exam);
    ~Grades();

    double get_final_grad();

private:
    /* data */
    double HW, exam, final_grade;

    void comp_grade();

    

};




#endif
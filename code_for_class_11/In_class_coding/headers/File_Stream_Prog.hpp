#ifndef FILE_STREAM_PROG_H
#define FILE_STREAM_PROG_H

#include<fstream>
#include<string>
#include<vector>
#include<iostream>

#include"../headers/Student.hpp"

//This class is to run the program
class File_Stream
{
public:
    void run(const std::string& infilePath,
             const std::string& outfilePath);
};

class In_File_Stream
{
public:
    void read_students_inform(const std::string& infilePath,
                              std::vector<Student> &students_list);

};

class Out_File_Stream
{
public:
    void write_students_grades(const std::string& outfilePath,
                               std::vector<Student>* students_list);
};



#endif
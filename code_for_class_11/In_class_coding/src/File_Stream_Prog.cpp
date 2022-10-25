#include"../headers/File_Stream_Prog.hpp"

void File_Stream::run(const std::string& infilePath,
                      const std::string& outfilePath)
{
    //We need a vector of students' information to store all the data
    std::vector<Student> students_list;

    //Now read the data from the input file
    In_File_Stream infile;
    infile.read_students_inform(infilePath, students_list);

    //Here we do something (Data Processing)

    //Finally, we write the post-processing data to the output file
    Out_File_Stream outfile;
    outfile.write_students_grades(outfilePath, &students_list);
}


void In_File_Stream::read_students_inform(const std::string& infilePath,
                                          std::vector<Student> &students_list)
{
    std::cout << "Reading from the input file ..." << std::endl;
    
    //Open file for reading
    std::fstream infile(infilePath, std::ios::in);
    if (infile.is_open())
    {
        std::string line;
        while (std::getline(infile,line))
        {
            //Load the information in each line
            //the user-defined constructor will read and parse the information.
            Student s(line);

            //We then store this piece of information to a list for later use
            students_list.push_back(s);
        }
        
        infile.close();
    }

    std::cout << "Finish Reading ..." << std::endl;
}

void Out_File_Stream::write_students_grades(const std::string& outfilePath,
                                            std::vector<Student>* students_list)
{
    std::cout << "Writing to a new file ..." << std::endl;

    //Open file for writing - overwrite the previous data
    std::fstream outfile(outfilePath, std::ios::out);
    if (outfile.is_open())
    {
        for (auto s : *students_list)
        {
            outfile << s.get_firstName() << " ";
            outfile << s.get_lastName() << " ";
            outfile << s.get_ID() << " ";

            /*for (auto v: s.get_HWs()) outfile << v << " ";
            outfile << s.get_midterm() << " ";
            outfile << s.get_final() << " ";*/

            outfile << s.get_GPA() << "\n";

        }
        
        outfile.close();
    }

}
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

void text_read(const std::string& filename)
{
    std::cout << "Reading from a file ..." << std::endl;
    
    //Open file for reading
    std::fstream infile(filename, std::ios::in);
    if (infile.is_open())
    {
        std::string line;
        while (std::getline(infile,line))
        {
            std::cout << line << std::endl;
        }
        
        infile.close();
    }
}

// Write text into a new file (or overwriting an existed file)
void new_text_write(std::string& filename)
{   
    std::cout << "Writing to a new file ..." << std::endl;

    //Open file for writing
    std::fstream outfile(filename, std::ios::out);
    if (outfile.is_open())
    {
        outfile << "Hello\n";
        outfile << "This is an example of writing to a new file.\n";
        
        outfile.close();
    }
}


// Write text into an existed file
// Append mode
void append_text_write(std::string& filename)
{
    std::cout << "Writing to an existed file ..." << std::endl;

    //Open file for writing
    std::fstream outfile(filename, std::ios::app);
    if (outfile.is_open())
    {
        outfile << "The example is simple.\n";
        outfile << "You may want to try reading an input file to some input parameters of type int, double, etc";
        
        outfile.close();
    }
}

int main()
{
    std::string myfile = "file_stream_example.txt";
    
    new_text_write(myfile);
    text_read(myfile);
    append_text_write(myfile);
    text_read(myfile);

}
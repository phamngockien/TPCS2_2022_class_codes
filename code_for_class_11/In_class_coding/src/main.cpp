#include"../headers/File_Stream_Prog.hpp"

int main(int argc, const char* argv[])
{
    if (argc != 3) 
    {
        std::cout << "The command to run this program should be:\n";
        std::cout << "./[executable_file_name] [input_file] [output_file]\n";
        std::cout << "For eg., ./a.out Input.txt Output.txt\n";
        return -1; //-1 means we got an error 
    }

    std::string input_path(argv[1]);
    std::string output_path(argv[2]);

    File_Stream stream_eg;
    stream_eg.run(input_path,output_path);

    return 0;
}
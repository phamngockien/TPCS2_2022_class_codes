/*
IOS Flags example.
These flags are technically ”ints” and they use binary logic to determine whether to turn a feature on or off
*/

#include<iostream>

int main()
{   
    // Flag for continue writing at the end of the opened file
    // all output operations are performed at the end of the file
    std::cout << "ios::app: " << std::ios::app << std::endl;

    // Flag for continue writing at the end of the opened file
    // you are free to seek thereafter.
    std::cout << "ios::ate: " << std::ios::ate << std::endl;

    // Flag for Using binary stream
    std::cout << "ios::binary: " << std::ios::binary << std::endl;
    
    // Flag for Using input stream
    std::cout << "ios::in: " << std::ios::in << std::endl;

    // Flag for Using output stream (Be aware of overwriting)
    std::cout << "ios::out: " << std::ios::out << std::endl;

    // Flag for output
    // when the file is opened, the old contents are immediately removed
    std::cout << "ios::trunc: " << std::ios::trunc << std::endl;
}
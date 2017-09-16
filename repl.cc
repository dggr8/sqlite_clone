#include <iostream>
#include <string>
#include <stdlib.h>

void print_prompt()
{
    std::cout << "db>";
}

void read_input(std::string & input_string)
{
    std::cin >> input_string;
}

int main(int argc, char* argv[])
{
    std::string input_string,exit_string;
    exit_string.assign(".exit");
    
    while (true) {
        print_prompt();
        read_input(input_string);
        
        if (input_string == exit_string) {
            exit(EXIT_SUCCESS);
        } else {
            std::cout << "Unrecognized command '" << input_string
                << "'.\n";
        }
    }
}

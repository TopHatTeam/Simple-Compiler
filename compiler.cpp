// filename program.cpp

// file was created: DEC/29/2024 - 4:48 PM / 16:48

// ----------------------------------------------------------------------------
// Simple Compiler - Andrew C Skatzes (c) 2024 | main file of the program
// ----------------------------------------------------------------------------

// Requires nasm and g++

// Includes the things the compiler needs to compile
#include <string>
#include <vector>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <iostream>

// header files
#include "headers/assembly.hpp"

int main()
{
    program ref;

    // Create the assembly file
    ofstream asmFile("src-prog.asm");

    // check if the file was sucessfully created
    if (asmFile.is_open())
    {
        // write to the file this assembly script; check in assembly.hpp to see behind the iron curtain.
        asmFile << ref.genAsm();

        asmFile.close();
        cout << "Assembly file created, and sucessfully writen to file!" << endl;
    }
    else 
    {
        cerr << "Error! could not create the file, reason...\n" << endl;
        cerr << "Lack of Administrator privileges...\n" << endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
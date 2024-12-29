// filename: program.hpp
// file was created: DEC/29/2024 - 3:42 PM / 15:42 

// ----------------------------------------------------------------------------
// Simpler Compiler - Andrew C Skatzes (c) 2024 | Header file of the program
// ----------------------------------------------------------------------------
#pragma once // just lets the compiler know that we only call this header file once

// Requires nasm and g++

// Includes the things the compiler needs to compile
#include <string>
#include <vector>
#include <stdio.h>
#include <sstream>

using namespace std;

class program
{

    public:

        stringstream ASM;
        string output;
        /*creates the assembly function push into the compiler */
        inline string pushAsm(const string& address, const string& value)
        {
            ASM << "    push " << address << "," << value << "\n";
            output = ASM.str();
            return output;
        }

        /*creates the assembly function pop into the compiler*/
        inline string popAsm(const string& address, const string& value)
        {
            ASM << "    pop " << address << "," << value << "\n";
            output = ASM.str();
            return output;
        }

        inline string genAsm()
        {
    
            // main action
            ASM << "global _start\n";
            ASM << "\n";
            ASM << "_start:\n";
            ASM << "    mov rdi, 69\n";
            ASM << "    mov rax, 60\n";
            ASM << "    syscall\n";
            output = ASM.str();
            return output;
        }

    private:

};

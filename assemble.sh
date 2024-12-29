echo this is a linux assembly! requires nasm and g++
g++ -o compiler compiler.cpp 
./compiler
nasm -f elf64 -o src-prog.o src-prog.asm
ld -s -o src-prog src-prog.o
./src-prog
echo $?
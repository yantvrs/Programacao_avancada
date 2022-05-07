#include <iostream>
#include "funcao1.hpp"
#include "funcao2.hpp"

using namespace std;

//Notas de aula:

/*
 * Código fonte ------compilação----->Código Objeto--> + --->linkedição-->Executável
 * [.cpp,.hpp]    (g++ -c code1.cpp)      [.o]         |     (g++ + code1.o + code2.o + code2.o + -o exec)
 *                                                     |
 * Código fonte ------compilação----->Código Objeto--->|
 * [.cpp,.hpp]    (g++ -c code2.cpp)      [.o]         |
 *                                                     |
 * Código fonte ------compilação----->Código Objeto-->/
 * [.cpp,.hpp]    (g++ -c code3.cpp)      [.o]

*/

int main()
{
    std::cout << "Alo, C++!\n";
    funcao1();
    funcao2();
    return 0;
}

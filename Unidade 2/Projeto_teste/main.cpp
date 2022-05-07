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


 Obs.: Torna-se mais vantajoso separar por partes essa função, pois o processo de compilação
       não é muito pesado para a máquina.

 >>O que são classes? São grupos de objetos que compartilham características comuns.

  Objeto real: entidade tangível que apresenta algum coportamento bem definido.
*Todo objeto possui:
  Identidade: é a propriedade que diferencia os objetos uns dos outros.
  Comportamento: define o que ele faz ou como reage perante mudanças.
  Estado: define as propredades do objeto, bem como seus valores.

*Objetos digitais também possuem as mesmas propriedades.
  Identidade: posição única na memória.
  Comportamento: funcionalidades implementadas.
  Estado: valores de variáveis.

>>O que é um objeto? É uma instância de uma classe.

*/

int main()
{
    std::cout << "Alo, C++!\n";
    funcao1();
    funcao2();
    return 0;
}

#include <iostream>
#include "funcao1.hpp"
#include "funcao2.hpp"

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

>>Pelo encapsulamento, o desenvolvedor pode organizar os elementos de uma
 abstração de modo que os utilizadores de uma determinada classe saibam
 apenas o necessário sobreo comportamento dos objetos que a ela pertencem.

>>A modificação do estado dos objetos se daria apenas pelos métodos da classe.

*/

class Vetor2d {
private:
    float x, y ;
public:
    void setX(float x_){ //O underline serve para diferenciar a variável da função
        x = x_;
    }
    float getX(){
        return x;
    }
};

int main()
{
    Vetor2d v;
    v.setX(3); //setX vai guardar o valor 3
    std::cout << v.getX(); //O acesso aos menbros é feito com o operador "."(ponto).


    std::cout << "Alo, C++!\n";
    funcao1();
    funcao2();
    return 0;
}

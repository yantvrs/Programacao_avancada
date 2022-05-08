#include "vetor2d.h"

void Vetor2d::setX(float x_){ // "::" É o operador de escopo.
   //Escopo é a propriedade que determina onde uma variável
   //pode ser utilizada como um identificador em um programa.

    if(x_ > 0){
        x = x_;
    }else{
        x = 0;
    }
}

float Vetor2d::getX(void){
    return x;
}

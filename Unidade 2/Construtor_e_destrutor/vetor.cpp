#include "vetor.h"
#include <iostream>

using namespace std;


Vetor::Vetor(){ //Especificando a função do construtor no código.
    x = y = 0;
    cout << "Construtor padrão" << endl;
}

Vetor::Vetor(float mx, float my)
{
    x = mx; y = my;
    cout << "Construtor com argumentos" << endl;
}

Vetor::~Vetor(){
    cout << "Destrutor da classe" << endl;
}

void Vetor::setX(float mx){
    x = mx;
}

void Vetor::setY(float my){
    y = my;
}

float Vetor::getX(){
    return x;
}

float Vetor::getY(){
    return y;
}

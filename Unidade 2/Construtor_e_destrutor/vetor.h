#ifndef VETOR_H
#define VETOR_H

class Vetor{

private:
    float x, y;
public:
    // >>Método construtor: É uma função menbro que deve possuir
    //o mesmo nome da classe.

    //Tipos: Padrão, com argumento e o especial.

    Vetor(); //Construtor default (Padrão)

    // *Construtor não tem tipo específico.
    // *Contrutor não é uma função que precisa ser chamada.

    // >>Destrutor: É uma função menbro da classe. É executado antes
    // do objeto finalizar.

    Vetor(float mx, float my); //Construtor com argumentos

    ~Vetor();

    void setX(float mx);
    void setY(float my);
    float getX(void);
    float getY(void);

};

#endif // VETOR_H

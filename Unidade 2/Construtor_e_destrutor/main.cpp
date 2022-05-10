#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
    Vetor v1, v2, v3(7,8);
    Vetor v4(3); // (x,y)=(3,0)
    //Vetor5(,6); Não pode

    cout << "v1.x = " << v1.getX() << endl;
    cout << "v1.y = " << v1.getY() << endl;

    v1.setX(3); v1.setY(4);
    v2.setX(5); v2.setY(6);

    return 0;
}

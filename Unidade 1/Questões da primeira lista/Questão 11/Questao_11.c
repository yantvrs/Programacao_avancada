//Suponha que as seguintes declara��es tenham sido realizadas:
//Identifique quais dos seguintes comandos � v�lido ou inv�lido:

#include <stdio.h>

int main(){
  float aloha[10], coisas[10][5], *pf, value = 2.2;
  int i=3;

 aloha[2] = value;
 scanf("%f", &aloha);
 // aloha = value"; - Inv�lida
 // printf("%f", aloha); - Inv�lida
 coisas[4][4] = aloha[3];
 // coisas[5] = aloha; - Inv�lida
 pf = value;
 pf = aloha;

 return 0;
}

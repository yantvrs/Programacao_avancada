//Suponha que as seguintes declarações tenham sido realizadas:
//Identifique quais dos seguintes comandos é válido ou inválido:

#include <stdio.h>

int main(){
  float aloha[10], coisas[10][5], *pf, value = 2.2;
  int i=3;

 aloha[2] = value;
 scanf("%f", &aloha);
 // aloha = value"; - Inválida
 // printf("%f", aloha); - Inválida
 coisas[4][4] = aloha[3];
 // coisas[5] = aloha; - Inválida
 pf = value;
 pf = aloha;

 return 0;
}

#include <stdio.h>

//7. Considerando a declara��o int mat[4], *p, x;, quais das seguintes express�es s�o v�lidas? Justifique.


int main(void) {
int mat[4], *p, x;
  
/*
p = mat + 1;
printf("%d\n",p);
*/
/*
p = mat++; //Inv�lida
printf("d%\n",p);
*/
/*
p = ++mat; //Inv�lida
printf("%d\n",p);
*/
  
x = (*mat)++;
printf("%d",x);
  return 0;
}

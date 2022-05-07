#include <stdio.h>

//7. Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas? Justifique.


int main(void) {
int mat[4], *p, x;
  
/*
p = mat + 1;
printf("%d\n",p);
*/
/*
p = mat++; //Inválida
printf("d%\n",p);
*/
/*
p = ++mat; //Inválida
printf("%d\n",p);
*/
  
x = (*mat)++;
printf("%d",x);
  return 0;
}

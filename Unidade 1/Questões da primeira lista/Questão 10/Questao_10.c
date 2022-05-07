#include <stdio.h>

int main()
{
  char x1[4];
  int x2[4];
  float x3[4];
  double x4[4];

  //Imprimindo os endereços de char
  printf("%d \n", x1+1);
  printf("%d \n", x1+2);
  printf("%d \n", x1+3);
  printf("\n");
   //Imprimindo os endereços de int
  printf("%d \n", x2+1);
  printf("%d \n", x2+2);
  printf("%d \n", x3+3);
  printf("\n");
   //Imprimindo os endereços de float
  printf("%d \n", x3+1);
  printf("%d \n", x3+2);
  printf("%d \n", x3+3);
  printf("\n");
   //Imprimindo os endereços de double
  printf("%d \n", x4+1);
  printf("%d \n", x4+2);
  printf("%d \n", x4+3);
  return 0;
  }

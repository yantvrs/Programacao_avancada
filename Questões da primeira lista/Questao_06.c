#include <stdio.h>

//6. Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor do terceiro elemento do vetor?

int main(void) {
  int pulo[] = {1,2,3,4,5,6,7,8,9,10};

  /*
  *(pulo + 2);
  *(pulo + 4); //Referencia o valor do terceiro elemento do vetor
  pulo + 4;
  pulo + 2;
  */

  printf("%d\n",*(pulo+2)); //3 Faz referência ao terceiro elemento do vetor
  printf("%d\n",*(pulo+4)); //5
  printf("%d\n",pulo +4); //1625486880
  printf("%d\n",pulo + 2); //1625486872
  
  return 0;
}

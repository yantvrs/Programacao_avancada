#include <stdio.h>
//8. O que fazem os seguintes programas em C?

//Vetor com 3 elementos e um comando for que exibe na tela os três conteúdos dos elementos dos vetores que serão interpretados pelo compilador como inteiro decimal 

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));
  }
}

//Vetor com 3 elementos e um comando for que exibe na tela os três endereços dos elementos contidos no vetor.

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}

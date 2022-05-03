/*Reimplemente o programa da quest�o anterior utilizando a fun��o qsort() do C. Comente o seu c�digo, explicando o que faz cada uma das linhas.*/

#include <stdio.h>
#include <stdlib.h>

// Vari�veis
int i, j;

// Fun��o para ordenar os valores, aqui faz a compara��o dos n�meros
int ordem(const void*a, const void*b){
  if(*(int*)a > *(int*)b){
    return 1;
  } else if(*(int*)a < *(int*)b){
    return -1;
  } else{
    return 0;
  }
}

//oa = ordem aleatoria
//tam = tamanho

int main(){
  float *oa;
  int tam;

// Tamanho do array
  printf("Qual o tamanho? ");
  scanf("%d", &tam);

// Aloca��o din�mica de mem�ria
  oa = malloc(tam * sizeof(float));

//Colocando os valores na ordem que a pessoa quer.
  for (i=0; i<tam;i++){
    printf("Coloque um valor: ");
    scanf("%f", &oa[i]);
  }

// Fun��o para ordenar os valores em ordem crescente
  qsort(oa , tam , sizeof(float), ordem);

// Imprimindo os valores em ordem crescente
  for (i= 0;i<tam;i++){
    printf("%f ", oa[i]);
  }
  return 0;
}


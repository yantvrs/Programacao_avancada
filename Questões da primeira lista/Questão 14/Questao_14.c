/*Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu código, explicando o que faz cada uma das linhas.*/

#include <stdio.h>
#include <stdlib.h>

// Variáveis
int i, j;

// Função para ordenar os valores, aqui faz a comparação dos números
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

// Alocação dinâmica de memória
  oa = malloc(tam * sizeof(float));

//Colocando os valores na ordem que a pessoa quer.
  for (i=0; i<tam;i++){
    printf("Coloque um valor: ");
    scanf("%f", &oa[i]);
  }

// Função para ordenar os valores em ordem crescente
  qsort(oa , tam , sizeof(float), ordem);

// Imprimindo os valores em ordem crescente
  for (i= 0;i<tam;i++){
    printf("%f ", oa[i]);
  }
  return 0;
}


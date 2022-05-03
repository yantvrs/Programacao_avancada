/*Implemente em linguagem C uma função em um programa de computador que leia n valores do tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para realizar a tarefa.*/

#include <stdio.h>
#include <stdlib.h>

int i, j;
float var;

//oc = ordem crescente
//t = tamanho

void ordem(float *oc, int t){
  for (i=0;i<t;i++){
    for (j=0;j<t;j++){
      if (oc[i]<oc[j]){
        var = oc[i];
        oc[i] = oc[j];
        oc[j] = var;
      }
    }
  }
  for (i= 0;i<t;i++){
    printf("%f ", oc[i]);
  }
}

//oa = ordem aleatoria
//tam = tamanho

int main(){
  float *oa;
  int tam;

  printf("Qual o tamanho? ");
  scanf("%d", &tam);

  oa = malloc(tam * sizeof(float));

  for (i=0; i<tam;i++){
    printf("Coloque um valor: ");
    scanf("%f", &oa[i]);
  }
  ordem(oa, tam);
  return 0;
}

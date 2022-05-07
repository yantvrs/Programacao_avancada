/*Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função de ordenação. Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para a função de comparação.*/

#include <stdio.h>
#include <stdlib.h>

int i, j;
float var;

//oc = ordem crescente
//t = tamanho

void ordenacao(float *oc, int t, int(*comparador)(const void *, const void *)){
  for (i=0;i<t;i++){
    for (j=0;j<t;j++){
      if ((comparador(&oc[i],&oc[j])) < 0){
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

  printf("Qual o tamanho? ");
  scanf("%d", &tam);

  oa = malloc(tam * sizeof(float));

  for (i=0; i<tam;i++){
    printf("Coloque um valor: ");
    scanf("%f", &oa[i]);
  }

  //ordena(x, n, crescente);
  //printf("\n");

  ordenacao(oa, tam, ordem);
  free(oa);
  return 0;
}

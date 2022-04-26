#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 1
//1)Alocar a matriz 3d com dimensões dadas pelo usuário;
//2)Desenhar um elipsoide com centre coincidente com o centro do paralelepípedo com raios determinados pelo usuário;
//3)Imprimir na tela um dos planos que o usuário escolher;

int main() {
  int i, j, k;
  int nl, nc, np;
  int a,b,c;
  int plano;

  float centro_i,centro_j,centro_k;
  float elips;
  
  //Paralelepípedo
  //Linhas
  printf("Primeiramente, informe as dimensões do paralelepípedo... \n");
  printf("Linhas: ");
  scanf("%d",&nl);
  //Colunas
  printf("Colunas: ");
  scanf("%d",&nc);
  //Planos
  printf("Planos: ");
  scanf("%d",&np);

  //Elipsóide
  //Raio a 
  printf("Agora, informe as dimensões dos raios do elipsoide... \n");
  printf("A: ");
  scanf("%d",&a);
  ///Raio b
  printf("B: ");
  scanf("%d",&b);
  //Raio c
  printf("C: ");
  scanf("%d",&c);

  //Plano que o usuário irá pedir para impressão na tela
  printf("Informe o plano que será impresso: ");
  scanf("%d",&plano);

  //Alocação
  int ***cubo = (int ***)calloc(np,sizeof(int**));
  //Planos
  for(k=0;k<np;k++){
    cubo[k] = (int**)calloc(nl, sizeof(int*));
    //Linhas
    for(i=0;i<nl;i++){
      cubo[k][i] = (int*)calloc(nc, sizeof(int));
    }
  }
  
  //Cálculo dos centros do paralelepípedo
  centro_i = nl/2;
  centro_j = nc/2;
  centro_k = np/2;

  //Alocando elipsoide no paralelepípedo
  for(k=0;k<np;k++){
    for(i=0;i<nl;i++){
      for(j=0;j<nc;j++){

        //Fórmula do elipsoide com preenchimento interno
        elips = (((i-centro_i)/a)*((i-centro_i)/a))+(((j-centro_j)/b)*((j-centro_j)/b))+(((k-centro_k)/c)*((k-centro_k)/c));
        
        //Condições para o preenchimento das elipses 
        if(elips<=1){
          cubo[k][i][j]=1; //Para construir o elipsoide
        }
        else{
          cubo[k][i][j]=0; //Para preencher os lugares vazios
        }
        elips = 0;
      }
    }
  }

  /*
  //Print de todos os planos
  for(k=0;k<np;k++){
    for(i=0;i<nl;i++){
      for(j=0;j<nc;j++){
        printf("%d ",cubo[k][i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }
  */
  
  //Print do plano dado
  printf("Plano %d\n",plano);
  for(i=0;i<nl;i++){
    for(j=0;j<nc;j++){
      printf("%d ",cubo[plano][i][j]);
    }
    printf("\n");
  }
  //Liberando a memória alocada 
  for(i =0;i<nl;i++){
    free(cubo[i]);
  }
  free(cubo);
  cubo = NULL;

  
  return 0;
}

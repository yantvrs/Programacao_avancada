#include <stdio.h>
#include <stdlib.h>

//QUEST�O 1
//1)Alocar a matriz 3d com dimens�es dadas pelo usu�rio;
//2)Desenhar um elipsoide com centre coincidente com o centro do paralelep�pedo com raios determinados pelo usu�rio;
//3)Imprimir na tela um dos planos que o usu�rio escolher;

int main() {
  int i, j, k;
  int nl, nc, np;
  int a,b,c;
  int plano;

  float centro_i,centro_j,centro_k;
  float elips;
  
  //Paralelep�pedo
  //Linhas
  printf("Primeiramente, informe as dimens�es do paralelep�pedo... \n");
  printf("Linhas: ");
  scanf("%d",&nl);
  //Colunas
  printf("Colunas: ");
  scanf("%d",&nc);
  //Planos
  printf("Planos: ");
  scanf("%d",&np);

  //Elips�ide
  //Raio a 
  printf("Agora, informe as dimens�es dos raios do elipsoide... \n");
  printf("A: ");
  scanf("%d",&a);
  ///Raio b
  printf("B: ");
  scanf("%d",&b);
  //Raio c
  printf("C: ");
  scanf("%d",&c);

  //Plano que o usu�rio ir� pedir para impress�o na tela
  printf("Informe o plano que ser� impresso: ");
  scanf("%d",&plano);

  //Aloca��o
  int ***cubo = (int ***)calloc(np,sizeof(int**));
  //Planos
  for(k=0;k<np;k++){
    cubo[k] = (int**)calloc(nl, sizeof(int*));
    //Linhas
    for(i=0;i<nl;i++){
      cubo[k][i] = (int*)calloc(nc, sizeof(int));
    }
  }
  
  //C�lculo dos centros do paralelep�pedo
  centro_i = nl/2;
  centro_j = nc/2;
  centro_k = np/2;

  //Alocando elipsoide no paralelep�pedo
  for(k=0;k<np;k++){
    for(i=0;i<nl;i++){
      for(j=0;j<nc;j++){

        //F�rmula do elipsoide com preenchimento interno
        elips = (((i-centro_i)/a)*((i-centro_i)/a))+(((j-centro_j)/b)*((j-centro_j)/b))+(((k-centro_k)/c)*((k-centro_k)/c));
        
        //Condi��es para o preenchimento das elipses 
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
  //Liberando a mem�ria alocada 
  for(i =0;i<nl;i++){
    free(cubo[i]);
  }
  free(cubo);
  cubo = NULL;

  
  return 0;
}

#include <stdio.h>

int main(){
	//3. Se i e j s�o vari�veis inteiras e p e q ponteiros para int, 
	//quais das seguintes express�es de atribui��o s�o ilegais?
	int i, j;
	
	int *p, *q;
  
	
  p = i; //Ilegal
  printf("%d\n", p);

  q = &j;
  printf("%d\n",q);

  p = &*&i;
  printf("%d\n",p);

  i = (*&)j; //Ilegal
  printf("%d\n",i);

  i = *&j;
  printf("%d\n",i);

  i = *&*&j;
  printf("%d\n",i);

  q = *p; //Ilegal
  printf("%d\n",q);

  i = (*p)++ + *q;
  printf("%d\n",i);
  
	return 0;
}

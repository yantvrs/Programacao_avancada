#include <stdio.h>

int main(){
	//3. Se i e j s�o vari�veis inteiras e p e q ponteiros para int, 
	//quais das seguintes express�es deatribui��o s�o ilegais?
	int i, j;
	int *p, *q;
	
	p = i; 
	q = &j;
	p = &*&i;
	i = (*&)j;
	i = *&j;
	i = *&*&j;
	q = *p;
	i = (*p)++ + *q;

	return 0;
}

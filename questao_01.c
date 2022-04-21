# include<stdio.h>

int main(){
	
	//1. Seja o seguinte trecho de programa:
    int i=3,j=5;
	int *p, *q;
	p = &i;
	q = &j;
	//Determine o valor das seguintes expressões:
	printf("%d = Verdade\n",p == &i);
	printf("%d\n", *p - *q);
	printf("%d\n", **&p);
	printf("%d\n", 3 - *p/(*q) + 7);
	
    return 0;
}

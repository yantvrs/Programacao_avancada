#include <stdio.h>

int main(void) {
int i=3,j=5;
int *p, *q; 
p = &i;
q = &j;

printf("%d = Verdade\n", p == &i);

printf("%d\n", *p - *q);

printf("%d\n", **&p);

printf("%d\n", 3 - *p/(*q) + 7);

  return 0;
}

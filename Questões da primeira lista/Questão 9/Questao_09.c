/*
Resposta:
  9. Seja x um vetor de 4 elementos, declarado da forma TIPO x[4];. Suponha que depois da
declara��o, x esteja armazenado no endere�o de mem�ria 4092 (ou seja, o endere�o de x[0]).
Suponha tamb�m que na m�quina seja usada uma vari�vel do tipo char ocupa 1 byte, do tipo
int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais ser�o os
valores de x+1, x+2 e x+3 se:

? x for declarado como char? Posi��o x = 4092 
                             Posi��o x+1 = 4093 
                             Posi��o x+2 = 4094
                             Posi��o x+3 = 4095

? x for declarado como int? Posi��o x = 4092 
                            Posi��o x+1 = 4094
                            Posi��o x+2 = 4096
                            Posi��o x+3 = 4098

? x for declarado como float? Posi��o x = 4092 
                              Posi��o x+1 = 4096 
                              Posi��o x+2 = 4100
                              Posi��o x+3 = 4104

? x for declarado como char? Posi��o x = 4092 
                             Posi��o x+1 = 4100 
                             Posi��o x+2 = 4108
                             Posi��o x+3 = 4116
*/

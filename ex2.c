#include <stdio.h>
#define max 8

int main() {

    int a=0,b=0, qual=0, i=1,c=0,aux=0;
printf("qual numero inteiro deseja conferir em fibonacci?\n");
scanf("%d",&qual);
printf("\n\n\n\n");

 printf("0\n");

 if(qual== 0)
 {
    printf ("Numero encontrado");
    return 0;
 }


 a=1;
 b=1;
 c=1;

 printf("1\n");
 printf("1\n");
 




while(i < max) 
{
if(c==qual)
{
    printf("o numero informado pertence a sequencia");
    return 0;
 }
 c=a+b;

 a=b;
 b=c;
 printf("%d \n", c);
 
 i++;

 }
 printf("numero nao encontrado");


  return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    int i,aux,fim,tam=0;

    char palavra[25] = {"Job Rotation"};

     tam = strlen(palavra);


     fim = tam - 1;

    for(i = 0; i < tam/2; i++){
        aux = palavra[i];
        palavra[i] = palavra[fim];
        palavra[fim] = aux;
        fim--;
    }

printf("%s\n", palavra);


    return 0;
}

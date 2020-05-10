#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Pendiente 
Se necesita documentar
*/
int main()
{
    int pos;
    char cadena[100] = {'a','e','i','o','u'};
    char palabra[100];

     
    printf("Ingrese la palabra a buscar: ");
    scanf("%s", &palabra);
     
    pos = _find(cadena, palabra);
     
    if(pos == -1){
		printf("Palabra no valida .!\n");

	}
    else{
		printf("Palabra valida %d.!\n", pos);
		return 0;
	}
}

int _find(char* cadena, char* palabra)
{
     
    int i, j = 0;
     
    for(i = 0; i < strlen(cadena); i++)
	{
        if(palabra[j] == cadena[i]){
            ++j;
     
            if(j == strlen(palabra))
                return (2 + i - j);
        }
     
        else j = 0;
    }
     
    return -1;
}
     
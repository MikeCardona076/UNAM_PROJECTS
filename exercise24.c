#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Indicar sí una frase es un palíndromo 

int main(char palabra[20])
{
    char comprobacion_frase();
    char palabra_comprobar[20];
    
    //Ingreso de la frase
    printf("Escribe una frase (Sin espacios): ");
    scanf("%s", &palabra_comprobar);
    comprobacion_frase(palabra_comprobar); //Llámamos a la funcíon/método
 
}

//Función para comprobar sí una frase es un palíndromo
char comprobacion_frase(char palabra[20]){
    
    int palindromo = 1;
    int j;

    fflush(stdout);
   
    j=strlen(palabra)-1;
    
    //En este ciclo se verifica sí la frase está correcta en ambas direcciones
    for(int i=0; i<strlen(palabra)/2; i++, j--) {
        if (*(palabra+i)!=*(palabra+j)) {
            palindromo = 0;
            break;//Para romper el búcle infinito
        }
    }
    if (palindromo)
        printf("\n La frase es un  palíndrimo.\n");
    else
        printf("\nLa frase no es un palíndrimo.\n");
 
    return (0);
}
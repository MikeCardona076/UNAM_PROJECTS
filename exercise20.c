#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
/*
Crear un arreglo de 100 números aleatorios del 1 al 1000. una vez creado,
mostrar el contenido y después organizado de forma que estén juntos 
los elementos pares e impares, después, volver a mostrar el arreglo
*/

int main(){
    //Declaramos array
    int numeroAleatorio[100]; 
    //Fin de declaración

    srand (time(NULL));
    for (int i=1; i<=100; i++) {
        numeroAleatorio[i] = rand()%1000;
        if( i % 2 == 0){
            printf("Número Par %d vale: %d\n", i, numeroAleatorio[i]);
        }
        else{
            printf("Número impar %d vale: %d\n", i, numeroAleatorio[i]);
        }
    }
}
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
    srand (time(NULL));//Librería para crear números random en un tiempo determinado

    for (int i=1; i<=100; i++) {
        numeroAleatorio[i] = rand()%1000;//Aquí le decimos el límite de números a escoger
        if( i % 2 == 0){
            printf("Número Par %d vale: %d\n", i, numeroAleatorio[i]);
        }
        else{
            printf("Número impar %d vale: %d\n", i, numeroAleatorio[i]);
        }
    }
}

/*
Nota:
Para poder darle la orden al programa del rango de números y en dónde comenzar
se debe establecer en el ciclo FOR  for (int i=1; i<=100; i++) 
Aquí le decimos que del 1 inicie y queremos sólo 100 números random

ahora el rango a escoger como máximo será programa en rand()%1000

*/
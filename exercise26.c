#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUMEROS 5 //Definimos el tamaño del arreglo

/* Descripción
Insertar en un arreglo números random sin repetir
*/


int main() {
    int NumerosRandom();//Declaramos la función

    NumerosRandom(); //Llámamos a nuestra función

   


} 

//Función que nos permite crear un arreglo con números aleatorios sin repetir
int NumerosRandom(){
    int numerosNoRePeticion[MAX_NUMEROS],numero, salir =0;
    do{
        for(int a=0;a<MAX_NUMEROS;a++)
        {

        // Géneramos un número aleatorio
        numero = rand()%100;

        // Comprobamos sí el número ya está siendo utilizado
        for( int i=0; i<a; i++ )
        {
            if( numerosNoRePeticion[i] == numero )
            {
            numero = 0; 
            break;
            }
        }

        if( numero != 0 ) 
        {
            numerosNoRePeticion[a] = numero;
            printf("%d.- %d \n",a,numero);
        }
        }
        
        //Nueva ronda
        printf("\n\nNueva ronda oprima 1: ");
        scanf(" %d",&salir);

    }
    while (salir != 2);
  
}
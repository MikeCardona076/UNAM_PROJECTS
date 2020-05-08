#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Que busque en dos matrices de nxm el número mayor en cada una de ellas
y lo sume 
*/

int main(){
    int SumaArreglos();

    SumaArreglos();
 
}

int SumaArreglos(){
    //VARIABLES
    int numeros1[1000], numeros2[1000],n,m, i = 0; 
    int mayor1, mayor2, suma;
    //FIN DE VARIABLES
    
    //Establecemos el valor de N (Longitud del arreglo)
    printf("Tamaño del primer arreglo : ");
    scanf("%d", &n);
    system("clear");
    printf("Ingresar elemento [%d]: ",i+1);
    for(i=0; i<n; i++)
    {   printf("Ingresar elemento [%d]: ",i+1);
        scanf("%d", &numeros1[i]);
    }

    //Establecemos el valor de m (Longitud del arreglo)
    printf("Tamaño del segundo arreglo : ");
    scanf("%d", &m);
    system("clear");
    for(i=0; i<m; i++)
    {   printf("Ingresar elemento [%d]: ",i+1);
        scanf("%d", &numeros2[i]);
    }
    
    //Mostramos ambos arrays
    //Primer Array
    for(i=0; i<n; i++)
    {
        printf(" Primer Array %d\n ",numeros1[i]);
        //Buscamos el número más grande
        if(numeros1[i] > mayor1) mayor1 = numeros1[i];
    }

    //Segundo Array
    for(i=0; i<m; i++)
    {
        printf(" Segundo Array %d\n",numeros2[i]);
        //Buscamos el número más grande
        if(numeros2[i] > mayor2) mayor2 = numeros2[i];
    }
    //Suma de ambos números
    suma = mayor1 + mayor2;

    printf("El mayor del primer array %d y el del segundo array es %d\n", mayor1, mayor2);
    printf("La suma es %d ", suma);

}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Que genere un sólo arreglo a partir de dos arreglos iniciales.
Intercalar sus valores
*/

int main(){
    //Declaración de funciones
    int Conversion();
    //Fin de declaración

    //Llámamos a nuestra función
    Conversion();


}

int Conversion(){

    int arreglo1[5] = {63, 92, 96, 7, 89 };
    int arreglo2[5] = {52, 49, 16, 8, 45};
    int arreglo3[10];

    memcpy(arreglo3, arreglo1, sizeof(int) * 5);
    memcpy(arreglo3 + 5, arreglo2, sizeof(int) * 5);

    unsigned short it = 0;
    for (; it < 10; it++){
        printf("%i  ", arreglo3[it]);
    }
}
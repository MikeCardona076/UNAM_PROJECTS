#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* Descripción
Qué imite el sorteo de Melate(Quiniela)
Imprimiendo en pantalla 100 resultados
*/

int main()
{
    int Melate();

    Melate();


}

//Función que permite crear resultados random
int Melate(){
    int i, si = 0;

    do
    {

    printf("Números de la suerte: \n");
    srand(time(NULL));

    for ( i = 1; i <= 6; i++ ) {
    printf( "%d ", ( 1 + rand() % 56 ) );

    if ( i % 6 == 0 ) {
    printf( "\n" );
    }

    }
    printf("\n\nRevancha oprima 1: ");
    scanf(" %d",&si);

    }while(si==1);

}
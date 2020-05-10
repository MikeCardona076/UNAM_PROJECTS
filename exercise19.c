#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

/*Que contenga una función llamada copiararreglo que reciba dos arreglos
y el tamaño de los mismos (deben ser del mismo tamaño) y que copien en el 
segundo arreglo el contenido del primero
*/

int main()
{
    int CopiarArreglo();

    CopiarArreglo();

    
} 

//Función para los arreglos
print(int a[],int n)
 { int i;
    for(i=0; i<n; i++)
    {
    
        printf("%d ",a[i]);
         
    }
 	
}

int CopiarArreglo(){
    int a[1000],b[1000],i,n,c = 0;
   
    printf("Tamaño del arreglo : ");
    scanf("%d", &n);
    system("clear");

    for(i=0; i<n; i++)
    {   printf("Ingresar elemento [%d]: ", i+1);
        scanf("%d", &a[i]);
    }
 
     for(i=0; i<n; i++)
    {
    	b[i]=a[i];
     }
 
  printf(" Primer arreglo   : ");
    print(a,n);
    
    printf("\nSegundo arreglo : "); 
    print(b,n);
     return 0;

}
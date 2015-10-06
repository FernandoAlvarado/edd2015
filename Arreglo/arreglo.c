#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,j;
	int *arreglo;

	printf("Ingresa el tamaño del arreglo\n");
	scanf("%d", &n);
        
        /*Reserva el tamaño en bytes*/
	arreglo = (int*) malloc(n*sizeof(int));

	for ( j = 0; j < n; j++){
		arreglo[j] = j + 1;
	}
	
	printf("El arreglo es: \n");
	for (j = 0; j < n; j++){
		printf("%d\n", arreglo[j]);
	}
	
	printf("\n");
free(arreglo);				
return 0;
}

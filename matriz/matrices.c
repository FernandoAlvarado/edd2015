#include<stdio.h>

void leer (int a[] [3], int b[] [3]);
void visualizar (int a[] [3], int b[][3]);
void multiplicar (int a[] [3], int b[][3]);
int i,j,s;

int main()
{
	int a[3][3];
	int b[3][3];
	leer(a,b);
	visualizar(a,b);
	multiplicar(a,b);
	return 0; 	
	
}

void leer (int a[] [3], int b[][3])
{
	
	puts("Introduzca los numeros");
	
	for (i = 0; i < 3; i++)
	{
		printf("Fila %d: ",i);
		
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	puts("Segunda matriz");

	for (i = 0; i < 3; i++)
        {
                printf("Fila %d: ",i + 1);

                for (j = 0; j < 3; j++)
                {
                        scanf("%d", &b[i][j]);
                }
        }
}

void visualizar (int a[] [3], int b[][3])
{
	puts("Primera matriz");	
        for (i = 0; i < 3; i++)
        {
		printf("\n");
                for (j = 0; j < 3; j++)
                {
			printf(" %d", a[i][j]);
                }
        }
	
	printf("\n\n");
	puts("Segunda Matriz");

	for (i = 0; i < 3; i++)
        {
                printf("\n");
                for (j = 0; j < 3; j++)
                {
                        printf(" %d", b[i][j]);
                }
        }
	
	printf("\n");

}

void multiplicar (int a[][3], int b[][3])
{
	int c [3][3];
	
	puts("El resultado de la matriz es: ");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
		{
			c[i][j] = 0;
			for (s = 0; s < 3; s++)
			{
				c [i][j] = (c [i][j] + (a[i][s] * b[s][j]));
	 
			}		
			
			printf("%d", c [i][j]);	
		}
	}
	
	printf("\n");
}

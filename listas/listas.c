#include<stdio.h>
#include<stdlib.h>

void lista_vacia( nodo *cabecera);
void insertar(nodo *cabecera, int valor_nuevo);

typedef struct nodo 
{
	int dato;
	struct nodo* enlace;
} nodo; 

int main ()
{
	nodo *actual;

	while( actual =¡ -1)
	{
		actual = actual -> dato;
	}
}

void lista_vacia ( nodo *cabecera)
{
	cabecera -> enlace = NULL;
}

void insertar (nodo *cabecera, int valor_nuevo)
{
	nodo *nuevo;

	nuevo = (nodo*) malloc(sizeof(nodo)* 1);
	nuevo -> dato  = valor_nuevo;

	nuevo -> enlace = cabecera -> enlace;
	cabecera -> enlace = nuevo;

}





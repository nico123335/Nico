#include <stdio.h>

int main()
{
	int valor= 30;
	int *punt= &valor;

	printf("contenido del puntero: %d\n", *punt);
	printf("Direccio del puntero: %u\n", punt);
	printf("Direccion de la variable: %u\n", &valor);
	printf("Direccion del puntero: %u\n", &punt);
	printf("Tamaño de la variable: %d\n", sizeof(valor));

	return 0;
}	
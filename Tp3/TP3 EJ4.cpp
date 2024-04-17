#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void copia(char cadena[], int longitud)
{
	int x;
	char copia[longitud];
	
	for(x=0;x<longitud;x++)
	{
		copia[x]=cadena[x];
	}
	
	printf("\nSe copio su palabra en este otro arreglo: %s", copia);
}

int main()
{
	char cadena[50];
	
	printf("Ingrese una palabra:");
	scanf("%s",&cadena);
	
	int longitud;
	
	longitud=strlen(cadena);
	
	copia(cadena, longitud);
	
}

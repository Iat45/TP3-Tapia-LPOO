#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void busca(char cadena[], char letra[], int longitud)
{
	int x,count=0;
	
	for(x=0;x<longitud;x++)
	{
		if(cadena[x]==letra[0])
		{
			count++;
		}
	}
	
	printf("\nLa letra solicitada se encuentra %d veces en la oracion",count);
}


int main()
{
	char cadena[100];
	char letra[50];
	
	printf("Ingrese su oracion:");
	fgets(cadena,50,stdin);
	
	printf("\nIngrese el caracter que desea buscar:");
	scanf("%s",&letra);
	
	int longitud;
	
	longitud=strlen(cadena);
	
	busca(cadena,letra,longitud);
}

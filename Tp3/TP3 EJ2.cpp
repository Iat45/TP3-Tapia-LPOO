#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumayprom(int vector[], int longitud)
{
	int x,resultado1=0,resultado2;
	for(x=0;x<longitud;x++)
	{
			resultado1=resultado1+vector[x];
	}
	
	resultado2=resultado1/longitud;
	
	printf("\nEl resultado de su suma es: %d",resultado1);
	printf("\nEl promedio es: %d",resultado2);
}


int main()
{
	int longitud;
	
	printf("Ingrese la longitud del vector:");
	scanf("%d",&longitud);
	
	int vector[longitud];
	int x;
	
	
	for(x=0;x<longitud;x++)
	{
		printf("\Ingrese el #%d valor:",x+1);
		scanf("%d",&vector[x]);
	}
	
	sumayprom(vector,longitud);
	
	
}



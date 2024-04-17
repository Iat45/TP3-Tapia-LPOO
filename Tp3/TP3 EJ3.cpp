#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void mayorymenor(int vector[],int longitud)
{
	int x,mayor=0;
	
	int menor=vector[0];
	
	for(x=0;x<longitud;x++)
	{
		if(vector[x]>=mayor)
		{
			mayor=vector[x];
		}
		
		if(vector[x]<=menor)
			{
				menor=vector[x];
			}
	}
	printf("\nEl mayor numero es: %d", mayor);
	printf("\nEl menor numero es: %d", menor);
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
	
	mayorymenor(vector, longitud);
}

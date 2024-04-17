#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void cambio(int *num1, int *num2);

int main()
{
	int x,y;
	
	printf("Ingrese los dos numeros que desee:");
	scanf("%d",&x);
	scanf("%d",&y);
		
	printf("El orden inicial era: %d | %d",x,y);
	
	cambio(&x, &y);
	
	printf("\nEl orden actual es: %d | %d",x,y);
	return 0;
}

void cambio(int *num1, int *num2)
{
	int c;
	
	c=*num1;
	*num1=*num2;
	*num2=c;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void concatenar(char cadena1[], char cadena2[], int long1, int long2)
{
	int x,y=0,longcompleta,count;
	
	longcompleta=long1+long2+1;
	
	char cadenacompleta[longcompleta];
	
	for(x=0;x<longcompleta;x++)
	{
		if(x<=long1)
		{
			cadenacompleta[x]=cadena1[x];
		}
		if(x>=long1)
		{
			cadenacompleta[x]=cadena2[y];
			y++;
		}
		count++;
	}
	
	printf("\nLa cadena quedo concatenada asi: %s",cadenacompleta);
	printf("\n %d",count);
	
}

int main()
{
	char cadena1[50];
	char cadena2[50];
	
	printf("Ingrese su primera oracion:");
	fgets(cadena1,50,stdin);
	
	printf("\nIngrese su segunda oracion:");
	fgets(cadena2,50,stdin);
	
	int long1,long2;
	
	long1=strlen(cadena1);
	
	long2=strlen(cadena2);
	
	concatenar(cadena1,cadena2,long1,long2);
}

#include <stdio.h>

int main()
{
	float r,s;
	printf("Saisir un réel");
	scanf("%f",&r);
	if (r>0)
	{
		printf("Le valeur absolut de %f est %f",r,r);
	}
	else
	{
		s=r*(-2)+r;
		printf("Le valeur absolut de %f est %f",r,s);
	}
}

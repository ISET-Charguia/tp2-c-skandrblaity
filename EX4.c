#include <stdio.h>

int main()
{
	int a;
	printf("Saisir une année ");
	scanf("%d",&a);
	if (a%4==0)
	{
		if (a%100!=0)
		{
			printf("Cette année est bisextile");
		}
	}
	else
	{
		printf("Cette année n'est  bisextile");
	}
    return 0;
}

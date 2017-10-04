#include <stdio.h>

int main()
{
	int a,d,b,e,c;
	printf("Saisir un entier ");
	scanf("%d",&a);
	if ((a>99) & (a<1000))
	{
		    b=a;
			c = a / 100;
		    a = a % 100;
		    d = a / 10;
		    e = a % 10;
		    printf("%d a %d centaines, %d dizaines et %d unitaires",b,c,d,e);
	}
	else
	{
		printf("Saisir un entier ");
		scanf("%d",&a);
	}

    return 0;
}

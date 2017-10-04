#include <stdio.h>

int main()
{
	int a,b,r;
	char x;
	printf("Saisir une équation");
	scanf("%d*%c+%d=%d",&a,&x,&b,&r);
	printf("%c = -%d / %d",x,b,a);
}

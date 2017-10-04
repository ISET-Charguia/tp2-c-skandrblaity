#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Saisir trois entiers ");
	scanf("%d %d %d",&a,&b,&c);
	if ((a>b) &(a>c))
	{
	 if (b>c)
	 {
		 printf("%d est le maximum et %d est le minimum",a,c);
	 }
	 else
	 {
		 printf("%d est le maximum et %d est le minimum",a,b);
	 }
	}


	if ((b>a) &(b>c))
	{
	 if (a>c)
	 {
		 printf("%d est le maximum et %d est le minimum",b,c);
	 }
	 else
	 {
		 printf("%d est le maximum et %d est le minimum",b,a);
	 }
	}

	else if ((c>a) &(c>b))
	{
		 if (b>a)
		 {
			 printf("%d est le maximum et %d est le minimum",c,a);
		 }
		 else
		 {
			 printf("%d est le maximum et %d est le minimum",c,b);
		 }
		}


	else
		 {
		 if (a<c)
		 {
			 printf("%d est le maximum et %d est le minimum",b,a);
		 }
		 else
		 {
			 printf("%d est le maximum et %d est le minimum",b,c);
		 }
		}


    return 0;
}

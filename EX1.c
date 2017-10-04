#include <stdio.h>

int main()
{
  int x;
  printf("Saisir un entier");
  scanf("%d",&x);
  if (x%3==0)
  {
	  printf("%d est divisible par 3",x);
  }
  else
  {
	  printf("%d n'est pas divisible par3",x);
  }
  return 0;
}

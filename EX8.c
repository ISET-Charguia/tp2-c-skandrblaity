#include <stdio.h>

int main()
{
	int a;
	printf("Saisir les années en dépôt ");
	scanf("%d",&a);
	 if (a <= 1)
	 {
		 printf("Le Taux d'intérêt est égal à 0.058");
	 }

	 else if ((a > 1) & (a<=3))
	 {
		 printf("Le Taux d'intérêt est égal à 0.065");
	 }

	 else if ((a > 3) & (a<=5))
	 {
		 printf("Le Taux d'intérêt est égal à 0.085");
	 }

	 else if (a > 5)
	 {
		 printf("Le Taux d'intérêt est égal à 0.095");
	 }
    return 0;
}

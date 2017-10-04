#include <stdio.h>

int main()
{
	char c;
	printf("Saisir un caractère ");
	scanf("%c",&c);
	 if ((c > 46) & (c < 58))
	 {
		 printf("%c est numérique",c);
	 }
	 else if ((c > 64) & (c < 91))
	 {
		 printf("%c est une lettre majuscule",c);
	 }else if ((c > 96) & (c < 123))
	 {
		 printf("%c est une lettre miniscule",c);
	 }
	 else
	 	 {
	 		 printf("%c est une symbole",c);
	 	 }
    return 0;
}

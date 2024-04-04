
#include <stdio.h> // подключение библиотеки 

int main()
{
	printf("Vvedite chislo\n");

	int chislo;
	scanf("%d", &chislo);
	chislo=chislo/100;
	printf("Vashe chislo tryohznachnoe?\n");
	if (chislo>=1 && chislo<=9) printf("YES\n");
	else printf("No\n");

return 0;
}  

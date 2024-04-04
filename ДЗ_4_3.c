
#include <stdio.h> // подключение библиотеки

int main()
{
	printf("Vvedite chislo\n");

	int chislo, ost;
	scanf("%d", &chislo);
	printf("Vse vashu cifry chisla chiotnue?\n");
	
	while (chislo>0)
		{ 
		ost=chislo%10;
			if (ost%2 !=0)
			{
			printf("NO");
			return 0;
			}
		chislo=chislo/10;
		}
	printf ("YES");

return 0;
}  

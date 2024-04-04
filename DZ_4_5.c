
#include <stdio.h> // подключение библиотеки

int main()
{
printf("Vvedite chislo\n");

int a, n, i, sum = 0, proizv = 1;
scanf("%d", &a);
printf("Schastlivye chisla: \n");
for (i = 11;i <= a;i++)
	{
	for(n = i; n > 0; n /= 10) // проходим по всем цифрам числа
		{
		sum += n % 10;
		proizv *= n % 10;
		}
	if (sum == proizv)
	
	printf("%d\t", i); // вывод на консоль колонками
	sum = 0;
	proizv = 1;
	}
return 0;
}

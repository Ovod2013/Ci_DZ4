
#include <stdio.h> // подключение библиотеки

int main()
{
printf("Vvedite chislo\n");

int n,m=0;
scanf("%d",&n);
while (n > 0)
	{
	m = m*10;
	m += n%10;
	//printf("%d\n",m);
	n = n/10;
	//printf("%d\n",n);
	}
printf("%d\n",m);
return 0;
}

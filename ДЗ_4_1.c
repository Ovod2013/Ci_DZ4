
#include <stdio.h> // подключение библиотеки

int main()
{
	printf("Vvedite dva chisla (a <= b) cherez probel\n");

	int a;
	int b;
	int sum = 0;
	scanf("%d%d", &a, &b);
	//printf("a=%d\n", a);
	//printf("b=%d\n", b);
	for (int i=b; i>=a; i--)
	{ 
		sum = sum + i * i;
		//printf("i=%d\n", i);
		//printf("sum=%d\n", sum);
		//sum = sum + i * i;
		
	}
	printf("summa kvadratov = %d\n", sum);

return 0;
}  

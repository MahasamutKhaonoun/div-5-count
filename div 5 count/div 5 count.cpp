#include<stdio.h>

int main()
{
	int num1, num2, cdiv=0;
	char name[60];
	printf("Please input your name : ");
	gets_s(name);
	printf("Welcome %s", name);
	printf("\nEnter first  number : ");
	scanf_s("%d", &num1);
	printf("Enter second number : ");
	scanf_s("%d", &num2);
	for (int i = num1;i <= num2;i++)
	{
		if ((i % 5) == 0)
		{
			printf("(%d) ", i);
			cdiv += 1;
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\nResult = %d", cdiv);
	return 0;
}
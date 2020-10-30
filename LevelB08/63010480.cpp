#include<stdio.h>
void makePatturnAgain(int x)
{
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
int main()
{
	int num;
	scanf_s("%d", &num);
	makePatturnAgain(num);
	return 0;
}
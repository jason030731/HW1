#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	scanf_s("%d", &a);
	if(a % 2 == 0)
	{
		printf("他是偶數");
	}
	else
	{
		printf("他是奇數");
	}

	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	scanf_s("%d", &a);
	if(a % 2 == 0)
	{
		printf("�L�O����");
	}
	else
	{
		printf("�L�O�_��");
	}

	system("pause");
	return 0;
}
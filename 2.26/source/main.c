#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b,c;
	scanf_s("%d %d",&a, &b);
	c = a % b;
	if (c == 0)
	{
		printf("�Ĥ@�ӼƬO�ĤG�Ӽƪ�����");
	}
	else
	{
		printf("�Ĥ@�ӼƤ��O�ĤG�Ӽƪ�����");
	}

	system("pause");
	return 0;
}
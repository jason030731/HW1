#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c,f;
	int  d, e;
	printf("�п�J�@��Ѫ��`���{��(������):\n");
	scanf_s("%f",&a);
	printf("�п�J�T�o�@���ɦh�ֿ� :\n");
	scanf_s("%f",&b);
	printf("�п�J�����@���ɯ��p�h�֤���:\n");
	scanf_s("%f", &c);
	printf("�п�J�@�Ѫ������O:\n");
	scanf_s("%d", &d);
	printf("�п�J�@�Ѫ��q��O(�L���O):\n");
	scanf_s("%d", &e);
	f = a*b/c+d+e;
	printf("�p�G�@�����ܥ����|�٤U:%.2f(�s�x��)\n", f);
	system("pause");
	return 0;
}
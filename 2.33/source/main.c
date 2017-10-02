#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c,f;
	int  d, e;
	printf("請輸入一整天的總里程數(公里數):\n");
	scanf_s("%f",&a);
	printf("請輸入汽油一公升多少錢 :\n");
	scanf_s("%f",&b);
	printf("請輸入平均一公升能行駛多少公里:\n");
	scanf_s("%f", &c);
	printf("請輸入一天的停車費:\n");
	scanf_s("%d", &d);
	printf("請輸入一天的通行費(過路費):\n");
	scanf_s("%d", &e);
	f = a*b/c+d+e;
	printf("如果共乘的話平均會省下:%.2f(新台幣)\n", f);
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;
	a = b = c = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b)
		{
		if (b > c)
		{
			printf("�̤j���O%d �̤p���O%d", a, c);
		}
		}
	if (a > b)
	{
		if (c > b)
		{
			if (a > c)
			{
				
					printf("�̤j���O%d �̤p���O%d", a, b);
			}
		}
	}
	if (b > a)
	{
		if (a > c)
		{
			printf("�̤j���O%d �̤p���O%d", b, c);
		}
	}
	if (b > a)
	{
		if (c > a)
		{
			if (b > c)
			{

				printf("�̤j���O%d �̤p���O%d", b, a);
			}
		}
	}
	if (c > b)
	{
		if (b > a)
		{
			printf("�̤j���O%d �̤p���O%d", c, a);
		}
	}
	if (c > b)
	{
		if (a > b)
		{
			if (c > a)
			{

				printf("�̤j���O%d �̤p���O%d", c, b);
			}
		}
	}
	system("pause");
	return 0;
}
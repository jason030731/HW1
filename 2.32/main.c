#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
	float weight, height,bmi;
	printf("請輸入身高和體重: ");
	scanf_s("%f %f", &height, &weight);
	bmi = weight  / (height*height/10000);
	if (bmi<=18.5)
	{
		printf("BMI=%.1f\nUnderweight\n", bmi);
	}
	if (18.5 < bmi &bmi < 24.9)
	{
		printf("BMI=%.1f\nNormal\n", bmi);
	}
	if (25 <= bmi & bmi < 29.9)
	{
		printf("BMI=%.1f\nOwerweight\n", bmi);
	}
	if (bmi >=30)
	{
		printf("BMI=%.1f\nObese\n", bmi);
	}
	system("pause");
	return 0;
}
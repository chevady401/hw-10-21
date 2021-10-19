#include<stdio.h>
#include<stdlib.h>

int main()
{
	float h,w,bmi;
printf("輸入身高體重(m)(kg)\n");
scanf_s("%f%f",&h,&w);


bmi= w/(h*h);

if (bmi >= 18.5 && bmi <= 24.9)
{
	printf("NORMAL\n");
}
if (bmi >= 25.5 && bmi <= 29.9)
{
	printf("OVERWEIGHT\n");
}
if (bmi <= 18.5 )
{
	printf("UNDERWEIGHT\n");
}
if (bmi >= 30)
{
	printf("OBESE\n");
}
printf("bmi = %f",bmi);
}
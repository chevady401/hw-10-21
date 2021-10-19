#include  <stdio.h>
#include  <stdlib.h>

int main()
{
	int n1;
	int n2;
	int n3;
	int max;
	int min;
	printf("輸入三個整數\n");
	scanf_s("%d%d%d", &n1,&n2,&n3);
	max = n1;
	min = n1;
	puts("");

	if (n2 > max)
	{
		max = n2;
	}
	if (n3 > max)
	{
		max = n3;	
	}
printf("%d\n", max);

	if (n2 < min)
	{
		min = n2;
	}
	if (n3 < min)
	{
		min = n3;
	}
printf("%d", min);


}

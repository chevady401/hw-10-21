#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int n1;
	printf("��J�ƭ�");
	scanf_s("%d", &n1);
	if (n1 % 2 == 0)
	{
		printf("even");
	}

	if (n1 % 2 == 1)
	{
		printf("odd");
	}


}
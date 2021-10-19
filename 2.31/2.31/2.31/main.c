#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i;
	int j;
	int k;
	printf("number   square    cube\n ");
	for (i = 0; i <= 10; i++)
	{
		j = i * i;
		k = j * i;
		printf("%d	   %d	    %d\n", i, j, k);
	}
	
	
	
}

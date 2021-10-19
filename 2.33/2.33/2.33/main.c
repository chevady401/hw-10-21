#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n1, n2, n3, n4, n5, total;
	
	 printf("一天的里程數");
		scanf_s("%f", &n1);
		printf("汽車一加侖油錢");
		scanf_s("%f", &n2);
		printf("一加侖的油能行駛幾公里");
		scanf_s("%f", &n3);
		printf("停車費");
		scanf_s("%f", &n4);
		printf("過路費");
		scanf_s("%f", &n5);
		total = (n1 / n3 * n2 + n4 + n5)/1;
		printf("開車花費總額%f",total);



}
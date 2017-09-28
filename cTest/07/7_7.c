#include <stdio.h>

int main()
{
	int multi(int n);
	int n =0;
	printf("input an integer number:");
	scanf("%d",&n);
	printf("%d!=%d\n", n, multi(n));
	return 0;
}

int multi(int n)
{
	int sum =0;
	if (n==0||n==1)
		sum = 1;
	else
		sum = n * multi(n-1);
	return sum;
}

#include <stdio.h>

int main()
{
	char a,b;
	printf("please input a character:");
	a=getchar();
	b=a+32;
	putchar(b);
	putchar('\n');
	return 0;
}

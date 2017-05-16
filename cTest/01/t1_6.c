#include <stdio.h>

int main()
	{
	int max(int x, int y, int z);
	int a, b, c, m;
	scanf("%d%d%d", &a,&b,&c);
	m = max(a,b,c);
	printf("max is: %d\n", m);
	}

int max(int x, int y, int z)
	{
	int m;
	if(x>y)  m=x;
	else m=y;
	if(m<z) m=z; 
	return m;
	}

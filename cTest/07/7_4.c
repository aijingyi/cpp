#include <stdio.h>

int main()
{
	float add(float x, float y);
	float x,y,c;
	printf("please inter two float numbsers:");
	scanf("%f%f",&x,&y);
	c = add(x,y);
	printf("x + y = %f\n",c);
	return 0;
}

float add(float a, float b)
{
	float z;
	z = a + b;
	return z;
}

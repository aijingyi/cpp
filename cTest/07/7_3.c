#include <stdio.h>

int main()
{
	float max(float x,float y);
	float a,b;
	float c;
	scanf("%f,%f",&a,&b);
	c=max(a,b);
	printf("max is %f\n",c);
	return 0;
}

float max(float x,float y)
{
	float z;
	z= x>y?x:y;
	return z;
}

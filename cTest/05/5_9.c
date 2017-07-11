#include <stdio.h>

int main()
{
	int i,n;
	printf("please enter a integer number,n=?");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
		if(n%i==0) break;
	if(i<n) printf("%d is not a primer number.\n",n);
	else printf("%d is a primer number.\n",n);
	return 0;
}

#include <stdio.h>


int main()
{
	int sort(int array[],int n);
	int a[10], i;
	printf("input array:\n");
	for(i=0;i<10;i++)
		scanf("%d", &a[i]);
	printf("\n");
	sort(a,10);
	printf("The sorted array is:\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}

int sort(int array[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k = i;
		for(j=i+1;j<n;j++)
			if(array[k]>array[j])
				k=j;
	t=array[k];array[k] = array[i];array[i]=t;

	}
	

}

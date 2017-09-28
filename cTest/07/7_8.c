#include <stdio.h>

int main()
{
	int hanoi(int n,char one, char two, char three);
	int m;
	printf("input the number of disks:");
	scanf("%d", &m);
	printf("The step to move %d disks:\n",m);
	hanoi(m,'A', 'B', 'C');
	return 0;
}

int hanoi(int n, char one,char two,char three)
{
	int move(char x, char y);
	if(n==1)
		move(one, three);
	else
	{
		hanoi(n-1, one, three, two);
		move(one, three);
		hanoi(n-1, two, one, three);
	}
	
}
int move(char x, char y)
{
	printf("%c->%c\n",x,y);
}

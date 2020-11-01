#include <stdio.h>

void TOH(int n,char x,char y,char z)
{
	if(n>0)
	{
		TOH(n-1,x,z,y);
		printf("\nDisk %d from %c to %c",n,x,y);
		TOH(n-1,z,y,x);
	}
}

int main()
{
	int n=3;
	printf("\nEnter the Number of Disks = ");
	scanf("%d",&n);
	TOH(n,'A','B','C');
}
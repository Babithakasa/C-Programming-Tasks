#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
int num1 = n/2*3;
for(i=0;i<n;i++)
{
	if (i==n/2 || j==n/2 || i+j==n/2 || i-j==n/2 || j-1==n/2 || i+j==num1)
	printf("*");
	else
	printf(" ");
}
printf("\n");
return 0;
}



//program for Tables
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter A number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d ",i*j);
		}
		printf("\n");
	}
}

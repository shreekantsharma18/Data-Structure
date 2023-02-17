#include<stdio.h>
void main()
{
	int n,i,sum=0;
	float avg;
	printf("Enter the no. of terms :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+i;
	avg=sum/2;
	printf("The Average of entered no. is :\n%f",avg);
	
}

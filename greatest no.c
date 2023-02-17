#include<stdio.h>
void main()
{int a,b,c;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("Enter the third number:");
scanf("%d",&c);
printf("the greatest number is:\n");
if(a>b&&a>c)
printf("%d",a);
else if(b>a&&b>c)
printf("%d",b);
else
printf("%d",c);
}

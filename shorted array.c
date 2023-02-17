#include<stdio.h>
void main()
{
    int a[50],n,i;
    printf("Enter the no of terms :");
    scanf("%d",&n);
    printf("Enter the elements of Array in ascending order :");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Elements of Entered Array Are :\n");
        for(i=0;i<n;i++)
            printf("%d\n",a[i]);

}


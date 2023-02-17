#include <stdio.h>
int main()
{
    int a[100], num, min, i, j, temp;
    printf("Shreekant Sharma\n2100320130162\n");
    printf("enter the number of element  ");
    scanf("%d", &num);
    printf("\n  Enter the Array Elements  :  ");
    for(i = 0; i < num; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < num - 1; i++)
   {
        min = i;
        for(j = i + 1; j < num; j++) {
            if(a[min] > a[j]) 
            {
                min = j;
            }
        }
        if(min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("\n sorted array is ");
    for(i = 0; i < num; i++)  
    {
        printf(" %d \t", a[i]);
    }
    printf("\n");
    return 0; 
}


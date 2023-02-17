#include <stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Shreekant sharma\n2100320130162\n");
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d integers\n", n);

    for (i=0;i<n;i++)
        scanf("%d", &array[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("Sorted list is:\n");
    for (i=0;i<n;i++)
        printf("%d ", array[i]);
    return 0;
}


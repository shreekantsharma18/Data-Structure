#include<stdio.h>
void multi();
void add();
int main(){
    int a[10][10],b[10][10],c[10][10],n,i,j,k;
    printf("Shreekant sharma\n2100320130162\n");
    printf("Enter the value of N (N <= 10): ");
    scanf("%d",&n);
    printf("Enter the elements of Matrix-A: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the elements of Matrix-B: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    multi(a,b,n);
    add(a,b,n);
    return 0;
}
void multi(int x[10][10],int y[10][10],int n)
{
    int i,k,j,c[10][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]+=x[i][k]*y[k][j];
            }
        }
    }
    printf("The product of the two matrices is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
void add(int x[10][10],int y[10][10],int n)
{
    int z[n][n],i,j;
    printf("The addition of the two matrices is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            z[i][j]=x[i][j]+y[i][j];
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }
}


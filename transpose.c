#include<stdio.h>
void transpose();
int main(){
    int a[10][10],m,n,i,j;
    printf("Shreekant sharma\n2100320130162\n");
    printf("Enter the value of M,N (N,M <= 10): ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of Matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);            
        }
    }
    printf("matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    transpose(a,m,n);
    return 0;
}
void transpose(int x[10][10],int m,int n)
{
    int y[n][m],i,j;
    printf("transpose is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            y[i][j]=x[j][i];
            printf("%d ",y[i][j]);
        }
        printf("\n");
    }
}


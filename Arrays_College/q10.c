#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("\n Enter size of matrix: ");
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    printf("\n Enter elements of matrix: ");
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    scanf("%d",&a[i][j]);
                                    b[j][i]=a[i][j];
                    }
    }
    printf("\n Transpose of matrix are: ");
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    printf("%d ",b[i][j]);
                    }
          printf("\n");
    }
    getch();
    return 0;
}

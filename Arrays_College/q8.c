#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int a[3][3];
    printf("\n Enter elements of a 3X3 matrix: ");
    for(i=0;i<3;i++)
    {
                    for(j=0;j<3;j++)
                    {
                                    scanf("%d",&a[i][j]);
                    }
    }
    printf("\n The entered matrix is: \n");
    for(i=0;i<3;i++)
    {
                    for(j=0;j<3;j++)
                    {
                                    printf("%d ",a[i][j]);
                    }
          printf("\n");
    }
    getch();
    return 0;
}

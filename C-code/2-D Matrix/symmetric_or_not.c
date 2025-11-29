//WAP to print the transpose of a matrix.
#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter the No. of Row & Column = ");
    scanf("%d%d",&r,&c);
    int a[r][c],f=0;
    if(r==c)
    {
    //input
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the no. = ");
            scanf("%d",&a[i][j]);
        }
    }
    //print
    printf("Matrix = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //transpose
    printf("\nTranspose Matrix = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    //symmetric
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=a[j][i])
               f=1;
               break;
        }
    }
    if(f==0)
       printf("Symmetric matrix");
    else
        printf("Not Symmetric matrix");
   }     
   else
     printf("It's Not Square Matrix so transpose can't be possible");
}
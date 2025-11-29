//WAP to take input into a 2-D matrix & print the matrix
#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter the No. of Row & Column = ");
    scanf("%d%d",&r,&c);
    //input
    int a[r][c];
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
}
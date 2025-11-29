//WAP to take input into a 2-D matrix & count no. of 1 present within a matrix
#include<stdio.h>
void main()
{
    int i,j,r,c,s=0;
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
            if(a[i][j]==1)
              s++;           
        }
        printf("\n");
    }   
    printf("\nTotal One = %d",s);
     
}
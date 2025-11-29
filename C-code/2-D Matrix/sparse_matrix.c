//WAP to wheater a matrix is sparce or not
#include<stdio.h>
void main()
{
    int i,j,r,c,k=0;
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
            if(a[i][j]==0 || a[i][j]==1)
              k++;           
        }
        printf("\n");
    }   
    //sparse
            if(k>(r*c)/2)
              printf("Sparse matrix");
            else
              printf("Not sparce matrix");           
}
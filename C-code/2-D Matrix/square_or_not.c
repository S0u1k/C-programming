//WAP to check whether a matrix is square or not 
#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter the No. of Row & Column = ");
    scanf("%d%d",&r,&c);
    //input
    int a[r][c];
    if(r==c)
    {
    printf("It's Square Matrix \n");
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
   else
     printf("It's Not Square Matrix");
}
//WAP to print lower right triangle of a matrix
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
     //lower right
     printf("\nlower right Triangle = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          if((i+j)>=r-1)
            printf("%d",a[i][j]);
          else 
            printf(" ");
        }
        printf("\n");
    }     
  }
   else
     printf("It's Not Square Matrix So upper right Triangle can't be formed");

}
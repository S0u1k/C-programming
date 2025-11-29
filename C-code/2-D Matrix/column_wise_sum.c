//WAP to take input into a 2-D matrix & calc. columnwise sum 
#include<stdio.h>
void main()
{
    int i,j,r,c,csum=0,k=1;
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
    //columnwise sum
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            csum+=a[j][i];
        }
        printf("%d. Columnwise sum = %d\n",k,csum);
        csum=0;
        k++;
    } 
}
/*//WAP to take input into a 2-D matrix & calc. columnwise sum 
#include<stdio.h>
void main()
{
    int i,j,r,c,csum=0,k=1;
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
    //columnwise sum
    for(j=0;j<c;j++)
    {
        for(i=0;i<r;i++)
        {
            csum+=a[i][j];
        }
        printf("%d. Columnwise sum = %d\n",k,csum);
        csum=0;
        k++;
    } 
}*/
///question no 40 2nd 
#include<stdio.h>
void nes(int);
void main()
{
    int n;
     printf("Enter the range =");
    scanf("%d",&n);
    nes(n);
}
void nes(int n)
{
    int i,j,k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}
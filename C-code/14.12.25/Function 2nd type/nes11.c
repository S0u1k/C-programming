//question no 11 2nd type
#include<stdio.h>
void nes(int);

void main()
{
     int n;
    printf("Enter the range = ");
    scanf("%d", &n);
    nes(n);
   
}
void nes(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
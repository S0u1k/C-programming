///question no 25 2nd type
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
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",(i+1)%2);
        }
        printf("\n");
    }
}
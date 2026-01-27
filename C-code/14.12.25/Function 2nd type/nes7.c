//question no 7 2nd type
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
    for(i=n;i>=1;i-=2)
    {
        for(j=1;j<=i;j+=2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
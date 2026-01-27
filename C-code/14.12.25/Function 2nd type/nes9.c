//question no 9 2nd type
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
        for(j=n;j>=i;j-=2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
//WAP to print your name n no. times 2nd type
#include<stdio.h>
void loop(int);
void main()
{
    int i,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    loop(n);
}
void loop(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("Madhu\n");
    }
}
//WAp to print () by using 2nd type
#include<stdio.h>
void nested1(int);
void main()
{
  int n;
  printf("Enter the Range = ");
  scanf("%d",&n);
  nested1(n);
}
void nested1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
          printf("* ");
        }
        printf("\n");
    }
}
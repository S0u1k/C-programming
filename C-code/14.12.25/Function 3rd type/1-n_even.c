//WAP to print 1-n  even term 3rd type
#include<stdio.h>
int even();
void main()
{
  int n=even();
    for(int i=2;i<=n;i=i+2)
      printf("%d ",i);
}
int even()
{
    int i,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    return n;
}
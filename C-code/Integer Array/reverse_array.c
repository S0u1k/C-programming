//WAP to print reverse of an array
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
    }
    //output
    
    printf("Array element = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nReverse= ");
    for(i=n-1;i>=0;i--)   // 20 45 30 75 18
    {
         printf("%d ",a[i]);
    }
}
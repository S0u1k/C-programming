//WAP to print max. element within an array()
#include<stdio.h>
void main()
{
    int i,n,max;
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
    max=a[0];    //  -7  -5 -3 -1 -9    max=-7
    printf("Array element = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        if(a[i]>max)
          max=a[i];
    }
    printf("Max Elemenet = %d",max);
}
//WAP to print max. element within an array(vul -ve element )
#include<stdio.h>
void main()
{
    int i,n,max=0;
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
        if(a[i]>max)
          max=a[i];
    }
    printf("\nMax Elemenet = %d",max);
}
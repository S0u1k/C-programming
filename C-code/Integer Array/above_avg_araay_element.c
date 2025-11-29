//WAP to print above avg. element's of an array
#include<stdio.h>
void main()
{
    int i,n,s=0,avg;
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
        s=s+a[i];
    }
    printf("\nSum = %d",s);
    avg=s/n;
    printf("\nAverage = %d",avg);
    //above average
    printf("\nAbove Average Element = \n");
    for(i=0;i<n;i++)
    {
       if(a[i]>avg)
         printf("a[%d] = %d\n",i,a[i]);
    }
}
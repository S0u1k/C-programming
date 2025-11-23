//WAP to take input into an integer array & print the array
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
    for(i=0;i<n;i++)
    {
       // printf("%d ",a[i]);
        printf("a[%d] = %d address = %u\n",i,a[i],&a[i]);
    }
}
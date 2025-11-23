//WAP to print even index within an array
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
    printf("\nEven Index Element = ");
    for(i=0;i<n;i++)   // 20 45 30 75 18
    {
       if(i%2==0)
         printf("%d ",a[i]);
    }
}
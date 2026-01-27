//WAP to check whether a no. is prime or not by using 3rd type
#include<stdio.h>
int prime();//func. declaration
int n;//global variable
void main()
{
    if(prime()==2)//calling
       printf("%d is Prime No. ",n);
    else
       printf("%d is NOT Prime No. ",n);
}
int prime()//definition
{
   int i,c=0;
   printf("Enter the No. = ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
        if(n%i==0)
          c++;
    }   
    return c;
}
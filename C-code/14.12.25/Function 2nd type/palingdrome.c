//WAp to check whether a no. is Palindrome or not by uisng 2nd type
#include<stdio.h>
void palindrome(int);
void main()
{
    int n;
    printf("Enter the No. = ");
    scanf("%d",&n);
    palindrome(n);
}
void palindrome(int n)
{
    int x,rem,rev=0;
    
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    if(rev==x)
      printf("%d is Palindrome No. ",x);
    else
      printf("%d is Not Palindrome No. ",x);
}
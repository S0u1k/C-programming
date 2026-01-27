//palindrome no. 3rd type
#include<stdio.h>
int pal();
void main()
{
   
    if(pal()==1)
     printf(" is Palindrome No. ");
    else
     printf(" is NOT Palindrome No. ");
}
int pal()
{
    int rem,rev=0;
    int n,x;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    printf("%d",x);
    if(rev==x)
     return 1;
    else
     return 0;
}
/*
//palindrome no. 3rd type
#include<stdio.h>
int pal();
void main()
{
   
    if(pal()==1)
     printf(" is Palindrome No. ");
    else
     printf(" is NOT Palindrome No. ");
}
int pal()
{
    int rem,rev=0;
    int n,x;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    printf("%d",x);
    if(rev==x)
     return 1;
    else
     return 0;
}*/
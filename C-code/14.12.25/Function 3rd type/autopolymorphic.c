//WAP to check whether a no. is autopolymorphic or not by using if statament 3rd type
#include<stdio.h>
int auto1();
void main()
{
    int a =auto1();
  if(a == 1)
    printf(" is autopolymorphic No.");
  else
   printf(" is not autopolymorphic No.");
}
int auto1()
{
  int x;
   printf("Enter the No. = ");
   scanf("%d",&x);
   printf("%d",x);
   if((x*x)%10==x || (x*x)%100==x)    
     return 1;
   else
     return 0;
}
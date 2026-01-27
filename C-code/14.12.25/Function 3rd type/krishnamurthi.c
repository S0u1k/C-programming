//Krishnamurthy no  145-> 1!+4!+5! 3rd type
#include<stdio.h>
int kri();
void main()
{
   int x=kri();
   if(x==1)
     printf(" is Krishnamurthy No. ");
   else
     printf(" is NOT Krishnamurthy No. ");
}
int kri()
{
   int n,x,rem,f=1,s=0,j;
   printf("Enter the No. = ");
   scanf("%d",&n);
   for(x=n;n>0;n=n/10)
   {
      rem=n%10;
      for(j=1;j<=rem;j++)
      {
         f=f*j;
      }
      s=s+f;
      f=1;
   }
   if(x==s)
     return 1;
   else
     return 0;
}
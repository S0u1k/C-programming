//WAP to check greatest between 3 no.
#include<stdio.h>
void main()
{
     int a,b,c;
     printf("enter 3 no=");
     scanf("%d%d%d",&a,&b,&c);
     if (a==b && a>c)
       printf("1st & 2nd equal & 3rd smallest");
     else if (a==b && c>a)
       printf("1st & 2nd equal & 3rd greatest");
     else if(b==c && b>a )
       printf("2nd & 3rd equal & 1st smallest");
     else if(b==c && a>b )
       printf("2nd & 3rd equal & 1st greatest");
     else if (a==c && a>b)
       printf("1st & 3rd equal & 2nd smallest");
      else if (a==c && b>a)
       printf("1st & 3rd equal & 2nd greatest");
     else if (a>b && a>c)
       printf("1st no %d is greatest",a);
     else if (b>c && b>a)
       printf("2nd no %d is greatest ",b);
     else if (a==b && b==c)
       printf("all are equal"); 
     else 
       printf("3rd no. %d is greatest",c);
}
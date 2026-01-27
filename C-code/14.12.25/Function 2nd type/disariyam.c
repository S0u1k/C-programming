// Disarium number - 2nd type
#include <stdio.h>
#include <math.h>

void dis(int n);

void main()
{
    int n;
    printf("Enter the no = ");
    scanf("%d", &n);
    dis(n);
}

void dis(int n)
{
    int x, c = 0, rem;int p;
    int s = 0;

    // count digits
    x = n;
   for(x=n;n>0;n/=10)
    { 
        c++; 
    }

    // calculate sum
   for(n=x;n>0;n/=10) 
     { rem=n%10; 
      p=pow(rem,c); 
      s+=p; 
      c--; 
     }

    if (x == s)
        printf("%d is Disarium no", x);
    else
        printf("%d is not Disarium no", x);
}

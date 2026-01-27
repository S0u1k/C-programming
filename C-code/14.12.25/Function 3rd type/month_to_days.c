//month to date function 3rd type
#include<stdio.h>
int month();
void main()
{
  printf("month = %d days",month());
}
int month()
{
    int m,d;
     printf("Enter the month=");
     scanf("%d",&m);
     d=m*31;
     printf("%d ",m);
     return d;
}
//designation checking
#include<stdio.h>
void main()
{
  int sal;
  printf("Enter the Salary = ");
  scanf("%d",&sal);
  if(sal>=0 && sal<=10000)
    printf("Peon");
  else if(sal>10000 && sal<=20000)
    printf("Clerk");
  else if(sal>20000 && sal<=40000)
    printf("Executive");
  else if(sal>40000 && sal<=80000)
    printf("Sr. Executive");
  else if(sal>80000 && sal<=150000)
    printf("Asst. Branch Manager");
  else if(sal>150000 && sal<=300000)
    printf("Branch Manager");
  else
    printf("CEO");
}
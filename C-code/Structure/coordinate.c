//7
#include<stdio.h>
#include<conio.h>
struct Point
{
   int x,y;       
};

void main()
{
  int i,n,f=1;
  printf("Enter the Range = ");
  scanf("%d",&n);
  struct Point p[n];
  //input
  for(i=0;i<n;i++)
  {
     printf("Enter the X co-ordinate Value = ");
     scanf("%d",&p[i].x);                
     printf("Enter the Y co-ordinate Value = ");
     scanf("%d",&p[i].y);
  }
  for(i=0;i<n;i++)
  {
     if(p[i].x<0 && p[i].y>0)
     { 
      printf(" (%d,%d) is at Second Quadrant\n",p[i].x,p[i].y);
      f=0;
      }
     else if(p[i].x>0 && p[i].y<0)
     {
      printf(" (%d,%d) is at 4th Quadrant",p[i].x,p[i].y);
      f=0;
      }
  }  
  if(f)
   printf("It's not present at no Quadrant");
  getch();
}
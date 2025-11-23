/*
   WAp to calc. electric bill
   >0  <200    --->1/- unit
   >200 <400   -->3/- unit exceeds 200
   >400 <600   -->5/- unit exceeds 400
   >600 <800 -->7/- unit exceeds 600
   >800    -->10/- unit exceeds 800
*/
#include<stdio.h>
void main()
{
   int unit,rs;
   printf("Enter the Unit = ");
   scanf("%d",&unit);
   if(unit>0 && unit<=200)
     rs=unit*1;
   else if(unit>200 && unit<=400)
     rs=(unit-200)*3+200;
   else if(unit>400 && unit<=600)
     rs=(unit-400)*5+800; 
   else if(unit>600 && unit<=800)
     rs=(unit-600)*7+1800; 
   else
     rs=(unit-800)*10+3200; 
    printf("Your Bill = %d",rs);
}
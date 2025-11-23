/*
      1   1
     121 121
    123212321
      12321
       121
        1
*/
#include<stdio.h>
void main()
{
    int i,j,sp,l;
    for(i=1;i<=3;i++)
    {
        for(sp=2;sp>=i;sp--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%d",j);
        for(j=i-1;j<=i-1;j++)
            (j==0)?printf(" "):printf("%d",j);
         for(sp=2;sp>=i;sp--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%d",j);
        for(j=i-1;j>=1;j--)
            (i==1)?printf(" "):printf("%d",j);
            printf("\n");
    }
   int k=3;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i+1;j++)
            printf(" ",j);
        
        for(j=1;j<=k;j++)
            printf("%d",j);
        for(int l=k-1;l>=1;l--)
            printf("%d",l);
        printf("\n");
        k--;
    }
}
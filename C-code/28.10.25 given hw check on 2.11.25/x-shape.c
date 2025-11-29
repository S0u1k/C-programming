#include <stdio.h>

void main() 
{
    
    int i, j,n;
    printf("Enter the no =");
    scanf("%d",&n);
    if (n % 2 == 0)
      n++;   // make even input one bigger

    for(i = 1; i <= n; i++) 
    {
        for(j = 1; j <= n; j++) 
        {
            if(j == i || j == (n - i + 1)) // condition for X shape
                printf("X ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

//question no 37
#include<stdio.h>
void main()
{
    int i, j, a, b, s;
    for(i = 1; i <= 4; i++)
    {
        a = 0;
        b = 1;
        for(j = 1; j <= i; j++)
        {
            if(j == 1)
                printf("1 ");
            else
            {
                s = a + b;
                printf("%d ", s);
                a = b;
                b = s;
            }
        }
        printf("\n");
    }
}

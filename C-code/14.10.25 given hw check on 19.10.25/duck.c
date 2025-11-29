// Duck No.
#include <stdio.h>
#include <string.h>
void main()
{
    char n[20];
    int s = 0, f = 0, i;
    printf("Enter the No.=");
    gets(n);
    if (n[0] == '0')
        f = 1;
    else
        for (i = 1; n[i] != '\0'; i++)
            if (n[i] == '0')
                break;
    if (f > 0)
        printf("The No %s is not Duck No.", n);
    else
        printf("The No %s is  Duck No.", n);
}
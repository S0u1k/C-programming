#include <stdio.h>

int main() 
{
    int m, p, ch, cs;
    float avg;

    printf("Enter the marks of Math, Physics, Chemistry, and Computer Science: ");
    scanf("%d%d%d%d", &m, &p, &ch, &cs);

    avg = (m + p + ch + cs) / 4.0; 
    printf("Total Average = %.2f\n", avg);

    if(avg >= 0 && avg < 40)
        printf("Your Grade = D");
    else if(avg >= 40 && avg < 60)
        printf("Your Grade = C");
    else if(avg >= 60 && avg < 80)
        printf("Your Grade = B");
    else if(avg >= 80 && avg < 90)
        printf("Your Grade = A");
    else if(avg >= 90 && avg <= 100)
        printf("Your Grade = AA");
    else
        printf("Invalid marks entered!");
}

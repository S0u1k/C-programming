/*grade calculation.
     4 subject input & avg.  calc. grade
    >0  <40   -->D
   >40 <60 -->C
   >60 <80  -->B
   >80  <90  --->A
  >90  <100 --> AA
*/
#include <stdio.h>
int main() 
{
    int m1, m2, m3, m4;
    float avg;
    printf("Enter marks of 4 subjects: ");
    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);
    avg = (m1 + m2 + m3 + m4) / 4.0;
    printf("Average = %.2f\n", avg);

    switch((int)avg) 
    {  
        case 1 ... 39:
            printf("Grade = D");
            break;
        case 40 ... 59:
            printf("Grade = C");
            break;
        case 60 ... 79:
            printf("Grade = B");
            break;
        case 80 ... 89:
            printf("Grade = A");
            break;
        case 90 ... 100:
            printf("Grade = AA");
            break;
        default:
            printf("Invalid marks");
    }
}

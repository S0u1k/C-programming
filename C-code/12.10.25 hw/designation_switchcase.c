#include <stdio.h>

int main()
 {
    int sal;
    printf("Enter the Salary = ");
    scanf("%d", &sal);
    switch(sal) 
    {
        case 0 ... 10000:
            printf("Peon");
            break;
        case 10001 ... 20000:
            printf("Clerk");
            break;
        case 20001 ... 40000:
            printf("Executive");
            break;
        case 40001 ... 80000:
            printf("Sr. Executive");
            break;
        case 80001 ... 150000:
            printf("Asst. Branch Manager");
            break;
        case 150001 ... 300000:
            printf("Branch Manager");
            break;
        default:
            printf("CEO");
    }
}

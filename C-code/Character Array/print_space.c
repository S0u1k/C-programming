//print only space within a string
#include <stdio.h>
int main()
 {
    char str[20];
    int i;
    printf("Enter the string: ");
    gets(str);   
    printf("Spaces in the string:\n");
    for(i = 0; str[i] != '\0'; i++)
     {
        if(str[i] == ' ') 
        {
            printf("_ ");
            
        }
    }
}

#include<stdio.h>

void main()
{
    char x[50];
    int i;

    printf("Enter a string: ");
    gets(x);

    printf("Vowels: ");

    for(i = 0; x[i] != '\0'; i++)
    {
        if(x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U' ||
           x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u')
        {
            printf("%c", x[i]);
        }
    }
}


//switch case
/*
#include<stdio.h>

void main()
{
    char x[50];
    int i;

    printf("Enter a string: ");
    gets(x);

    printf("Vowels: ");

    for(i = 0; x[i] != '\0'; i++)
    {
        switch(x[i])
        {
            case 'A': 
            case 'E': 
            case 'I': 
            case 'O': 
            case 'U':
            case 'a': 
            case 'e': 
            case 'i': 
            case 'o': 
            case 'u':
                printf("%c", x[i]);  // print vowel
                break;

            default:
                // do nothing for consonants
                break;
        }
    }
}

*/
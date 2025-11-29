#include<stdio.h>

void main()
{
    char x[50];
    int i;

    printf("Enter a string: ");
    gets(x);

    printf("Consonants: ");

    for(i = 0; x[i] != '\0'; i++)
    {
        // check vowel
        if(x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U' ||
           x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u')
        {
            continue;  // skip vowels
        }

        // check alphabets only
        if( (x[i] >= 'A' && x[i] <= 'Z') ||
            (x[i] >= 'a' && x[i] <= 'z') )
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

    printf("Consonants: ");

    for(i = 0; x[i] != '\0'; i++)
    {
        switch(x[i])
        {
            // all vowels → skip
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
                break;

            default:
                // print only alphabets (non-vowels)
                if( (x[i] >= 'A' && x[i] <= 'Z') ||
                    (x[i] >= 'a' && x[i] <= 'z') )
                {
                    printf("%c", x[i]);
                }
        }
    }
}

*/
#include<stdio.h>

int main() {
    char str[20];
    int i;

    printf("Enter the string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) 
    {

        switch(str[i]) {

            case 'a': 
            case 'e': 
            case 'i': 
            case 'o': 
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                str[i] = '#';
                break;

            default:
                break;
        }
    }

    printf("Output = %s", str);
}


/*
#include<stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter the string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'||
           str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U') {

            str[i] = '#';
        }
    }

    printf("Output = %s", str);

    return 0;
}

*/
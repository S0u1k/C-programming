//count no. of vowel ,consonant, space within a string
#include<stdio.h>
void main()
{
    char x[20];
    int i,v=0,c=0,sp=0;
    printf("Enter the Stirng = ");
    gets(x);
    printf("String = %s",x);
    for(i=0;x[i]!='\0';i++)
    {
        switch(x[i])
        {
            case 'a':case 'A':
            case 'e':case 'E':
            case 'o':case 'O':
            case 'u':case 'U':
            case 'i':case 'I':
               v++;
               break;
            case ' ':
              sp++;
              break;
            default:
              c++;
        }
    }
    printf("\nVowel = %d\nConsonant = %d\nSpace =%d",v,c,sp);
}
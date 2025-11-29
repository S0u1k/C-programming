#include<stdio.h>
void main()
{
    char x[20], vowel[20], cons[20];
    int i, v = 0, c = 0;
    printf("Enter a string: ");
    gets(x);
    for(i = 0; x[i] != '\0'; i++)
    {
        if(x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U' ||
           x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u')
        {
            vowel[v] = x[i];
            v++;
        }
        else if((x[i] >= 'A' && x[i] <= 'Z') || (x[i] >= 'a' && x[i] <= 'z'))
        {
            cons[c] = x[i];
            c++;
        }
    }

    vowel[v] = '\0';  // End string
    cons[c] = '\0';   // End string
    
    printf("Vowels: %s\n", vowel);
    printf("Consonants: %s\n", cons);
}

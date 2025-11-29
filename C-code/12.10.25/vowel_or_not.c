//WAP to check whether a letter is vowel or not
#include<stdio.h>
void main()
{
   char x;
   printf("Enter the Character = ");
   scanf("%c",&x);
   switch(x)
   {
      case 'a':case 'A':  //if(x=='a' || x=='A')
      case 'e':case 'E':
      case 'i':case 'I':
      case 'o':case 'O':
      case 'u':case 'U':
           printf("Vowel");
           break;
      case '@':case '#':case '$':case ' ':
           printf("Special Character");
           break;
      case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':
           printf("No.");
           break;
      default:
           printf("Consonant");
   }
}
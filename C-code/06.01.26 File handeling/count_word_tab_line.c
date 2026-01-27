// Count no. of words and line and tabs
#include<stdio.h>
#include<windows.h>
void main()
{
 FILE *fp;
 int n,w,t;
 w=t=0;
 n=1;
 char fna[20],ch;
 fflush(stdin);
 printf(" \n enter file to read "); 
 scanf("%s",&fna);
 fp=fopen(fna,"r");//p="saraswati.txt"
 if(fp==NULL)
 printf("\n NOT found ");
 else
 {
   while(1)
   {
           ch=fgetc(fp);//ch='EOF'
           if(ch==EOF) 
           break;
           else
           {
                printf("%c",ch);//h
                //sleep(50);
            if(ch=='\n')  
            n++;//3
            if(ch=='\t')
              t++;//6
            if(ch==' ')
             w++;// 19              
            }    
    }
  }   
  //rewind(fp);
//if(ch==(char)'27')
printf("\n Lines= %d ",n);
printf("\n Word= %d ",w+n);
printf("\n Tab= %d ",t);
fclose(fp);
}
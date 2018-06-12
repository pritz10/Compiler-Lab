#include<stdio.h>
#include<stdlib.h>
char keyword[][10]={"auto","break","case","char","const","continue","default",
    "do","double","else","enum","extern","float","for","goto",
                            "if","int","long","register","return","short","signed",
                            "sizeof","static","struct","switch","typedef","union",
                            "unsigned","void","volatile","while"};
void main()
{
   char str[30];
   int len,i,flag=0;
   clrscr();
   printf("Enter the C Identifier :>  ");
   gets(str);

   for(i=0;i<=32;i++)
   {
     if(strcmp(str,keyword[i])==0)
       {
	flag=2;
	goto A;
       }
   }
   if( str[0]=='_' || isalpha(str[0]) )
     {
	flag=1;
	len=strlen(str);
	for(i=1;i<len;i++)
	  {
	   if( str[i]=='_' || isalpha(str[i]) || isdigit(str[i]) )
	   continue;
	   else
	     {
		flag=0;
		break;
	     }
	  }
     }

      A:
     if( flag == 1 )
	printf("Given string is a valid C Identifier\n");
     else if(flag==0)
	printf("Given string is invalid C identifier\n");
     else
	printf("Given string is invalid C identifier, keyword\n");

    getch();
}


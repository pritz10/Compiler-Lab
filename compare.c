#include<stdio.h>
char k[][10]={"auto","break","case","char","const","continue","default",
                            "do","double","else","enum","extern","float","for","goto",
                            "if","int","long","register","return","short","signed",
                            "sizeof","static","struct","switch","typedef","union",
                            "unsigned","void","volatile","while"};
int main()
{
	int i=0,f=0;
	char c[10];
	printf("Enter Anything\n");
	gets(c);
	for(i=0;i<33;i++)
	{
		if(strcmp(c,k[i])==0)
			f=1;
	}
	if(f==1)
	printf("Matched\n");
	else
	printf("Not found");
	
}

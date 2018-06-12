#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,j=0,k=1,p,x=1;
	char a[100],b,ch[100],number[20],operand[100],operated[100]={0},c[10];
	printf("Enter expression\n");
	gets(ch);
	l=strlen(ch);
	if(ch[0]=='+' || ch[0]=='-' || ch[0]=='*'||ch[0]=='/'|| ch[0]=='%'||ch[0]=='=')
	printf("Invalid\n");
	else if(isalpha(ch[0]))
	operand[j]=ch[0];
	else if(isdigit(ch[0]))
	number[j]=ch[0];
	printf("%c is variable\n",ch[0]);
	for(i=1,j=1;i<l;i++,j++)
	{
		if(ch[i]=='+' || ch[i]=='-' || ch[i]=='*'||ch[i]=='/'|| ch[i]=='%'||ch[i]=='=')
		{
			operand[i]='@';
			operated[i]=ch[i];
			number[i]='@';
		}
		else if(isdigit(ch[i]))
		number[i]=ch[i];
		else if(isalpha(ch[i]))
		operand[i]=ch[i];
	}
	for(k=1;k<l;k++)
	{
		c[k]=ch[k];
		if(c[k]=='+')
		printf("%c addition operator\n",c[k]);
		if(c[k]=='-')
		printf("%c Substraction operator\n",c[k]);
		if(c[k]=='*')
		printf("%c Multiplication operator\n",c[k]);
		if(c[k]=='/')
		printf("%c Division operator\n",c[k]);
		if(c[k]=='=')
		printf("%c Equals to operator\n",c[k]);
		if(c[k]=='%')
		printf("%c Mudulo operator\n",c[k]);
	}
	for(x=1;x<strlen(operand);x++)
	{
		if(operand[x]!='@')
		printf("%c is operand\n",operand[x]);
	}
	for(i=1;i<l;i++){

	if(number[i]!='@')
	printf("%c is number\n",number[i]);

	
	}
	}
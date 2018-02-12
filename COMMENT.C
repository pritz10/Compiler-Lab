# include<stdio.h>
# include<conio.h>
void main()
{
  char a[10];
  int i,j,n,flag=0,m=0,k=0,l=0,b=0;
  clrscr();
  printf("Enter comment \n");
  gets(a);
 n=sizeof(a)/sizeof(a[0]);
 if(a[0]=='/' && a[1]=='/')
 {
 printf("This is a comment\n");
 b=1;
 }
 else{
 b=0;
      for(i=0;i<=n;i++)
      {
       if(a[i] == '/' && a[i+1] == '/')
       {
       flag=1;
       printf("Its a Comment in %d and %d index\n",i,i+1);
	m++;}
	 else if(a[i] == '/' && a[i+1] == '*')
	      {
	      flag=1;
	      printf("This looks like Comments, Wait till verify it\n");
		printf("Comment started from %d\n",i);
		   for(j=i+1;j<=n;j++)
		    { flag=1;
		     if(a[j] == '*' && a[j+1] == '/')
		      {
		      k=1;
			printf("Comment ended at %d\n ",j+1);
		      }
		    }
	      }

       }

       }
       if(b==0)
       {
       if(flag==0 || k==0)
		 printf("But it Contains No comments\n");
       if(m!=0)
		 printf("And it has // Comment %d times\n",m);
       if(k==1)
		 printf("Verified, its a Comment\n");

	}


  getch();
}
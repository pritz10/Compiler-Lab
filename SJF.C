#include<stdio.h>
#include<conio.h>
void fcfs();
void sjf();
void priority();
void main()
{       int m;
	clrscr();
	printf("Press :\n1-SJF\n2-FCFS\n3-Priority Scheduling\n");
	scanf("%d",&m);
	switch(m)
	{
	case 1: sjf();
		break;
	case 2: fcfs();
		break;
	case 3: priorty();
		break

	}
	getch();
}
void fcfs()
{
int a[5],z[5],x=0,i,n,j,t=0;
	float avg=0;
	clrscr();
	printf("Enter number of Processes-\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter for Process %d:",i+1);
		scanf("%d",&a[i]);
	}
	z[0]=0;
	printf("Process---Turn Arround---Waiting time\n");
	for(i=1;i<=n;i++)
	{
	t=t+a[i-1];
	z[i]=t-a[i-1];
	x=x+z[i];
	printf("%d\t\t",i);
	printf("%d\t\t",t);
	printf("%d\n",z[i]);
	}
	avg=x/n;
	printf("Total Waiting time=%d\nAverage Time =%f",x,avg);
}

void sjf()
{int a[5],z[5],x=0,i,n,j,t=0,b[5],c;
	float avg=0;
	clrscr();
	printf("Enter number of Processes-\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter for Process %d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{      if(a[j]>a[j+1])
			{
			c=a[j];
			a[j]=a[j+1];
			a[j+1]=c;
			}
		}
	}
	z[0]=0;
	printf("Process---Turn Arround---Waiting time\n");
	for(i=1;i<=n;i++)
	{
	t=t+a[i-1];
	z[i]=t-a[i-1];
	x=x+z[i];
	printf("%d\t\t",i);
	printf("%d\t\t",t);
	printf("%d\n",z[i]);
	}
	avg=x/n;
	printf("Total Waiting time=%d\nAverage Time =%f",x,avg);
}
void priority()
{
int a[5],z[5],x=0,i,n,j,t=0,b[5],c;
	float avg=0;
	clrscr();
	printf("Enter number of Processes-\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter for Process %d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{      if(a[j]>a[j+1])
			{
			c=a[j];
			a[j]=a[j+1];
			a[j+1]=c;
			}
		}
	}
	z[0]=0;
	printf("Process---Turn Arround---Waiting time\n");
	for(i=1;i<=n;i++)
	{
	t=t+a[i-1];
	z[i]=t-a[i-1];
	x=x+z[i];
	printf("%d\t\t",i);
	printf("%d\t\t",t);
	printf("%d\n",z[i]);
	}
	avg=x/n;
	printf("Total Waiting time=%d\nAverage Time =%f",x,avg);
}

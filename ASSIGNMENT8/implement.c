#include<stdio.h>
#include<stdlib.h>
#define max 100
int top;
void push(int[],int);
int pop(int[]);
void display(int[]);
main()
{
	int st[max],ch,ele;
	top=-1;
	while(1)
	{
		printf("enter\n 1 for push \n 2 for pop\n 3 for display\n 4 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the ele to be pushed\n");
				scanf("%d",&ele);
				push(st,ele);
				/*printf("the new stack is :\n");
				display(st);*/
				break;
			case 2:
				 pop(st);
				 break;
			case 3:
				 display(st);
				 break;
			case 4:
				 exit(0);
		}
	}
}
void push(int st[],int ele)
{
	if(top==max-1)
	{
		printf("the stack is overflow\n");
	}
	else
	{
		top++;
		st[top]=ele;
	}
}
int pop(int st[])
{
	int a;
	if(top==-1)
	{
		printf("stack underflow\n");
		exit(0);
	}
	a=st[top];
	top--;
	return a;
}
void display(int st[])
{
	int i;
	if (top==-1)
		printf("stack is underflow\n");
	else
	{
		for(i=top;i>=0;i--)
			printf("%d\n",st[i]);
	}
}



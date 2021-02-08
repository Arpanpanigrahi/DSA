#include<stdio.h>
#include<stdlib.h>
#define size 50
int top=-1;
int push(int[],int);
int pop(int[]);
void evaluate_postfix(char[]);
main()
{
	char st[size];
	printf("enter the expression\n");
	scanf("%[^\n]",st);
	evaluate_postfix(st);
}
int push(int st[],int ch)
{
	if(top==size-1)
	{
		printf("stack is full\n");
	}
	else 
	{
		top++;
		st[top]=ch;
	}
}
int pop(int st[])
{
	int t;
	if(top==-1)
	{
		printf("stack is under flow\n");
		exit(0);
	}
	else
	{
		t=st[top];
		top--;
		return t;
	}
}
void evaluate_postfix(char postfix[])
{
	int stack[size],i,val,v1,v2,rev;
	for(i=0;postfix[i]!='\0';i++)
	{
		if((postfix[i]>='a' && postfix[i]<='z')||(postfix[i]>='A' && postfix[i]<='Z'))
		{
			printf("enter the value of");
			scanf("%d",&val);
			push(stack,val);
		}
		else if(postfix[i]=='-')
		{
			v1=pop(stack);
			v2=pop(stack);
			push(stack,v1-v2);
		}
		else if(postfix[i]=='+')
		{
			 v1=pop(stack);
			 v2=pop(stack);
			 push(stack,v1+v2);
		}
		else if(postfix[i]=='*')
		{
			 v1=pop(stack);
			 v2=pop(stack);
			 push(stack,v1*v2);
		}
		else if(postfix[i]=='/')
		{
			 v1=pop(stack);
			 v2=pop(stack);
			 push(stack,v1/v2);
		}
		else if(postfix[i]=='^')
		{
			  v1=pop(stack);
			  v2=pop(stack);
			  push(stack,v1^v2);
		}
	}
		rev=pop(stack);
		printf("the evaluated expression is :%d \n",stack[top]);
}


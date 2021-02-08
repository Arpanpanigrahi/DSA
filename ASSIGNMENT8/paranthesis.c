/*check paranthesis of an expression*/
#include<stdio.h>
#include<stdlib.h>
#define size 100
int top=-1;
char push(char[],char);
char pop(char[]);
void check(char[],char[]);
main()
{
	char st[size],stack[size];
	printf("enter the expression\n");
	scanf("%[^\n]",st);
	check(st,stack);
}
char push(char st[],char ch)
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
char pop(char st[])
{
	char t;
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
void check(char st[],char stack[])
{
	int flag=1,i=0;
	char t;
	while(st[i]!='\0')
	{
		if(st[i]=='('||st[i]=='{'||st[i]=='[')
		{
			push(stack,st[i]);
		}
		else if(st[i]==')'||st[i]=='}'||st[i]=='[')
		{
			if(top==-1)
			{
				printf("stack is empty\n");
				flag=0;
			}
			else
			{
				t=pop(stack);
				if(((t=='('&& st[i]=='}'||st[i]==']')||((t=='{'&& st[i]==')'||st[i]==']'))||((t=='['&& st[i]==')'||st[i]=='}'))))
				{
					printf("invalid expression\n");
					flag=0;
					return;
				}
			}
		}
		i++;
	}
}







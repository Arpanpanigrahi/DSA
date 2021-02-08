#include<stdio.h>
#include<stdlib.h>
#define size 50
int top=-1;
char push(char[],char);
char pop(char[]);
void check(char[]);
int prec(char);
void infix_postfix(char[]);
main()
{
	char st[size],stack[size];
	printf("enter the expression\n");
	scanf("%[^\n]",st);
	infix_postfix(st);
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
int prec(char ch)
{
	if(ch=='+'||ch=='-')
		return 1;
	else if(ch=='*'||ch=='/')
		return 2;
	else if(ch=='^')
		return 3;
	else
		return 0;
}
void infix_postfix(char infix[])
{
	printf("\n");
	int i,k=0;
	char stack[size],temp;
	char postfix[size];
	for(i=0;infix[i]!='\0';i++)
	{
		if((infix[i]>='A' && infix[i]<='Z')||(infix[i]>='a' && infix[i]<='z'))
		{
			postfix[k++]=infix[i];
		}
		else if(infix[i]=='(')
			push(stack,infix[i]);
		else if(infix[i]==')')
		{
			while(top!=-1 && stack[top]!='(')
			{
				postfix[k++]=pop(stack);
			}
			temp=pop(stack);
		}
		else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/'||infix[i]=='^')
		{
			while(top!=-1 && (prec(stack[top])>=prec(infix[i])))
			{
				postfix[k++]=pop(stack);
			}
			push(stack,infix[i]);
		}
	}
	while(top!=-1)
		postfix[k++]=pop(stack);
	postfix[k]='\0';
	printf("%s",postfix);

}


					


#include<stdio.h>
#include<stdlib.h>
#define max 100
struct stack
{
	int st[max];
	int top;
};
void push(struct stack*,int);
int pop(struct stack*);
void display(struct stack);
main()
{
	struct stack s;
	int ch,ele;
	s.top=-1;
	while(1)
	{
		printf("enter\n 1 for push \n 2 for pop\n 3 for display\n 4 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the ele to be pushed\n");
				scanf("%d",&ele);
				push(&s,ele);
				break;
			case 2:
				 pop(&s);
				 break;
			case 3:
				 display(s);
				 break;
			case 4:
				 exit(0);
		}
	}
}
void push(struct stack *p,int ele)
{
	if(p->top==max-1)
	{
		printf("the stack is overflow\n");
	}
	else
		p->top=(p->top)+1;
	p->st[p->top]=ele;
}
int pop(struct stack *p)
{
	int a;
	if(p->top==-1)
	{
		printf("stack underflow\n");
		exit(0);
	}
	a=p->st[p->top];
	p->top--;
	return a;
}
void display(struct stack p)
{
	printf("\n");
	int i;
	if (p.top==-1)
		printf("stack is underflow\n");
	else
	{
		for(i=p.top;i>=0;i--)
			printf("%d\n",p.st[i]);
	}
}


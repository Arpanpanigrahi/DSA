#include<stdio.h>
#include<stdlib.h>
 
#define size 10	//size of the stack
 
int top_of_stack=-1,s[size];

void push();
void pop();
void show();
 
int main()
{
	int option;
	
	while(1)	
	{
		printf("\nSelect from the following options- ");
		printf("\n\n1.Push\n2.Pop\n3.Show\n4.Exit");
		printf("\n\nEnter the operation you want to execute: ");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: show();
					break;
			case 4: exit(0);
			
			default: printf("\nInvalid option. Please select a Valid operation");
		}
	}
}
 
void push()
{
	int value;
	
	if(top_of_stack == size-1)
	{
		printf("\nOperation failed. Stack is full.");
	}
	else
	{
		printf("\nEnter the value you want to push in the stack:");
		scanf("%d",&value);
		top_of_stack = top_of_stack + 1;
		s[top_of_stack] = value;
	}
}
 
void pop()
{
	if(top_of_stack == -1)
	{
		printf("\nOperation failed. Stack is empty");
	}
	else
	{
		printf("\nPopped element is:  %d",s[top_of_stack]);
		top_of_stack=top_of_stack-1;
	}
}
 
void show()
{
	int i;
	
	if(top_of_stack==-1)
	{
		printf("\nStack is empty");
	}
	else
	{
		printf("\nElements of the stack are:\n");
		for(i = top_of_stack; i>=0; --i)
			printf("%d\n",s[i]);
	}
}

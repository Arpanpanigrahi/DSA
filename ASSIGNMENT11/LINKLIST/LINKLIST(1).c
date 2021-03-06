/*1.Write a menu driven program in C to implement a Single Linked List using Dynamic Memory Allocation and apply various operations on it through separate functions as below:
  a)Create a single linked list.
  b)Display the list of elements.
  c)Insert a node at the beginning of the list.
  d)Insert a node at the end of the list.
  e)Insert a node at a given position in the list.
  f)Insert a node after a given node.
  g)Delete the first node.
  h)Delete the last node.
  i)Delete a node at a given position.
  j)Delete a node after a given node.
  k)Search an element in the list.
  l)Sort the elements of the list in ascending order of their values.
  m)Reverse the whole list.
  n)Merge one single linked list with another single linked list to form a large single linked list.

  *Author    : Arpan Panigrahi
  *Date      : 25 � 02 - 2019
  *File Name : 01-Linked_List */

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct ll
{
	int value;
	struct ll *next;
};
struct ll *start;
int count_node(struct ll *node)
{
	int c=0;
	while(node!=NULL)
	{
		c++;
		node=node->next;
	}
	return c;
}
void C_L(struct ll *);
void D_L(struct ll *);
void I_F(struct ll *);
void I_L(struct ll *);
void I_P(struct ll *);
main()
{
	int a;
	char ch='m';
	struct ll *node;
	node=(struct ll *)malloc(sizeof(struct ll));
	if(node==NULL)
	{
		printf("\n OUT OF MEMORY \n");
		exit(0);
	}
	while(ch=='m'||ch=='M')
	{
		printf(" 1 -> Create List \n 2 -> Display List \n 3 -> Insert at Beginning\n 4 -> Insert at End\n 5 -> Insert at Specific Position\n 6 -> Exit");
		printf("\nEnter your choice \n");
		scanf("%d",&a);
		switch(a)
		{
			case 1 :
				C_L(node);
				break;
			case 2 :
				D_L(node);
				break;
			case 3 :
				I_F(node);
				break;
			case 4:
				I_L(node);
				break;
			case 5:
				I_P(node);
				break;
			case 6:
				exit(0);
			default :
				printf("Enter valid choice \n");
		}
		printf("Enter 'M' for going to main menu\n");
		scanf(" %c",&ch);
	}
}
void C_L(struct ll *node)
{
	int i=1;
	char ch;
	printf("Enter the value of %d node\n",i);
	scanf("%d",&node->value);
	node->next=NULL;
	start=node;
	i++;
	printf("Enter 'C' to continue\n");
	scanf(" %c",&ch);
	while(ch=='C'||ch=='c')
	{
		node->next=(struct ll *)malloc(sizeof(struct ll));
		if(node->next==NULL)
		{
			printf("\n OUT OF MEMORY \n");
			exit(0);
		}
		node=node->next;
		printf("Enter the value of %d node \n",i);
		scanf("%d",&node->value);
		node->next=NULL;
		i++;
		printf("Print 'C' to continue \n");
		scanf(" %c",&ch);
	}
}
void D_L(struct ll *node)
{
	node=start;
	if(node->next==NULL)
	{
		printf("It is Empty \n");
		exit(0);
	}
	printf("The list is \n");
        while(node!=NULL)
        {
		printf("%d \n",node->value);
		node=node->next;
	}

}
void I_F(struct ll *node)
{
	struct ll *curr;
	curr=(struct ll *)malloc(sizeof(struct ll));
	if(curr==NULL)
	{
		printf("\n OUT OF MEMORY \n");
		exit(0);
	}
	printf("Enter the value of newly created node\n");
	scanf("%d",&curr->value);
	curr->next=start;
	start=curr;
}
void I_L(struct ll *node)
{
	struct ll *curr;
	curr=(struct ll *)malloc(sizeof(struct ll));
	if(curr==NULL)
	{
		printf("\n OUT OF MEMORY \n");
		exit(0);
	}
	while(node->next!=NULL)
		node=node->next;
	printf("Enter the last value\n");
	scanf("%d",&curr->value);
	curr->next=NULL;
	node->next=curr;
}
void I_P(struct ll *node)
{
	int pos,i=1,c=0;
	struct ll *prev,*curr;
	printf("Enter the position \n");
	scanf("%d",&pos);
	c=count_node(node);
	if(pos>c)
	{
		printf("OUT OF BOUNDARY \n");
		return;
	}
	curr=(struct ll*)malloc(sizeof(struct ll));
	if(curr==NULL)
	{
		printf("OUT OF MEMORY \n");
		exit(0);
	}
	printf("Enter the value to be inserted \n");
	scanf("%d",&curr->value);
	while(i<pos)
	{
		prev=node;
		node=node->next;
		i++;
	}
	if(pos==1)
	{
		start=curr;
	}
	else
	{
		prev->next=curr;
	}
}



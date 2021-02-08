//Menu driven program in C to implement various operations of double linked List using dynamic memory allocation
//Author:Aniket kumar
//File Name:01-dll
//Date:18/03/19
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct dll
{
	int value;
	struct dll *next;
	struct dll *prev;
};
struct dll *start=NULL;
void create(struct dll *);
void display(struct dll *);
void insertb(struct dll *);
void inserte(struct dll *);
void inserti(struct dll *);
void inserta(struct dll *);
void deletes(struct dll *);
void deletel(struct dll *);
void deletei(struct dll *);
void deletea(struct dll *);
void sort(struct dll *,struct dll *,struct dll *);
int count(struct dll *);
void search(struct dll *);
main()
{
	struct dll *node;
	int ch=0;
	node=(struct dll*)malloc(sizeof(struct dll));
	if(node==NULL)
	{
		printf("Out of memory access\n");
		exit(0);
	}
	start=node;
	while(ch!=13)
	{
		printf("\nCreate-1\tDisplay-2\tInsert at beginning-3\tInsert at end-4\t\tInsert at given position-5\nInsert after given node-6\tDelete first node-7\tDelete last node-8\tDelete node at given position-9\nDelete node after given position-10\tSearch an element in the list-11\tSort the elements in ascending order-12\nExit-13\n\n");
		printf("Enter your choice=");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				create(node);
				break;
			case 2:
				node=start;
				display(node);
				break;
			case 3:
				insertb(node);
				break;
			case 4:
				inserte(node);
				break;
			case 5:
				inserti(node);
				break;
			case 6:
				inserta(node);
				break;
			case 7:
				deletes(node);
				break;
			case 8:
				deletel(node);
				break;
			case 9:
				deletei(node);
				break;
			case 10:
				deletea(node);
				break;
			case 11:
				search(node);
				break;
			case 12:
				sort(node,node,start);
				display(node);
				break;
			case 13:
				break;
			default:
				printf("Wrong choice,Re-enter\n");
		}
	}
}
void create(struct dll *node)
{
	struct dll *curr;
	int i=1,ch=0;
	printf("\n\t\t\tCreating List\n");
	printf("Enter the value of %d node=",i);
	scanf("%d", &node->value);
	node->prev=NULL;
	node->next=NULL;
	i++;
	while(ch!=2)
	{
		printf("Continue-1\tQuit-2\n");
		printf("Enter your choice=");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				curr=(struct dll*)malloc(sizeof(struct dll));
				if(curr==NULL)
				{
					printf("Out of memory\n");
					exit(0);
				}
				node->next=curr;
				curr->prev=node;
				curr->next=NULL;
				node=curr;
				printf("Enter the value of %d node=", i);
				scanf("%d", &node->value);
				node->next=NULL;
				i++;
				break;
			case 2:
				printf("\t\t\tList creation exited\n");
				break;
			default:
				printf("Wrong choice,Re-enter\n");
		}
	}
}
void display(struct dll *node)
{
	int c;
	node=start;
	c=count(node);
	if(c==0)
	{
		printf("List is empty, nothing to show\n");
	}
	else
	{
		printf("The List is:\n");
		while(node!=NULL)
		{
			printf("%d\n", node->value);
			node=node->next;
		}
	}
}
void insertb(struct dll *node)
{
	struct dll *curr;
	curr=(struct dll*)malloc(sizeof(struct dll));
	if(curr==NULL)
	{
		printf("Out of memory\n");
		exit(0);
	}
	printf("Enter the value of the node=");
	scanf("%d", &curr->value);
	curr->prev=NULL;
	curr->next=node;
	node->prev=curr;
	node=curr;
	start=node;
}
void inserte(struct dll *node)
{
	struct dll *curr;
	curr=(struct dll*)malloc(sizeof(struct dll));
	if(curr==NULL)
	{
		printf("Out of memory\n");
		exit(0);
	}
	printf("Enter the value of the node=");
	scanf("%d", &curr->value);
	while(node->next!=NULL)
	{
		node=node->next;
	}
	node->next=curr;
	curr->next=NULL;
	curr->prev=node;
	node=curr;
}
void inserti(struct dll *node)
{
	int pos,c=0,i=1;
	struct dll *curr,*temp;
	printf("Enter the position where the element to be inserted=");
	scanf("%d", &pos);
	c=count(node);
	if(c<pos)
	{
		printf("Invalid location\n");
	}
	else
	{
		curr=(struct dll*)malloc(sizeof(struct dll));
		if(curr==NULL)
		{
			printf("Out of memory\n");
			exit(0);
		}
		printf("Enter the value of the node=");
		scanf("%d", &curr->value);
		temp=(struct dll*)malloc(sizeof(struct dll));
		while(i<pos)
		{
			temp=node;
			node=node->next;
			i++;
		}
		if(pos==1)
		{
			curr->prev=NULL;
			curr->next=node;
			node->prev=curr;
			node=curr;
			start=node;
		}
		else
		{
			curr->next=node;
			node->prev=curr;
			curr->prev=temp;
			temp->next=curr;
		}
	}
}
int count(struct dll *node)
{
	int ctr=0;
	while(node!=NULL)
	{
		ctr++;
		node=node->next;
	}
	return ctr;
}
void inserta(struct dll *node)
{
	int pos,c=0,i=1;
	struct dll *curr,*temp;
	printf("Enter the position where the element to be inserted=");
	scanf("%d", &pos);
	pos++;
	c=count(node);
	if(c<pos)
	{
		printf("Invalid location\n");
	}
	else
	{
		curr=(struct dll*)malloc(sizeof(struct dll));
		if(curr==NULL)
		{
			printf("Out of memory\n");
			exit(0);
		}
		printf("Enter the value of the node=");
		scanf("%d", &curr->value);
		temp=(struct dll*)malloc(sizeof(struct dll));
		while(i<pos)
		{
			temp=node;
			node=node->next;
			i++;
		}
		if(pos==1)
		{
			curr->prev=NULL;
			curr->next=node;
			node->prev=curr;
			node=curr;
			start=node;
		}
		else
		{
			curr->next=node;
			node->prev=curr;
			curr->prev=temp;
			temp->next=curr;
		}
	}
}
void deletes(struct dll *node)
{
	struct dll *temp;
	temp=node;
	node=node->next;
	node->prev=NULL;
	free(temp);
	start=node;
}
void deletel(struct dll *node)
{
	struct dll *temp;
	if(node->next==NULL)
	{
		free(node);
		start=NULL;
		return;
	}
	while(node->next!=NULL)
	{
		temp=node;
		node=node->next;
	}
	temp->next=NULL;
	free(node);
}
void deletei(struct dll *node)
{
	int pos,c=0,i=1;
	struct dll *temp;
	printf("Enter the position where the node is to be deleted=");
	scanf("%d", &pos);
	c=count(node);
	if(pos>c)
	{
		printf("Invalid location\n");
		return;
	}
	while(i<pos)
	{
		temp=node;
		node=node->next;
		i++;
	}
	if(pos==1)
	{
		start=node->next;
		node->next->prev=NULL;
	}
	else
	{
		temp->next=node->next;
		node->next->prev=temp;
	}
	free(node);
}
void deletea(struct dll *node)
{
	int pos,c=0,i=1;
	struct dll *temp;
	printf("Enter the position where the node is to be deleted=");
	scanf("%d", &pos);
	pos++;
	c=count(node);
	if(pos>c)
	{
		printf("Invalid location\n");
		return;
	}
	while(i<pos)
	{
		temp=node;
		node=node->next;
		i++;
	}
	if(pos==1)
	{
		start=node->next;
		node->next->prev=NULL;
	}
	else
	{
		temp->next=node->next;
		node->next->prev=temp;
	}
	free(node);
}
void search(struct dll *node)
{
	int ctr=0,elt;
	node=start;
	printf("Enter the element to be searched=");
	scanf("%d", &elt);
	while(node!=NULL)
	{
		if((node->value)==elt)
		{
			ctr++;
		}
		node=node->next;
	}
	if(ctr==0)
	{
		printf("Entered element is not present in the list\n");
	}
	else
	{
		printf("Entered element is present in the list\n");
	}
}
void sort(struct dll *p,struct dll *q, struct dll *m)
{
	int temp;
	for(p=m;p!=NULL;p=p->next)
	{
		for(q=m;q!=NULL;q=q->next)
		{
			if((p->value)<(q->value))
			{
				temp=p->value;
				p->value=q->value;
				q->value=temp;
			}
		}
	}
}


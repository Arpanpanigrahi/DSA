//Menu driven program in C to implement various operations of single linked List using dynamic memory allocation
//Author:Arpan Panigrahi
//File Name:01-linkilist
//Date:25/02/19
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct ll
{
	int value;
	struct ll *next;
};
struct ll *start=NULL;
void create(struct ll *);
void display(struct ll *);
void insertb(struct ll *);
void inserte(struct ll *);
void inserti(struct ll *);
void inserta(struct ll *);
void deletes(struct ll *);
void deletel(struct ll *);
void deletei(struct ll *);
void deletea(struct ll *);
void sort(struct ll *,struct ll *,struct ll *);
int count(struct ll *);
void search(struct ll *);
void reverse(struct ll *,struct ll *,struct ll *);
void merge();
main()
{
	struct ll *node;
	int ch=0;
	node=(struct ll*)malloc(sizeof(struct ll));
	node1=(struct ll*)malloc(sizeof(struct ll));
	if(node==NULL)
	{
		printf("Out of memory access\n");
		exit(0);
	}
	while(ch!=15)
	{
		printf("\nCreate-1\tDisplay-2\tInsert at beginning-3\tInsert at end-4\t\tInsert at given position-5\nInsert after given node-6\tDelete first node-7\tDelete last node-8\tDelete node at given position-9\nDelete node after given position-10\tSearch an element in the list-11\tSort the elements in ascending order-12\nReverse the list-13\tMerge lists-14\texit-15\n\n");
		printf("Enter your choice=");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				create(node);
				break;
			case 2:
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
				sort(node,node,node);
				break;
			case 13:
				reverse(node,node,node);
				break;
			case 14:
				merge();
				break;
			case 15:
				break;
			default:
				printf("Wrong Choice,Re-Enter\n");
		}
	}
}
void create(struct ll *node)
{
	int i=1;
	int ch=0;
	printf("\n\t\t\tCreating List\n");
	printf("Enter the value of %d node=",i);
	scanf("%d", &node->value);
	node->next=NULL;
	start=node;
	i++;
	while(ch!=2)
	{
		printf("\nContinue-1\tQuit-2\n\n");
		printf("Enter your choice=");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				node->next=(struct ll*)malloc(sizeof(struct ll));
				if(node->next==NULL)
				{
					printf("Out of memory\n");
					exit(0);
				}
				node=node->next;
				printf("Enter the value of %d node=",i);
				scanf("%d", &node->value);
				node->next=NULL;
				i++;
				break;
			case 2:
				printf("\t\t\tList Creation Exited\n");
				break;
			default:
				printf("Wrong choice,Re-enter\n");
		}
	}
}
void display(struct ll *node)
{
	node=start;
	if(node==NULL)
	{
		printf("List is empty, nothing to show\n");
		exit(0);
	}
	printf("The list is:\n");
	while(node!=NULL)
	{
		printf("%d\n", node->value);
		node=node->next;
	}
}
void insertb(struct ll *node)
{
	struct ll *curr;
	curr=(struct ll*)malloc(sizeof(struct ll));
	if(curr==NULL)
	{
		printf("Out of memory\n");
		exit(0);
	}
	printf("Enter the value of newly created node=");
	scanf("%d", &curr->value);
	curr->next=start;
	start=curr;
}
void inserte(struct ll *node)
{
	struct ll *curr;
	curr=(struct ll*)malloc(sizeof(struct ll));
	if(curr==NULL)
	{
		printf("Out of memory\n");
		exit(0);
	}
	while(node->next!=NULL)
	{
		node=node->next;
	}
	printf("Enter the value of the current node=");
	scanf("%d", &curr->value);
	curr->next=NULL;
	node->next=curr;
}
void inserti(struct ll *node)
{
	int pos,i=1,c=0;
	struct ll *prev;
	struct ll *curr;
	printf("Enter the node position where element is to be inserted=");
	scanf("%d", &pos);
	c=count(node);
	if(pos>c)
	{
		printf("Out of boundary\n");
		return;
	}
	curr=(struct ll*)malloc(sizeof(struct ll));
	if(curr==NULL)
	{
		printf("Out of memory\n");
		exit(0);
	}
	while(i<pos)
	{
		prev=node;
		node=node->next;
		i++;
	}
	if(pos==1)
	{
		start==curr;
	}
	else
	{
		prev->next=curr;
	}
	curr->next=node;
	printf("Enter the element to be inserted=");
	scanf("%d", &curr->value);
}
int count(struct ll *node)
{
	int ctr=0;
	while(node!=NULL)
	{
		ctr++;
		node=node->next;
	}
	return ctr;
}
void inserta(struct ll *node)
{
	int pos,i=1,c=0;
	struct ll *prev;
	struct ll *curr;
	printf("Enter the node position after which element is to be inserted=");
	scanf("%d", &pos);
	pos=pos+1;
	c=count(node);
	if(pos>c)
	{
		printf("Out of boundary\n");
		return;
	}
	curr=(struct ll*)malloc(sizeof(struct ll));
	if(curr==NULL)
	{
		printf("Out of memory\n");
		exit(0);
	}
	while(i<pos)
	{
		prev=node;
		node=node->next;
		i++;
	}
	if(pos==1)
	{
		start==curr;
	}
	else
	{
		prev->next=curr;
	}
	curr->next=node;
	printf("Enter the element to be inserted=");
	scanf("%d", &curr->value);
}
void search(struct ll *node)
{
	int ctr=0,elem;
	node=start;
	printf("Enter the element to be searched=");
	scanf("%d", &elem);
	while(node!=NULL)
	{
		if(elem==node->value)
		{
			ctr++;
		}
		node=node->next;
	}
	if(ctr==0)
	{
		printf("Element is not present in the list\n");
	}
	else
	{
		printf("Element is present in the list\n");
	}
}
void deletes(struct ll *node)
{
	struct ll *temp;
	temp=(struct ll*)malloc(sizeof(struct ll));
	if(temp==NULL)
	{
		printf("Out of memory\n");
		return;
	}
	temp=node;
	node=node->next;
	free(temp);
	start=node;
}
void deletel(struct ll *node)
{
	struct ll *prev;
	prev=(struct ll*)malloc(sizeof(struct ll));
	if(prev==NULL)
	{
		printf("Out of memory\n");
		return;
	}
	if(node->next==NULL)
	{
		free(node);
		start=NULL;
		return;
	}
	while(node->next!=NULL)
	{
		prev=node;
		node=node->next;
	}
	prev->next=NULL;
	free(node);
}
void deletei(struct ll *node)
{
	int pos,c=0,i=1;
	struct ll *prev;
	printf("Enter the position where the node is to be deleted=");
	scanf("%d", &pos);
	c=count(node);
	if(pos>c)
	{
		printf("Invalid location\n");
		return;
	}
	prev=(struct ll*)malloc(sizeof(struct ll));
	if(prev==NULL)
	{
		printf("Out of memory\n");
		return;
	}
	while(i<pos)
	{
		prev=node;
		node=node->next;
		i++;
	}
	if(pos==1)
	{
		start=node->next;
	}
	else
	{
		prev->next=node->next;
	}
	free(node);
}
void deletea(struct ll *node)
{
	int pos,c=0,i=1;
	struct ll *prev;
	printf("Enter the position where the node is to be deleted=");
	scanf("%d", &pos);
	pos=pos+1;
	c=count(node);
	if(pos>c)
	{
		printf("Invalid location\n");
		return;
	}
	prev=(struct ll*)malloc(sizeof(struct ll));
	if(prev==NULL)
	{
		printf("Out of memory\n");
		return;
	}
	while(i<pos)
	{
		prev=node;
		node=node->next;
		i++;
	}
	if(pos==1)
	{
		start=node->next;
	}
	else
	{
		prev->next=node->next;
	}
	free(node);
}
void sort(struct ll *node)
{
	struct ll *p,*q;
	int temp;
	node = start;
	for(p=start;p!=NULL;p=p->next)
	{
		for(q=start;q!=NULL;q=q->next)
		{
			if((q->value)<(q->next->value))
			{
				temp=q->value;
				q->value=q->next->value;
				q->next->value=temp;
			}
		}
	}
	display(node);
}
void reverse(struct ll *node,struct ll *prev,struct ll *curr)
{
	struct ll *temp;
	temp=(struct ll*)malloc(sizeof(struct ll));
	if(temp==NULL)
	{
		printf("Out of memory\n");
		return;
	}
	prev=NULL;
	curr=start;
	while(curr!=NULL)
	{
		temp=curr->next;
		curr->next=prev;
		prev=curr;
		curr=temp;
	}
	start=prev;
	display(node);
}
void merge()
{
	struct ll *newnode1;
	struct ll *newnode2;
	printf("Enter the values for 1st node:\n");
	newnode1=(struct ll*)malloc(sizeof(struct ll));
	if(newnode1==NULL)
	{
		printf("Out of memory\n");
		return;
	}
	create(newnode1);
	printf("1st sorted list is:\n");
	sort(newnode1,newnode1,newnode1);
	printf("Enter the values for 2nd node:\n");
	newnode2=(struct ll*)malloc(sizeof(struct ll));
	if(newnode2==NULL)
	{
		printf("Out of memory\n");
		return;
	}
	create(newnode2);
	printf("2nd sorted list is:\n");
	sort(newnode2,newnode2,newnode2);
	display(newnode1);
	display(newnode2);
}


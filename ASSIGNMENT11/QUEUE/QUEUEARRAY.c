/*implimentation of queue using array*/
#include<stdio.h>
#include<stdlib.h>
#define max 100
int front=-1;
int rear=-1;
void insert(int [],int);
int delete(int []);
void display(int []);
main()
{
	int choice;
	int que[max],a,ele;
	while(1)
	{
		printf("enter command\n");
		printf("1 for insert \n 2 for delete\n 3 for display\n 4 for exit\n");
		printf("enter choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter element to insert\n");
				scanf("%d",&ele);
				insert(que,ele);
				break;
			case 2:
				printf("enter element to delete\n");
			        a=delete(que);
				break;
			case 3:
				display(que);
				break;
			case 4:
				exit(0);
		}
	}
}
void insert(int que[],int ele)
{
	if(rear==max-1)
	{
		printf("insertion not possible\n");
		exit(0);
	}
	else
	{
		if(front==-1)
		{
			front++;
			rear++;
		}
		else
		{
			rear++;
		}
			que[rear]=ele;
	}
	

	return;
}
int delete(int que[])
{
	int temp;
	if(front==-1)
	{
		printf("deletion is not possible\n");
		exit(0);
	}
	temp=que[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
		front++;
	return temp;
}
void display(int que[])
{
	int i;
	if(front==-1)
	{
		printf("que is empty\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",que[i]);
		}
	}
}



		

					                                   

			



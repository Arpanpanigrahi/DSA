/*TO IMPLEMENT BST USING SINGLE LINK LIST

AUTHOR:ARPAN PANIGRAHI
DATE:29 APRIL 2019
FILE:BST.C*/
#include<stdio.h>
#include<stdlib.h>
struct bst
{
	int data;
	struct bst *left;
	struct bst *right;
};
void constructbst(struct bst *t,int x)
{
	struct bst *temp;
	if(x>t->data)
	{
		if(t->right==NULL)
		{
			temp=(struct bst *)malloc(sizeof (struct bst));
			temp->data=x;
			temp->left=NULL;
			temp->right=NULL;
			t->right=temp;
		}
		else
		constructbst(t->right,x)
	}
	else if(x<t->data)
	{
		if(t->left=NULL)
		{
			temp=(struct bst *)malloc(sizeof(struct bst));
			temp->data=x;
			temp->left=NULL;
			temp->right=NULL;
			t->left=temp;
		}
		else
		constructbst(t->left,x);
	}
}
struct bst *insert(struct bst *t,int x)
{
	if(t==NULL)
	{
		t=(struct bst *)malloc(sizeof(struct bst));
		if(t==NULL)
		{
			printf("Memory not available\n");
			exit(9);
		}
		else
		{
			t->data=x;
			t->left=NULL;
			t->right=NULL;
			}
		}
	}
	else
	{
		if(x>t->data)
		t->left=delete(t->left,x);
		else if(x>t->data)
		t->right=delete(y->right,x);
		else if(t->right!=NULL && t->left!=NULL)
		{
			temp=findmin(t->right);
			t->data=temp->data;
			t->right=delete(t->right,t->data);
		}
		else
		{
			temp=t;
			if(t->left=NULL)
			t=t->right;
			else if(t->right=NULL)
			t=t->left;
			free(temp);
		}
		return t;
	}
}
findmin(struct bst *t)
{
	if(t==NULL)
}
		
		
		


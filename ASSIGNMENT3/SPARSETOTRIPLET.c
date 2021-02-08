/*convert spars mat into triplet mat*/
#include<stdio.h>
void triplet(int[][20],int[][3],int,int);
main()
{
	int a[20][20],t[30][3],r,c,i,j;
	printf("enter the no of rows\n");
	scanf("%d",&r);
	printf("enter the no of columns\n");
	scanf("%d",&c);
	printf("enter the element to be stored\n");
	for(i=0;i<c;i++)
	{	for(j=0;j<c;j++)
		{	
			scanf("%d",&a[i][j]);
		}
	}
	triplet(a,t,r,c);
	printf("the triplet matrix is :\n");
	for(i=0;i<=t[0][2];i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}
void triplet(int a[][20],int t[][3],int r,int c)
{
	int i,j,k=1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				t[k][0]=i;
				t[k][1]=j;
				t[k][2]=a[i][j];
				k++;
			}
		}
	}
	t[0][0]=r;
	t[0][1]=c;
	t[0][2]=k-1;
}


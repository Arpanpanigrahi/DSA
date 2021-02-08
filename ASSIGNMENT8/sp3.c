/*to add 2 sparse matrix where triplet formis given*/
#include<stdio.h>
void input(int[][3]);
void addspars(int[][3],int[][3],int [][3]);
main()
{
	int a[20][3],b[20][3],c[20][3],j,k,i;
	printf("enter the triplet form of 1st matrix\n");
	input(a);
	printf("enter the triplet form of 2nd matrix\n");
	input(b);
	addspars(a,b,c);
	for(i=0;i<=c[0][2];i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
			printf("\n");
	}
}
void input(int a[][3])
{
	int i;
	printf("enter no of row\n");
	scanf("%d",&a[0][0]);
	printf("enter the no of coloumn\n");
	scanf("%d",&a[0][1]);
	printf("enter the number of non zero ele\n");
	scanf("%d",&a[0][2]);
	for(i=1;i<a[0][0];i++)
	{
		printf("enter the no of row index\n");
                scanf("%d",&a[i][0]);
		printf("enter the no of col index\n");
		scanf("%d",&a[i][1]);
		printf("enter the nonzero element\n");
		scanf("%d",&a[i][2]);
	}
}
void addspars(int a[][3],int b[][3],int c[][3])
{
	int i=1,j=1,k=1;
	while(i<=a[0][2] && j<=b[0][2])
	{
		if(a[i][0]<b[j][0])
		{
			c[k][0]=a[i][0];
			c[k][1]=a[i][1];
			c[k][2]=a[i][2];
			i++;
		}
		else if(a[i][0]>b[j][0])
		{
			c[k][0]=b[j][0];
			c[k][1]=b[j][1];
			c[k][2]=b[j][2];
			j++;
		}
		else if(a[i][0]==b[j][0])
		{
			if(a[i][1]==b[j][1])
			{
				c[k][0]=a[i][0];
				c[k][1]=a[i][1];
				c[k][2]=a[i][2]+b[j][2];
				i++;j++;
			}
			else if(a[i][1]<b[j][1])
			{
				c[k][0]=a[i][0];
				c[k][1]=a[i][1];
				c[k][2]=a[i][2];
				i++;
			}
			else if(a[i][1]>b[j][1])
			{
				c[k][0]=b[j][0];
				c[k][1]=b[j][1];
				c[k][2]=b[j][2];
				j++;
			}
		}
		k++;
	}
	while(i<=a[0][2])
	{
		c[k][0]=a[i][0];
		c[k][1]=a[i][1];
		c[k][2]=a[i][2];
		i++;
		k++;
	}
	while(j<=b[0][2])
	{
		c[k][0]=b[j][0];
		c[k][1]=b[j][1];
		c[k][2]=b[j][2];
		j++;
		k++;
	}
	c[0][0]=a[0][0];
	c[0][1]=a[0][1];
	c[0][2]=k-1;

}



	


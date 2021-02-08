//wap in c to add two matrices using function//

#include<stdio.h>
#include<stdlib.h>
void add(int[10][10],int[10][10],int,int);
void main()
{
        int m,n,mx1[10][10],mx2[10][10],i,j;
        system("clear");
        printf("\n enter no of rows:\n");
        scanf("%d",&m);
        printf("\n enter no of coloumns:\n");
        scanf("%d",&n);
        printf("\n enter the elements of matrix 1\n");
        for(i=0;i<m;i++)
                for(j-=0;j<n;j++)
                        scanf("%d",&mx1[i][j]);
        printf("\n enter the elements of matrix 2\n");
        for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                        scanf("%d",&mx2[i][j]);
        add(mx1,mx2,m,n);
}
void add(int mx1[10][10],int mx2[10][10],int m,int n)
{
        int i,j;
        for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                        mx1[i][j]=mx1[i][j]+mx2[i][j];
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                        printf("%d\t",mx1[i][j]);
                for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                                printf("%d\t",mx1[i][j]);
                        printf("\n\n");
                }
        }
}

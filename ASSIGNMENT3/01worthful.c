/*create sparsematrix*/


#include<stdio.h>
#include<stdlib.h>
void display(int b[][3],int m);
void createsparse(int arr[10][10],int m,int n)
{
        int i,j,k=1,b[100][3];
        b[0][0]=m;
        b[0][1]=n;
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(arr[i][j]!=0)
                        {
                                b[k][0]=i;
                                b[k][1]=j;
                                b[k][2]=arr[i][j];
                                k++;
                        }
                }
        }
        b[0][2]=k-1;
        display(b,m);
}
void display(int b[][3],int m)
{
        int i,j;
        printf("\n the sparse matrix is:\n");
        for(i=0;i<m;i++)
                printf("%d%d%d\n",b[i][0],b[i][1],b[i][2]);
}
void main()
{
        int mat[10][10],i,j,m,n,k,l;
        system("clear");
        printf("\n enter the number of rows:\n");
        scanf("%d",&m);
        printf("\n enter the number of coloumns:\n");
        scanf("%d",&n);
        printf("\n enter the elements into %d%d matrix\n",m,n);
        for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                        scanf("%d",&mat[i][j]);
        for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                        if(mat[i][j]!=0)    
                            k++;
        if(((k+1)*3)<m*n)
                createsparse(mat,m,n);
        else
                for(i=0;i<m;i++)
                {
                        for(j=0;j,n;j++)
                                printf("%d",mat[i][j]);
                        printf("\n");
                }
}
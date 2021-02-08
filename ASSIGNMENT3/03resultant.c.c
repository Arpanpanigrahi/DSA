/*wap in c to add two sparse matrices (given in triplet form) and show the resultant sparse matrix (in triplet form)*/


#include<stdio.h>
void add(int m,int n,int l[100][100])
{
        int i,j,k=0,b[100][100],r=1;
        b[0][0]=m;
        b[0][1]=n;
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(l[i][j]!=0)
                        {
                                b[r][0]=i+1;
                                b[r][1]=j+1;
                                b[r][2]=l[i][j];
                                r++;
                        }
                }
        }
        b[0][2]=r-1;
        printf("\n display the sparse matrix\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<3;j++)
                {
                        printf("%d\t",b[i][j]);
                }
                printf("\n");
        }
}
main()
{
        int m,n,i,j,a[100][100],g[100][100],l[100][100];
        printf("enter the row of the matrix\n");
        scanf("%d",&m);
        printf("enter the coloumn of the matrix\n");
        scanf("%d",&n);
        printf("enter the values in matrix\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
        for(i=0;i<m;i++)
	{
                for(j=0;j<n;j++)
                {

                        scanf("%d",&g[i][j]);
                }
        }
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        l[i][j]=a[i][j]+l[i][j];
                }
        }
        printf("addition of two matrix is\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d\t",&l[i][j]);
                }
                printf("\n");
        }
        add(m,n,l);
}


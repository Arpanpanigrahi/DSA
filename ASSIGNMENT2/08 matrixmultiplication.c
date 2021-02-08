//wap in c to multiply two matrices using function//

#include<stdio.h>
#include<stdlib.h>
void multi(int mat1[10][10],int mat2[10][10],int m, int n)
{
        int i,j,k,temp[10][10];
        for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                        for(k=0;k<m;k++)
                                temp[i][j]=mat1[i][j]*mat2[j][k];
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d\t",temp[i][j]);
                }
                printf("\n\n");
        }
}
void main()
{
        int i,j,mat1[10][10],mat2[10][10],m,n;
        system("clear");
        printf("\n enter the no of rows:\n");
        scanf("%d",&m);
        printf("\n enter the no of coloumns:\n");
        scanf("%d",&n);
        printf("\n enter the elements of matrix 1:\n");
        for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                        scanf("%d",&mat1[i][j]);
        printf("\n enter the elements of matrix 2:\n");
        for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                        scanf("%d",&mat2[i][j]);
        if(m==n)
                multi(mat1,mat2,m,n);
        else
                printf("\n the matrices should have equal rows and coloumns\n");
        exit(0);
}

/*wap in c to convert a sparse matrix(in triplet form) to its transpose matrix(triplrt form)*/


#include<stdio.h>
int main()
{
        int a[10][10],b[10][3],c[0][3],i,j,r,c1,k=1,m=0,x,y,z;
        printf("enter the row size and coloumn size of the matrix :\t");
        scanf("%d%d",&r,&c1);
        printf("\n enter the elements for the matrix:\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c1;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
        printf("\n the entered matrix:\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c1;j++)
                {
                        printf("%d\t",a[i][j]);
                }
                printf("\n");
        }
        for(i=0;i<r;i++)
        {
                for(j=0;j<c1;j++)
                {
                        if(a[i][j]!=0)
                        {
                                b[k][0]=i;
                                b[k][1]=j;
                                b[k][2]=a[i][j];
                                k++;
                                m++;
                        }
                }
        }
        b[0][0]=r;
        b[0][1]=c1;
        b[0][2]=m;
        printf("\n the sparse matrix triplet representation is:\n");
        for(i=0;i<k;i++)
        {
                for(j=0;j<3;j++)
                {
                        printf("%d\t",b[i][j]);
                }
                printf("\n");
        }
        x=b[0][0];
        y=b[0][1];
        z=b[0][2];

        c[0][0]=y;
        c[0][1]=x;
        c[0][2]=z;
        k=1;
        if(z>0)
        {
                for(j=0;j<y;j++)
                {
                        for(i=1;i<=z;i++)
                        {
                                if(b[i][1]==j)
                                {
                                        c[k][0]=b[i][1];
                                        c[k][1]=b[i][0];
                                        c[k][2]=b[i][2];
                                        k++;
                                }
                        }
                }
        }
        printf("\n the transposed sparse matrix in triplet representation is:\n");
        for(i=0;i<k;i++)
        {
                for(j=0;j<3;j++)
                {
                        printf("%d\t",c[i][j]);
                }
                printf("\n");
        }
        return 0;
}
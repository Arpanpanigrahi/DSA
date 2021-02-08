// wap in c to insert an element in a sorted array using function//


#include<stdio.h>
#include<stdlib.h>
void insert(int[],int,int);
void main()
{
        int arr[20],size,item,i;
        system("clear");
        printf("\n enter the size of the array\n");
        scanf("%d",&size);
        printf("\n enter the elements of the array\n");
        for(i=0;i<size;i++)
                scanf("%d",&arr[i]);
        printf("\n enter item to be inserted:\n");
        scanf("%d",&item);
        insert(arr,size,item);
}
void insert(int arr[],int size,int item)
{
        int i,j,temp;
        for(i=size-1;item<arr[i] && i>=0;i--)
                arr[i+1]=arr[i];
        arr[i+1]=item;
        size++;
        printf("\n\nAfter insertion array is :\n");
        for(i=0;i<size;i++)
        {
                for(j=1;j<size;j++)
                {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                }
        }
        for(i=0;i<size;i++)
        {
                printf("%d\t",arr[i]);
        }
        printf("\n");
}

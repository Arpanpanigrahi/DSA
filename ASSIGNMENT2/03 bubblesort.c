//wap in c to short the elements of an array using bubble sort//

#include<stdio.h>
#include<stdlib.h>
void bubblesort(int[],int);
void main()
{
        int arr[100],i,size;
        system("clear");
        printf("\n enter the size of the array:\n");
        scanf("%d",&size);
        printf("\n enter the elements of the array:\n");
        for(i=0;i<size;i++)
                scanf("%d",&arr[i]);
        bubblesort(arr,size);
}
void bubblesort(int arr[],int size)
{
        int i,j,temp;
        for(i=0;i<size;i++)
        {
                for(j=0;j<size-1-i;j++)
                {
                        if(arr[j]>arr[j+1])
                        {
                                temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                        }
                }
        }
        printf("\n Ascending of given elements is:\n");
        for(i=0;i<size;i++)
                printf("%d\t",arr[i]);
}
//wap in c to sort the elements of an array using insertion sort//

#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int[],int);
void main()
{
        int i,arr[100],size;
        system("clear");
        printf("\n enter the size of the array:\n");
        scanf("%d",&size);
        printf("\n enter the elements of the array:\n");
        for(i=0;i<size;i++)
                scanf("%d",&arr[i]);
        insertion_sort(arr,size);
}
void insertion_sort(int arr[],int size)
{
        int i,temp,ptr;
        for(i=1;i<size;i++)
        {
                ptr=i;
                for(;ptr>0 && arr[ptr-1];ptr--)
                {
                        temp=arr[ptr];
                        arr[ptr]=arr[ptr-1];
                        arr[ptr-1]=temp;
                }
        }
        for(i=0;i<size;i++)
                printf("%d\t",arr[i]);
}
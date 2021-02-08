//wap in c to sort the elements of an array using selectionsort//

#include<stdio.h>
#include<stdlib.h>
void selectionsort(int[],int);
void main()
{
        int i,arr[100],size;
        system("clear");
        printf("\n enter the size of the array:\n");
        scanf("%d",&size);
        printf("\n enter the elements of the array:\n");
        for(i=0;i<size;i++)
                scanf("%d",&arr[i]);
        selectionsort(arr,size);
}
void selectionsort(int arr[],int size)
{
        int i,ptr,j,temp;
        for(i=0;i<size-1;i++)
        {
                ptr=i;
                for(j=i+1;j<size;j++)
                {
                        if(arr[ptr]<arr[j])
                                ptr=j;
                        if(ptr!=i)
                        {
                                temp=arr[ptr];
                                arr[ptr]=arr[ptr+1];
                                arr[ptr+1]=temp;
                        }
                }
        }
        printf("\n the sorted array is:\n");
        for(i=0;i<size;i++)
                printf("%d\t",arr[i]);
}

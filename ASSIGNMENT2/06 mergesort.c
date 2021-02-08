//wap in c to merge two sorted arrays into a single sorted array and display it using function//

#include<stdio.h>
#include<stdlib.h>
void inputsort(int[],int[],int,int);
void merge_sort(int[],int[],int,int);
void main()
{
        int i,arr1[100],arr2[100],size1,size2;
        system("clear");
        printf("\n enter the size of the array1:\n");
        scanf("%d",&size1);
        printf("\n enter the size of the array2:\n");
        scanf("%d",&size2);
        printf("\n enter the elements of the array1:\n");
        for(i=0;i<size1;i++)
                scanf("%d",&arr1[i]);
        printf("\n enter the elements of array2:\n");
        for(i=0;i<size2;i++)
                scanf("%d",&arr2[i]);
        inputsort(arr1,arr2,size1,size2);
        printf("\n the sorted array is:\n");
        merge_sort(arr1,arr2,size1,size2);
}
void inputsort(int arr1[],int arr2[],int size1,int size2)
{
        int i,j,temp;
        for(i=0;i<size1;i++)
        {
                for(j=0;j<size1;j++)
                {
                        if(arr1[i]>arr1[j])
                        {
                                temp=arr1[i];
                                arr1[i]=arr1[j];
                                arr1[j]=temp;
                        }
                }
        }
        printf("\n the first sorted array\n");
        for(i=0;i<size1;i++)
                printf("%d\t",arr1[i]);
        temp=0;
        for(i=0;i<size2;i++)
        {
                for(j=1;j<size2;j++)
                {
                        if(arr2[i]>arr2[j])
                        {
                                temp=arr2[i];
                                arr2[i]=arr2[j];
                                arr2[j]=temp;
                        }
                }
        }
        printf("\n the second sorted array\n");
        for(i=0;i<size2;i++)
                printf("%d\t",arr2[i]);
}
void merge_sort(int arr1[],int arr2[],int size1,int size2)
{
        int i,j,k,arr3[100];
        for(i=0;i<size1&&j<size2;k++)
        {
                if(arr1[i]<arr2[j]);
                {
                        arr3[k]=arr1[i];
                        i++;
                }
                else
                {
                        arr3[k]=arr2[j];
                        j++;
                }
        }
        if(i>=size1)
        {
                while(j<size2)
                {
                        arr3[k]=arr2[j];
                        j++;
                        k++;
                }
        }
}
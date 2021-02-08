//wap in c to find an element in an array using binary search technique//

#include<stdio.h>
int binary_search(int[],int,int);
int main()
{
        int i,n,size,search,arr[100];
        printf("enter the number of elements\n");
        scanf("%d",&n);
        printf("enter %d integers\n");
        for(i=0;i<search;i++)
                scanf("%d",&arr[i]);
        printf("enter value to find\n");
        scanf("%d",&search);
        binary_search(arr,size,search);
}
int binary_search(int arr[],int size,int search)
{
        int start,last,mid;
        start=0;
        last=size-1;
        mid=(start+last)/2;
        while(start<=last)
        {
                if(arr[mid]<search)
                start=mid+1;
                else if(arr[mid]==search)
                {
                        printf("%d found at location %d\n",search,mid+1);
                        break;
                }
                else
                        last=mid-1;
                        mid=(start+last)/2;
        }
        if(start>last)
                printf("not found %d isn't present in the list\n",search);
}
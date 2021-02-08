//wap in c to search the presence of an element within an arrray using function

#include<stdio.h>
#include<stdlib.h>
void search(int[],int);
main()
{
        int arr[50],i,n;
        system("clear");
        printf("enter the elements\n");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
        search(arr,n);
}
void search(int arr[],int n)
{
        int i,search;
        printf("\n enter the search element\n");
        scanf("%d",&search);
        for(i=0;i<n;i++)
        {
                if(arr[i]==search)
                {
                        break;
                }
        }
        if(arr[i]==search)
                printf("the search element is %d\n",search);
        else
                printf("the element not found\n");
}
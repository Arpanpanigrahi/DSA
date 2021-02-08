//wap in c to delete an element from the nth position in any array using functio

#include<stdio.h>
void delete(int arr[],int);
main()
{
        int n,arr[100],i;
        system("clear");
        printf("enter the size\n");
        scanf("%d",&n);
        printf("enter the elements\n");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
        printf("the elements are\n");
        for(i=0;i<n;i++)
                printf("%d\n",arr[i]);
        delete(arr,n);
}
void delete(int arr[],int n)
{
        int i,pos;
        printf("enter the deleting position of the element\n");
        scanf("%d",&pos);
        pos--;
        n--;
        for(i=pos;i<n;i++);
        {
                arr[i]=arr[i+1];
        }
        printf("the new elements are\n");
        for(i=0;i<n;i++)
                printf("%d\n",arr[i]);
}

//wap in c to insert an element at its position in an array using function

#include<stdio.h>
void insert(int arr[],int);
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
        insert(arr,n);
}
void insert(int arr[],int n)
{
        int i,ele,pos;
        printf("enter the insertion element\n");
        scanf("%d",&pos);
        pos--;
        for(i=n;i<pos;i--)
        {
                arr[i]=arr[i-1];
        }
        arr[pos]=ele;
        n++;
        printf("the new elements are\n");
        for(i=0;i<n;i++)
                printf("%d\n",arr[i]);
}
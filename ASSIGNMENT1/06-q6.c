// wap in c to increase each element to its three times present in an array using function

#include<stdio.h>
void inc(int arr[],int);
main()
{
        int n,arr[100],i;
        system("clear");
        printf("enter the size\n");
        scanf("%d",&n);
        printf("enter the elements\n");
        for(i=0;i<n;i++)
        printf("the elements are\n");
        for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
        inc(arr,n);
}
void inc(int arr[],int n)
{
        int i;
        printf("the elements are 3 times\n");
        for(i=0;i<n;i++)
                printf("%d\n",3*arr[i]);
}
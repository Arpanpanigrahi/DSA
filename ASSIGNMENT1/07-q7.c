//wap in c to determine the number of elements present within certain range in an array using function/

#include<stdio.h>
void range(int arr[],int);
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
        range(arr,n);
}
void range(int arr[],int n)
{
        int i,min,max,c=0;
        printf("enter the minimum range\n");
        scanf("%d",&min);
        printf("enter the maximum range\n");
        scanf("%d",&max);
        for(i=0;i<n;i++)
                if(arr[i]>=min && arr[i]<=max)
                        c++;
        printf("the elements within the range from minimum %d to maximum %d is %d\n",min,max,c);
}
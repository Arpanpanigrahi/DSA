//wap in c to read an array then segregate all the even and odd numbers using function

#include<stdio.h>
void inc(int arr[],int n);
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
        inc(arr,n);
}
void inc(int arr[],int n)
{
        int i,ec=0,oc=0,even[100],odd[100],j=0,k=0;
        for(i=0;i<n;i++)
        {
                if(arr[i]%2==0)
                {
                        ec++;
                        even[j]=arr[i];
                        j++;
                }
                else
                {
                        oc++;
                        odd[k]=arr[i];
                        k++;
                }
        }
        printf("the even elements are\n");
        for(i=0;i<ec;i++)
                printf("%d\n",even[i]);
        printf("the odd elements are\n");
        for(i=0;i<oc;i++)
                printf(("%d\n",odd[i]);
                printf("the no of odd elements=%d\n",oc);
                printf("the no of even elements=%d\n",ec);
                }
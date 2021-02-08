//wap in c to compute ands display the frequency of a given element in an array using function

#include<stdio.h>
void input(int[],int);
void frequency(int[],int,int);
main()
{
        int a[50],n,element;
        printf("enter the size of array:\n");
        scanf("%d",&n);
        printf("enter the element to be searched\n");
        scanf("%d",&element);
        input(a,n);
        frequency(a,n,element);
}
void input(int a[],int n)
{
        int i;
        printf("enter the elements into the array\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
}
void frequency(int a[],int n,int element)
{
        int i,count=0;
        for(i=0;i<n;i++)
        {
                if(a[i]==element)
                {
                        count++;
                }
        }
        printf("%d is repeated %d times",&element,&count);
}
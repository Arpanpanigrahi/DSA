//wap in c to store the full marks secured by 10 students using array.

#include<stdio.h>
#include<stdlib.h>
void input(int[],int);
void display(int[],int);
int class_max(int[],int);
int class_min(int[],int);
int class_sum(int[],int);
int class_avg(int[],int,int);
int main()
{
        int res,n,arr[100],r,m,p;
        system("clear");
        printf("enter the size of the array\n");
        scanf("%d",&n);
        input(arr,n);
        display(arr,n);
        res=class_max(arr,n);
        printf("the maximum is %d\n",res);
        r=class_min(arr,n);
        printf("the minimum is %d\n",r);
        m=class_sum(arr,n);
        printf("the sum of the mark is %d\n",m);
        p=class_avg(arr,n,m);
        printf("the avg is %d\n",p);
}
void input(int arr[],int n)
{
        int i;
        printf("the elements are\n");
                for(i=0;i<n;i++)
                        scanf("%d",&arr[i]);
}
void display(int arr[],int n)
{
        int i;
        printf("the elements are\n");
        for(i=0;i<n;i++)
                printf("\n%d",arr[i]);
}
int class_max(int arr[],int n)
{
        int i,max;
        max=arr[0];
        for(i=1;i<n;i++)
                if(arr[i]>max)
                        max=arr[i];
        return max;
}
int class_min(int arr[],int n)
{
        int i,min;
        min=arr[0];
        for(i=1;i<n;i++)
                if(arr[i]<min)
                        min=arr[i];
        return min;
}
int class_sum(int arr[],int n)
{
        int i,s=0;
        for(i=0;i<n;i++)
                s=s+arr[i];
        return s;
}
int class_avg(int arr[],int n,int m)
{
        int avg;
        avg=m/n;
        return avg;
}
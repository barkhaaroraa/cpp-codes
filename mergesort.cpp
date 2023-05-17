#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int lb,int ub,int mid)
{
    int i=lb,j=mid+1,k=0;
    int sorted[100000];
    
    while(i<=mid && j<=ub)
    {
        if(arr[i]<arr[j])
        {
            sorted[k]=arr[i];
            i++;
        }
        else
        {
            sorted[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            sorted[k]=arr[j];
            k++;
            j++;
        }
    }
    else{
        while(i<=mid)
        {
            sorted[k]=arr[i];
            k++;
            i++;
        }
    }
    for(int i=lb;i<=ub;i++)
    {
        arr[i]=sorted[i-lb];
    }
    
    
}
void divide(int arr[],int lb,int ub)
{
    int mid;
    if(ub>lb)
    {
        mid=(lb+ub)/2;
        
        divide(arr,lb,mid);
        divide(arr,mid+1,ub);
        merge(arr,lb,ub,mid);
    }
}

int main()
{
    int n,t;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        arr[i]=t;
    }
    int sizee=sizeof(arr)/sizeof(int);
    divide(arr,0,sizee-1);
    for(int i=0;i<sizee;i++)
    {
        printf("%d ",arr[i]);
    }
}

#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;


int binary(vector<int>arr)
{
    int s;
    int c=arr.size();
    cout<<"enter number to searched"<<endl;
    cin>>s;
    int beginn=0,endd=c,t=1;
    while(beginn<=endd)
    {
        
        c=(beginn+endd)/2;
        if(arr[c]==s)
        {
            cout<<"found";
            t=0;
            break;
        }
        else
        {
            if(arr[c]>s)
            endd=c-1;
        
            else
            beginn=c+1;

        }
    }
    if(t==1)
    cout<<"not found";
    return 0;
} 
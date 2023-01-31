#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>v,int distances,int c)
{
    sort(v.begin(),v.end());
    int cows=1,t=0;
    int target=v[0]+distances;
    while(cows<c)
    {
        t++;
        if(v[t]>=target)
        {
            cout<<"number"<<v[t]<<endl;
            cout<<"distamce"<<distances<<endl;
           
            target=v[t];
            cows++;
            if(target+distances<=v[v.size()-1]&& cows<c)
            {
                target=v[t]+distances;
            }
            else
            break;
            
            cout<<cows<<endl;
            cout<<"target"<<target<<endl;
        }
            
    }
        

    cout<<"target end"<<target<<endl;

    if(cows!=c)
    {

        return 0;
    }
    else
    {
        return 1;
    }

}

int main()
{
    int c,n,t;
    vector<int>v;
    cin>>c>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    int dis=0;
    sort(v.begin(),v.end());
    int max=v[n-1];
    for(int j=0;j<max;j++)
    {
        if(search(v,j,c)==1)
        {
            dis=j;
            cout<<"j is"<<j<<endl;
        }
    }
    cout<<dis;
    return 0;
}





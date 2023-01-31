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
 
// int main()
// {
//     int n;
//     vector<int>arr;
//     cout<<"enter number of elements"<<endl;
//     cin>>n;
//     int j;
//     for(int i=0;i<n;i++)
//     {
        
//         cin>>j;
//         arr.push_back(j);
        
//     }
//     sort(arr.begin(),arr.end());
//     binary(arr);
    
// }
    //vector<int>arra;
    // for(int i=1;i<100;i++)
    // {
    //     arra.push_back(j);

    // }
    // int arr[]={1,};
    // map<int,string> m;  //map dictionary key-value pair explicit
    // m[3]="hello world";

    // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    // {
    //     m[arr[i]]++;
    // }
    // for(auto i:m)
    // {
    //     cout<<i.first<< "  "<<i.second<<endl;
    // }
    // for(int i=0;i<arra.size();i++)  // vector
    // {
    //     cout<<arra[i]<<endl;
    // }
    // cout<<arra.size();


// int main()

//     {
//         vector<int>vec;
//         vec={1,2,3,3,2,9,3,0,1};
//         // string a="hellow world";
//         // int v=a.find("e");
//         // cout<<v;
//         random_shuffle(vec.begin(),vec.end());
//         for(auto x:vec)
//         {
//             cout<<x;
//         }
//     }

// int hcf(int a,int b)
// {
//     int hcf;
//     if(a==0 || b==0)
//     return 0; 
//     if(a>b)
//     {
//         a=a+b;
//         b=a-b;
//         a=a-b;
//     }
    
//     for(int i=1;i<=a;i++)
//     {
//         if(a%i==0 && b%i==0)
//         hcf=i;
//     }
//     return hcf;

// }

// int main()
// {
//     int a,b;
//     cout<<"enter numbers: "<<endl;
//     cin>>a;
//     cin>>b;
//     if(a>b)
//     {
//         a=a+b;
//         b=a-b;
//         a=a-b;
//     }
//     int hcf_=hcf(a,b,0);
//     int product=a*b;
//     cout<<"the lcm is"<<product/hcf_;
// }

// int sumofthree(vector<int>v,int target)
// {
//     sort(v.begin(),v.end());

//     int a=0,u=v.size()/2,c,b;
//     int summ;
//     for(a;a<u;a++)
//     {
//         b=v.size()/2,c=v.size()-1;
//         while(c!=b)
//         {
//             summ=v[a]+v[b]+v[c];
            
//             if(summ==target)
//             {
//                 return {v[a],v[b],v[c]};
                
//             }
//             else if(summ>target)
//             {
//                 c=c-1;
//             }
//             else
//             {
//                 b=b+1;
//             }
//         }

//     }
//     return {}
// int main()
// {
//     vector<int>v;
    

//     v={-1,0,1,-2,-1,-4};
    
//     int target;
//     cout<<"enter target"<<endl;
//     cin>>target;

//     sumofthree(v,target);
    
// }

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) 
//     {
//         vector<vector<int>> ans;

//         sort(nums.begin(),nums.end());

//         int a=0,u=nums.size()/2,c,b;
//         int summ;
//         for(a;a<u;a++)
//         {
//             b=nums.size()/2,c=nums.size()-1;
//             while(c>b && a!=b)
//             {
//                 summ=nums[a]+nums[b]+nums[c];
                
//                 if(summ==0)
//                 {
//                     ans.push_back({nums[a],nums[b],nums[c]});
                    
//                 }
//                 else if(summ>0)
//                 {
//                     c=c-1;
//                 }
//                 else
//                 {
//                     b=b+1;
//                 }
//             }
//         }
//         return  ans;
//     }
// };

#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>freq(10,0);
    string strr;
    cin>>strr;
    int i=0;
    while(strr[i])
    {
        if(int(strr[i])>=48 && int(strr[i])<=57)
        {
            freq[strr[i]]++;
        }
        i++;
    }
    for(auto x:freq)
    {
        cout<<x.second<<" ";
    }
    return 0;
    
}
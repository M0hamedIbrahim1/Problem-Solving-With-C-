//link : https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/P
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
long long arr[50];
int main()
{
    long long t,n,pos=0,neg=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        pos=0;
        neg=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]>0)
                pos+=arr[i];
            else
                neg+=arr[i];
        }
        sort(arr,arr+n);
        if(pos<abs(neg))
        {
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        else if(abs(neg)<pos)
        {
            cout<<"YES"<<endl;
            for(int i=n-1; i>=0; i--)
            {
                cout<<arr[i]<<" ";
            }
        }
        else
        {
             cout<<"NO"<<" ";
        }
        cout<<endl;
    }
    return 0;
}

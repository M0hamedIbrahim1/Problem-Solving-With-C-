//link:   https://codeforces.com/problemset/problem/1095/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int n;
    cin>>n;
    string str;
    cin>>str;
    int i=0,sum=0;
    while(sum<str.size())
    {
        cout<<str[sum];
        i++;
        sum=sum+i;
 
    }
}

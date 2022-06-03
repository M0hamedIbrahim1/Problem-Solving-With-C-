// link : https://codeforces.com/group/x1IbeOVM4y/contest/291160/problem/D
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
int x,y,z,res,sum;
cin>>x>>y>>z;
res = x%z;
cout<< y*res<<" ";
res = y*x;
cout<<res%z;
}
 

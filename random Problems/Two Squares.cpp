//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/L
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
 double l,s1,s2,q;
 cin>>l>>s1>>s2>>q;
 for(int i =0;i<q;i++){
 	double n;
 	cin>>n;
 	double time = sqrt(2)* (l - sqrt(n))/(s2-s1) ;
 	cout<<fixed<<setprecision(6)<<abs(time)<<endl;
 } 
}	

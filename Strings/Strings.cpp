// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
//Author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	char s;
	cin>>s1>>s2;
	
	cout<<s1.length()<<" "<<s2.length()<<endl;
	cout<<s1+s2<<endl;
	s = s2[0];
	s2[0]=s1[0];
	s1[0]=s;
	cout<<s1<<" "<<s2;
}

//link :   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
//Author :@Mohamed Ibrahim 

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long sum=0;
	string s;
	cin>>s;
	
	for(int i = 0 ;i<s.size();i++){
		sum +=s[i]-'0';
	}
cout<<sum;
}

//link:   https://codeforces.com/problemset/problem/734/B
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int n2,n3,n5,n6;
	cin>>n2>>n3>>n5>>n6;
	int m = min(n2,min(n5,n6));
	n2 = n2 - m;
	int mm = min(n3,n2);
	mm *=32;m *=256;
	cout<<m+mm;
}

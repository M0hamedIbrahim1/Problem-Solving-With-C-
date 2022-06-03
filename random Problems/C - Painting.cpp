// link : https://codeforces.com/group/x1IbeOVM4y/contest/291160/problem/C
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt = 0;
	int n,p,res=0,sum;
	cin>>n>>p;
while(res<100){
	cnt++;
	sum = n*p;
	res +=sum;
}
cout<<cnt;
}
 

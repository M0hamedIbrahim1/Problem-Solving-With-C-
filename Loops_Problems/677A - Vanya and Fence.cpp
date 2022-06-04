//link   :  https://codeforces.com/problemset/problem/266/B
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n,num,h,cnt=0;
cin>>n>>h;

for(int i = 0;i<n;i++){
	cin>>num;
	if(num>h){
		cnt+=2;
	}else{
		cnt++;
	}
}
cout<<cnt;
}
 
 

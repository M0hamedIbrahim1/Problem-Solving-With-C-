// link :  https://codeforces.com/problemset/problem/228/A
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<long long>v;
long long num;
for(int i = 0 ; i < 4 ; i++){
	cin>>num;
	v.push_back(num);
}
int cnt = 1;
sort(v.begin(), v.end());
for(int i = 0 ; i < 3 ; i++){
	if(v[i]!=v[i+1]){
		cnt++;
	}
}
cout<<4-cnt;
}

// link :  https://codeforces.com/problemset/problem/520/A
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
int size,cnt=1;
cin>>size;
string s,t;
cin>>s;
for(int i = 0 ; i<size;i++){
	if(s[i]>='A'&&s[i]<='Z'){
		s[i]=s[i]+32;
	}
	t+=s[i];
}
sort(t.begin(),t.end());
for(int i = 0 ; i < size-1 ; i++){
	if(t[i]!=t[i+1]){
		cnt++;
	}
}
if(cnt==26){
	cout<<"YES";
	return 0;
}
cout<<"NO";
}


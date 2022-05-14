//link : https://codeforces.com/problemset/problem/339/A
//author :@Mohamed ibrahim

#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v;
string s;
cin>>s;
for(int i =0;i<s.length();i++){
	if(i%2==0){
		v.push_back(s[i]-'0');
	}
}
sort(v.begin(),v.end());
for(int i =0;i<v.size();i++){
	cout<<v[i];
	if(i!=v.size()-1){
		cout<<"+";
	}
}
}
   

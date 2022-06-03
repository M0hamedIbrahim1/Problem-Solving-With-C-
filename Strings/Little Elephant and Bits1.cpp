// link : https://codeforces.com/group/x1IbeOVM4y/contest/288660/problem/D
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
int flag = 1;
string s,str;
cin>>s;
for(int i = 0 ; i < s.length();i++){
	if(s[i]=='0' && flag == 1){
		flag = 0;
		continue;
	}else{
		str+=s[i];
	}
}
if(str.length()==s.length()){
	cout<<str.erase(str.length()-1);
}else{
	cout<<str;
}
}

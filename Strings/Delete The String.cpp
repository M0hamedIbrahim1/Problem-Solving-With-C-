// link : https://codeforces.com/group/x1IbeOVM4y/contest/288660/problem/B
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{

string s;
int size,num;
cin>>s>>size;
for(int i =1;i<=size;i++){
	cin>>num;
	s[num] = ' ';
}
for(int i = 0 ; i <s.length();i++){
	if(s[i] != ' '){
		cout<<s[i];
	}
}
}

//link     :https://codeforces.com/problemset/problem/112/A
//author  :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
string s1,s2;
cin>>s1>>s2;
	for(int i = 0;i<s1.length();i++){
			if(s1[i]>='A'&&s1[i]<='Z'){
				s1[i]=s1[i]+32;
			}
			if(s2[i]>='A'&&s2[i]<='Z'){
				s2[i]=s2[i]+32;
			}
	}
	if(s1==s2){
		cout<<"0";
	}else if(s1>s2){
		cout<<"1";
	}else{
		cout<<"-1";
}

}


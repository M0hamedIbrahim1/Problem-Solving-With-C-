//link : https://codeforces.com/problemset/problem/58/A
//author :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int cnt = 0,k=0,j;
 string res = "hello";
 string s ;
 cin>>s;
	 for(int i =0;i<res.length();i++){
	 	for(j =k;j<s.length();j++){
	 		if(res[i]==s[j]){
	 			cnt++;
	 			k++;
	 			break;
			}
			k++;
		}
	 }
	if(cnt==5){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
   

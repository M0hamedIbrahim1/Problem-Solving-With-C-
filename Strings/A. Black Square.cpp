//link   : https://codeforces.com/problemset/problem/431/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int a1,a2,a3,a4,sum = 0 ;
	cin>>a1>>a2>>a3>>a4;
	string s;
	cin>>s;
	for(int i = 0 ; i < s.length() ; i++){
		if(s[i]=='1'){
			sum+= a1;
		}else if(s[i]=='2'){
			sum+=a2;
		}else if(s[i]=='3'){
			sum+=a3;
		}else{
			sum+=a4;
		}
	}
	cout<<sum;
}
 

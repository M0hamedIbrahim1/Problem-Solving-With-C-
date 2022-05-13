//link     :https://codeforces.com/group/LKPSX7Pt2W/contest/314606/problem/W
//author  :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main(){
long long len;
string s;
cin>>len>>s;
int zero=0,one=0;
	for(int i =0;i<len;i++){
		if(s[i]=='0'){
			zero++;
		}
		else{
			one++;
		}
	}
	int ma = max(zero,one);
	int mi = min(zero,one);
	cout<<ma-mi;
}
   

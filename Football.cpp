// link : https://codeforces.com/group/LKPSX7Pt2W/contest/323155/problem/V
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
  
 
int main()
{
	string s;
	cin>>s;
	int cnt_z = 0 ; 

	for(int i = 0 ; i < s.length();i++){
		if(s[i] == s[i+1]){
			cnt_z++;
		}
		else{
			cnt_z = 0;
		}
	if(cnt_z==6){
		cout<<"YES";
		return 0;
	}		
	}
	cout<<"NO";
}

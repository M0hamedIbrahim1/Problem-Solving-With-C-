//link : https://codeforces.com/group/LKPSX7Pt2W/contest/316385/problem/G
//author :@Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int main()
{	int n,cnt=0,flag = 1;
	string s;
	cin>>n>>s;
	
	for(int i = 0 ; i<n;i++){
		
		if(s[i]=='+' && flag == 1){
			cnt++;
			flag = 0;
		}else if(flag == 0){
			if(s[i]=='+'){
				cnt++;
			}else{
				cnt--;
			}
			if(cnt<0){
				cnt=0;
			}
		}
		
	}
cout<<cnt;
}

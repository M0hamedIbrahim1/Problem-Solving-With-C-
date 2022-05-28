// link : https://codeforces.com/group/LKPSX7Pt2W/contest/323155/problem/P
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
  
 
int main()
{
	int q;
	cin>>q;
	while(q--){
		int size;
		string s;
		cin>>s;
		size = s.length();
		int i = 0 , j = size-1,cnt=0;
		while(s[i]=='0'){
			i++;	
		} 
		while(s[j]=='0'){
			j--;	
		} 
		for(int k = i;k<j;k++){
			if(s[k]=='0'){
				cnt++;
			}
		}
		cout<<cnt<<endl;
		
	}
}

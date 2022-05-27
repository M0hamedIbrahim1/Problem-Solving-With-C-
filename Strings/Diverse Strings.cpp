// link : https://codeforces.com/group/LKPSX7Pt2W/contest/323155/problem/M
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
  
 
int main()
{
	
	int q;
	cin>>q;
	while(q--){
 
	int freq[26]={};
	string s;
	cin>>s;
	int size = s.length();
	 sort(s.begin(), s.end()); 
 	for(int i = 0 ; i < size; i++){
 		freq[s[i]-97]++;
	}
	int f = s[0]-97;
	int e = f+size;
	int flag = 1;
	for(int i = f ; i < e ; i++){
		if(freq[i]!=1){
			flag = 0;
			break;
		}
	}
	if(flag == 1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	}
}

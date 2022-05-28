// link : https://codeforces.com/group/LKPSX7Pt2W/contest/323155/problem/R
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
  
 
int main()
{	int freq[26]={};
	int size,cnt = 0;
	string s;
	cin>>s;
	size = s.length();
	for(int i = 0 ; i<size;i++){
		freq[s[i]-97]++;
	}
	for(int j = 0 ; j < 26 ; j++){
		if(freq[j]>0){
			cnt++;
		}
	}
	if(cnt%2==0){
		cout<<"CHAT WITH HER!";
	}else{
		cout<<"IGNORE HIM!";
	}
}

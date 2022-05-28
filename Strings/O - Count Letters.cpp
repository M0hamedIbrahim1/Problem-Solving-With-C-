// link :https://codeforces.com/group/LKPSX7Pt2W/contest/323155/problem/O
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
  
 
int main()
{
 
	int freq[26]={};
	string s;
	cin>>s;
	int size = s.length();
  	for(int i = 0 ; i < size; i++){
 		freq[s[i]-97]++;
	}
	for(int i = 0 ; i < 26 ; i++){
		if(freq[i]>0){
			cout<<char(i+97)<<" : "<<freq[i]<<endl;
		}
	}
 
}

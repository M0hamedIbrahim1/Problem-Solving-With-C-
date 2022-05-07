//link :   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R
//Author :@Mohamed Ibrahim 

#include<bits/stdc++.h>
using namespace std;
int main()
{
int size,score=0;
cin>>size;
string s;
cin>>s;

for(int i =0;i<s.size();i++){
	if(s[i]=='V'){
		score+=5;
	}
	else if(s[i]=='W'){
		score+=2;
	}
	else if(s[i]=='X'){
		s[i+1] = '0';
	}
	else if(s[i]=='Y'){
		if(i != s.size() - 1){
			s.push_back(s[i+1]);
			s[i+1] = '0';
	}}
	else if(s[i]=='Z'){
		if(i != s.size() - 1){
			if(s[i+1]=='V'){
				score /=5;
				s[i+1]='0';
			}
			else if(s[i+1]=='W'){
				score /=2;
				s[i+1]='0';
				
		}}
	
	
}}


cout<<score;

}


	

//link : https://codeforces.com/group/LKPSX7Pt2W/contest/316385/problem/L
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main(){
 int q;
 cin>>q;
 while(q--){
 	int size;
 	char ch = 'E';
	string s;
 	cin>>size>>s;
 	
 	for(int i = 0 ; i < size; i++){
 		if(s[i]=='0'){
 			if(ch == 'E'){
 				ch = 'S';
			 }else if(ch =='S'){
			 	ch = 'W';
			 }else if(ch == 'W'){
			 	ch = 'N';
			 }else{
			 	ch = 'E';
			 }
		 }else{
		 	if(ch =='E'){
		 		ch = 'N';
			 }else if(ch == 'N'){
			 	ch = 'W';
			 }else if(ch =='W'){
			 	ch = 'S';
			 }else{
			 	ch = 'E';
			 }	
		}	
	}
 	cout<<ch<<endl;	
 }
}

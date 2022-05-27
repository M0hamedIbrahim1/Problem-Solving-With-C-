// link : https://codeforces.com/group/LKPSX7Pt2W/contest/323155/problem/I
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
  
int main(){
	string s;
	int size,cnt=0;
	cin>>size>>s;
 
	for(int i = 0;i<size;i+=2){
 		if(s[i]=='a'&&s[i+1]=='a'){
 			s[i]='b';
 			cnt++;
		}else if(s[i]=='b'&&s[i+1]=='b'){
			s[i]='a';
			cnt++;
		}
 	}
 	cout<<cnt<<endl;
 	cout<<s;
 

}

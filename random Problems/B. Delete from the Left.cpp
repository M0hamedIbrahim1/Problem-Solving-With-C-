//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/B
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 string s1,s2;
 int c1=0,c2=0;
 cin>>s1>>s2;
 for(int i =0;i<s1.length();i++){
 	if(s1[s1.length()-1-i]==s2[s2.length()-1-i]){
 		c1++;
	 }else{
	 	break;
	 }
 }
 cout<<s1.length()+s2.length() - 2*c1;
}
 

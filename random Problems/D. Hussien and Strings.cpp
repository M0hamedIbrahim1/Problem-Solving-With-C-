//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/D
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;						  
int main() {
int flag =0;
string s1,s2;
char t;
cin>>s1>>s2;
if(s1.length()!=s2.length()){
	cout<<"NO";
	return 0;
}
for(int i=0;i<s1.length();i++){
	if(s1[i]!=s2[i]){
		for(int j =i+1;j<s1.length();j++){
			if(s1[i]==s2[j] && s2[i]==s1[j]){
				t = s2[j];
				s2[j]=s2[i];
				s2[i]=t;
				flag =1;
				break;		
			}else if(s2[i]==s1[j] && s2[j]==s1[i]){
				t = s1[j];
				s1[j]=s1[i];
				s1[i]=t;
				flag =1;
				break;
			}
		}
		if(flag == 1){
			break;
		}else{
			cout<<"NO";
			return 0;
		}
		
		
	}
}
if(flag ==0){
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	for(int i=0;i<s1.length()-1;i++){
		if(s1[i]==s1[i+1]){
			flag =1;
			break;
		}
	}
}
if(flag==0){
	cout<<"NO";
	return 0;
}else{
	for(int i=0;i<s1.length();i++){
		if(s1[i]!=s2[i]){
			cout<<"NO";
			return 0;
		}
	}	
}
cout<<"YES";
}

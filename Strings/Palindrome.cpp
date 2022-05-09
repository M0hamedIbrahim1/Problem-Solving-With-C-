//link :  https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
//Author :@Mohamed Ibrahim 

#include<bits/stdc++.h>
#include<string> 
using namespace std;
 
int main(){
string s;
cin>>s;
int size,flag = 0;
size = s.length();

char s1[size];
char s_reverse[size];
for(int i = 0;i<size;i++){
	
	s1[i]=s[i];
}

int j =0; 
for(int i = size-1;i>=0;i--){
	
	s_reverse[j]=s[i];
	j++;
}
for(int i = 0;i<size;i++){
		
	if(s[i]== s_reverse[i]){
		flag = 1;
	}
	else{
		flag = 0;
		cout<<"NO";
		break;
	}


}
if(flag ==1){
	cout<<"YES";
}





}
	

#include<bits/stdc++.h>
using namespace std;
int main(){
	
 
int cases;
cin>>cases;
while(cases){
	string s;
	cin>>s;
 if(s.length()<=10){
 	cout<<s<<endl;
 }
 
 else{
 	cout<<s[0];
 	cout<<s.length()-2;
 	cout<<s[s.length()-1]<<endl;
 
 
 }
 
	cases--;
}
	
}

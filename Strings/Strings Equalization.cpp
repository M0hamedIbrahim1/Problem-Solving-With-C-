// link : https://codeforces.com/group/LKPSX7Pt2W/contest/323155/problem/N
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
 
int main() {
  int t ; cin>>t ;
  while(t--){
  string s1 , s2 ;
  cin>>s1>>s2;
  int count=0;
  bool ok=0;
for(int i=0 ; i<s1.length() ; i++){
	for(int j=0 ; j<s2.length() ; j++){
		if(s1[i]==s2[j]){
			ok=1;
			cout<<"YES"<<endl;
			break;
		}
	}
	if(ok)
	break;
	else
	count++;
}
  if(ok==0)
  cout<<"NO"<<endl;
  }
}

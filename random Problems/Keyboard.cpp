//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/E
//author: Mohamed Ibrahim
 
#include <bits/stdc++.h>
using namespace std;

int main() {
 string s;
 string o = "/qwertyuiopasdfghjkl;zxcvbnm,./q";
 char c;
 cin>>c>>s;
	 for(int i =0;i<s.length();i++){
		for(int j = 1;j<o.length()-1;j++){
			if(c=='R' && s[i]==o[j]){
				cout<<o[j-1];
				break;
			}
			else if(c=='L' && s[i]==o[j]){
				cout<<o[j+1];
				break;				
			}
		}
	}
}
 

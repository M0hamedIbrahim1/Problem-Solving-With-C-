//link :   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T
//Author :@Mohamed Ibrahim 

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
 getline(cin,s);

for(int i =0;i<s.length();i++){
	if(s[i]=='?'){
		i++;
		for(int j=i;j<s.length();j++){
			if(s[j]=='='){
				cout<<": ";
				j++;
			}
			if(s[j]=='&'){
				cout<<endl;
				j++;
			}
			cout<<s[j];
			
		}
		
		break;
		
	}
	
}
 
}



	

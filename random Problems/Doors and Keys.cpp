//link:   https://codeforces.com/problemset/problem/1644/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main() {
	int t,flag;
	cin>>t;
	while(t--){
		string s;
		int a=0,b=0,c=0,flag = 0;
		cin>>s;
		for(int i = 0 ; i < s.length() ; i++)
		{
		  	if(s[i]=='r'){
                a++;
            }
            else if(s[i]=='g'){
                b++;
            }
            else if(s[i]=='b'){
                c++;
            }
             else if(s[i]=='R' && a!=1){
                flag = 1;
            }
             else if(s[i]=='G' && b!=1){
                flag = 1;
            }
             else if(s[i]=='B' && c!=1){
                flag = 1;
            }
		
		}
		if(flag == 1) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}

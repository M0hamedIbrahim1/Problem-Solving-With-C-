//link:   https://codeforces.com/problemset/problem/133/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	string s;
	cin>>s;
	bool isfound = false;
	for(int i = 0 ; i < s.length() ; i++){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
			isfound = true;
			break;
		}
	}
	if(isfound) cout<<"YES";
	else cout<<"NO";
}

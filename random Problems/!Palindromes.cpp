//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/M
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
string res;
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int count = 0;
string t,s;
cin>>s;
t = s;
for(int i = 0;i<s.length();i++){
	if(s[i]==s[0])
		count++;
}
if(count == s.length())
{
	cout<<"0";
	return 0;
}
reverse(t.begin(),t.end());
if(s==t){
	cout<<s.length()-1;
}else{
	cout<<s.length();
}

}

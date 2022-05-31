//link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std; 

	bool check_palin(string s){
		int size = s.length()/2;
		bool res = true;
		// a ? z ?
		for(int i=0,j=s.length()-1;i<=size;i++,j--){
			if((s[i] == s[j] )|| (s[i]!='?'&&s[j]=='?' )|| (s[i]=='?'&&s[j]!='?')|| (s == "?")){
				res= true;
			}
			else {
				res= false;
				break;
			}
			
		}
		return res;
	}

int main()
{
string word;
int size;
cin>>word;
size =  word.length()/2;
if(check_palin(word)){
	for(int i=0,j=word.length()-1;i<=size;i++,j--){
		if(word[i]!='?'&&word[j]=='?'){
			word[j]=word[i];
		}
		else if(word[i]=='?'&&word[j]!='?'){
			word[i]=word[j];
		}
		else if(word[i]=='?' && word[j]=='?'){
			word[i]='a';
			word[j]='a';
		}
	
	}
	cout<<word;
}
else{
	cout<<"-1";
}


}

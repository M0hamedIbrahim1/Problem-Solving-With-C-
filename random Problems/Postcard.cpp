//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/M
//author: Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, a=0,b=0,c;
	string mess, ret="";

	cin >> mess >> k;
	for(int i=0; i < mess.size(); i++){
		if(mess[i] != '*' && mess[i] != '?') a++;
	}
	for(int i=0; i < mess.size(); i++){
		if(mess[i]=='?'){
			if(a > k) a--, ret.pop_back();
		}
		else if(mess[i]=='*'){
			while(a < k){
				ret.push_back(ret.back());
				a++;
			}
			if(a > k) a--,ret.pop_back();
		}
		else{
			ret.push_back(mess[i]);
		}
	}
	if(a==k){
		cout << ret<<endl;
	}
	else{
		puts("Impossible");
	}
}

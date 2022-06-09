//link:   https://codeforces.com/problemset/problem/1520/A
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
int main (){
	int q;
	cin>>q;
	while (q--)
	{	
		int size,flag = 1,k=0;
		cin>>size;
		string s;
		cin>>s;
		char ch[27]={},c;
		for(int i = 0 ; i < size ; i++){
			if(s[i] != s[i+1]){
				if(ch[s[i]-65] > 0){
					flag = 0;
					break;
				}else{
					ch[s[i]-65]++;
				}
			}
		}
		if(flag == 1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
 
	}
}


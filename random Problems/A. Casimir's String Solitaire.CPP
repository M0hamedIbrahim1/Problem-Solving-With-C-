//link   : https://codeforces.com/problemset/problem/1579/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int t;
	cin>>t;
	while(t--){
		int A = 0, B = 0 ,C = 0 , flag = 1;
		string s;
		cin>>s;
		for(int i = 0 ; i < s.length() ;i++){
			if(s[i] == 'A') A++;
			else if(s[i] == 'B') B++;
			else C++;
		}
		if(A > 0)
		{
			if(B>=A)
			{
				B = B-A ; A=0;
			} 
			else
			{
				flag = 0;
			} 
			
		}
		if(C > 0)
		{
			if(C <= B){
				B = B-C;C=0;
			} 
			else{
				flag = 0;
			} 
		}
		if(flag == 1 && A+B+C == 0) cout<<"YES";
		else cout<<"NO";
		
		cout<<endl;
	}
}

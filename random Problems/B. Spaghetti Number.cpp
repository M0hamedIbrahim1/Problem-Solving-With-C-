//link   :  https://codeforces.com/group/x1IbeOVM4y/contest/291160/problem/B
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int size,a,b,n,m=100,n_all;
cin>>size;
string s;
cin>>s;
for(int i = 0 ; i < size-1 ; i++){
	a = s[i]-48;
	if(a % 2 != 0){
		for(int j = i+1;j<size;j++){
			b = s[j]-48;
			if(b % 2 == 0){
				n_all = a*10;
				n_all +=b;	
				m = min(m,n_all);
			}

		}
		
	}

 
}
if(size<2 || m == 100){
	cout<<"-1";
	return 0;
}
cout<<m;
 
}
 
 

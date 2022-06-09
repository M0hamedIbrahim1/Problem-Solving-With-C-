//link:   https://codeforces.com/problemset/problem/703/A
//author: Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int main (){
	int q,a,b,sum=0,summ=0;
	cin>>q;
	while (q--)
	{	
		cin>>a>>b;
		if(a>b) sum++;
		if(b>a) summ++;
	}
	if(sum == summ){
		cout<<"Friendship is magic!^^";
	}else if(sum>summ){
		cout<<"Mishka";
	}else{
		cout<<"Chris";
	}
}

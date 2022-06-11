//link   : https://codeforces.com/problemset/problem/1551/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main()
{	long long num;
	int t;
	cin>>t;
	while(t--){
		cin>>num;
		if(num%3==0){
			cout<<num/3<<" "<<num/3<<endl;
		}
		else{
			if((num/3+1)+(num/3 * 2) == num){
				cout<<num/3 + 1<<" "<<num/3<<endl ;
			}
			else{
				cout<<num/3<<" "<<num/3 + 1<<endl;
			}
		}
	}
}
 

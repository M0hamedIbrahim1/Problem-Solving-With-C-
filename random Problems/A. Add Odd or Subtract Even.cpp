//link   : https://codeforces.com/problemset/problem/1311/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main()
{	long long a,b;
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b;
			if(b>a){
				if((a%2 == 0 && b%2 != 0 )|| (a%2 != 0 && b%2 == 0 )){
					cout<<"1"<<endl;
				}else{
					cout<<"2"<<endl;
				}
			}
			else if(a>b){
				if((a%2 != 0 && b % 2 != 0 )||((a%2 == 0 && b % 2 == 0 )) ){
					cout<<"1"<<endl;
				}else{
					cout<<"2"<<endl;
				}	
			}
			else{
				cout<<"0"<<endl;
			}

	}
}
 

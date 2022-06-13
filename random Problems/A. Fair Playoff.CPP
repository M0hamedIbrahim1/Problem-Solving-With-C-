//link:   https://codeforces.com/problemset/problem/1535/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n1,n2,n3,n4;
	cin>>t;
	while(t--){
		cin>>n1>>n2>>n3>>n4;
		if(n1>n2){
			if(n3>n4){
				if(n3>n1){
					if(n4>n1){
						cout<<"NO"<<endl;
					}else{
						cout<<"YES"<<endl;
					}
				}
				else{
					if(n2>n3){
						cout<<"NO"<<endl;
					}else{
						cout<<"YES"<<endl;
					}
				}
			}else{
				if(n4>n1){
					if(n3>n1){
						cout<<"NO"<<endl;
					}else{
						cout<<"YES"<<endl;
					}
				}else{
					if(n2>n4){
						cout<<"NO"<<endl;
					}else{
						cout<<"YES"<<endl;
					}
				
				}
			}	
		}
		else if(n2>n1){
			if(n3>n4){
				if(n3>n2){
					if(n4>n2){
						cout<<"NO"<<endl;
					}else{
						cout<<"YES"<<endl;
					}
				}
				else{
					if(n1>n3){
						cout<<"NO"<<endl;
					}else{
						cout<<"YES"<<endl;
					}
				}
			}else{
				if(n4>n2){
					if(n3>n2){
						cout<<"NO"<<endl;
					}else{
						cout<<"YES"<<endl;
					}
				}else{
					if(n1>n4){
						cout<<"NO"<<endl;
					}else{
						cout<<"YES"<<endl;
					}
				
				}
			}	
		}
	}
}

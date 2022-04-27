#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 								  
int main(){
int n1,n2,m,max=1;
cin>>n1>>n2;
m = min(n1,n2);
for(int i=1;i<=	m;i++){
	if(n1%i==0 &&n2%i==0){
		if(max<i){
			max=i;
		}
	}
}
cout<<max;
}

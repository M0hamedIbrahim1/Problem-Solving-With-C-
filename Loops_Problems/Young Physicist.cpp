//link     :https://codeforces.com/group/LKPSX7Pt2W/contest/314606/problem/X
//author  :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main(){
int cases,n1,n2,n3,N1=0,N2=0,N3=0;
cin>>cases;
	while(cases--){
		cin>>n1>>n2>>n3;
		N1+=n1;
		N2+=n2;
		N3+=n3;
	}
	if(N1==0 && N2==0 && N3==0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
   

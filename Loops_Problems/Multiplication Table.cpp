//link     :https://codeforces.com/group/LKPSX7Pt2W/contest/314606/problem/T
//author  :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main(){
long long size,n;
cin>>size>>n;
int cnt=0;
for(int i = 1;i<=size;i++){	
	if(n%i==0 && n/i <= size){
		cnt++;
	}
}
     cout<<cnt;
}
   

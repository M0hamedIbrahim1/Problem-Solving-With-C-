//link     :https://codeforces.com/group/LKPSX7Pt2W/contest/314606/problem/V
//author  :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main(){
 int cases;
 cin>>cases;
 while(cases--){
	int angle;
	cin>>angle;
	if(360 % (180-angle)==0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	cout<<endl;
 }
}
   

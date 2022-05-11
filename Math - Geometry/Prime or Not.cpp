// link : https://codeforces.com/group/LKPSX7Pt2W/contest/314630/problem/B
// author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
int cases;
cin>>cases;
while(cases){
	long long num;
	cin>>num;
	bool isprime = true;
	for(int i = 2;i<=sqrt(num);i++){
		if(num%i==0){
			isprime = false;
			break;
		}
	}
	if(!isprime || num==1 || num ==2){
		cout<<"Not"<<endl;
	}else{
		cout<<"Prime"<<endl;
	}
	
	cases--;
}
 

}

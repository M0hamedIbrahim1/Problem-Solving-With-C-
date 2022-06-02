//link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/Q
//author : @Mohamed Ibrahim


#include<bits/stdc++.h>
using namespace std; 								  
int main() {

string val;
cin>>val;
int start = 97;
int step = 0;
for(int i=0;i<val.size();i++){
	int res = abs(val[i]-start);
	if(res<=13){
		step+=res;
	}else{
		step += 26-res;
	}
	start = val[i];
}
 cout<<step;
}
 

//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/T
//author : @Mohamed Ibrahim

	#include <iostream>
	using namespace std;
long long C(long long n,long long r){
	long long res = 1,t=2;
	for(int i =r+1;i<=n;i++){
		res *=i;
		if(t<=n-r && res%t==0){
			res = res/t;
			t++;
		}
  	} 
return res;
} 
	int main()
	{
	long long n,r;
	cin>>n>>r;
	if(r>n){
		cout<<"0";
		return 0;
	}
	cout<<C(n,r);
	}

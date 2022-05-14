//link : https://codeforces.com/problemset/problem/276/A
//author :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,k,f,t,res=-2000000001;
cin>>n>>k;
for(int i = 0 ; i<n;i++){
	cin>>f>>t;
	
	if(t>k){
		res = max( res, f - (t - k));
	}else{
		res = max(res,f);
	}

}
cout<<res;
}

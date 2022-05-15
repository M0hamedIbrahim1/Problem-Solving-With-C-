//link : https://vjudge.net/contest/492820#problem/U

#include <bits/stdc++.h>
using namespace std;

int main() {
int n,m,a,b,res=0,rubel=0,cnt=0,rem;
cin>>n>>m>>a>>b;

if(n<=m && b <= a*n){
	cout<<b;
	return 0;
}else if(n<m && b>a*n){
	cout<<a*n;
	return 0;
}

res = n/m;
if(n%m==0){
	if(res*b<= a*n){
		cout<<res*b;
	}else{
		cout<<a*n;
	}
}else if(n%m !=0){
	rem = n - res*m;
	if((rem*a)+(res*b ) <= (res*b)+b){
		cout<<(rem*a)+(res*b);
	}else{
		cout<<(res*b) +b;
	}
}

return 0;
}

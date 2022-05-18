//link : https://codeforces.com/group/LKPSX7Pt2W/contest/320783/problem/E
//author : @Mohamed Ibrahim

#include<bits//stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--){
		long long a,b,n,mi,ma;
		cin>>a>>b>>n;
		for(int i = 0;;i++){
			mi = min(a,b);
			ma = max(a,b);
			
			if(ma>n){
				cout<<i<<endl;
				break;
			}
			mi+=ma;
			a = mi;
			b = ma;

		}
	}
}

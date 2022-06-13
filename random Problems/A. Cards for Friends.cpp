//link:   https://codeforces.com/problemset/problem/1472/A
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t,w,h,n;
	cin>>t;
	while(t--){
		long long res=0,cnt_w = 0,cnt_h = 0,t1,t2;
		cin>>w>>h>>n;
		t1=w;t2=h;
		while(w%2==0){
			w = w / 2;
			cnt_w++;
		}
		while(h%2==0){
			h = h /2;
			cnt_h++;
		}
		res = cnt_h + cnt_w;
		res = pow(2,res);
		if(t1%2&&t2%2)
	    {
	        if(n==1) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }else
		{
	    	if(res >= n){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}

	}
}

//link:  : https://codeforces.com/problemset/problem/1426/A
//author : Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,cnt=1,temp;
		cin>>n>>x;
		temp = x;
		if( n<= 2){
			cout<<"1";
		}else{
			x +=2;
			while( x < n ){
				cnt++;
				x+=temp;
			}
			cout<<cnt+1;
		}
		cout<<endl;
		
	}
}

// ano sol : 
             if ((n-2)%x==0)
            {
                  b = ((n - 2) / x) + 1;
             }
             else 
             {
                   b=((n - 2) / x) + 2;
            }

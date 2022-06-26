//link:   https://codeforces.com/problemset/problem/1077/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
 
    int t;
   cin>>t;
   while(t--){
		long long  int sum=0,a,b,k;
		cin>>a>>b>>k;
		if(k%2==0){
			sum+=(a-b)*(k/2);
		}
		else
		{
			sum+=((a-b)*(k/2))+a;
		}
		cout<<sum<<endl;
   }
}

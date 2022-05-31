//link : https://codeforces.com/problemset/problem/617/A
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};
	long long n,s1=0;
	cin>>n;
	long long rem = n;
	for(int i = 5;i>=1;i--){
		s1 += rem/i;
		rem = rem%i;
		
		if(rem == 0){
			cout<<s1;
			return 0;
		}
	}
 
}

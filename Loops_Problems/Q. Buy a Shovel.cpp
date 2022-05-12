//link     :https://codeforces.com/group/LKPSX7Pt2W/contest/314606/problem/Q
//author  :@Mohamed Ibrahim
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	
	for(int i =1;;i++){
		int res = n*i;
		if(res%10==k || res%10 ==0){
			cout<<i;
			return 0;
		}
	}

}

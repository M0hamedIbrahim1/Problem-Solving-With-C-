//link:   https://codeforces.com/problemset/problem/1538/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t,size;
	cin >> t;
	while (t--) {
		cin>>size;
		int arr[size],a,b,res,Min,Max,num;
		for(int i = 1 ; i <= size ; i++)
		{
			cin>>num;
			if(num == 1) a = i;
			if(num == size) b = i;
		}
		
		Min = min(a,b);
		Max = max(a,b);
 		res = min(Max,size-Min+1);
 		res = min(res,Min+size-Max+1);
 		cout<<res<<endl;
	}

}

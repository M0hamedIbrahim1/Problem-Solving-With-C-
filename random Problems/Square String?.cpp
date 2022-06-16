//link   : https://codeforces.com/problemset/problem/1619/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,size,mid,j,flag;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		size = s.size();
		mid = size / 2;
		j = mid;
		flag = 0;
		if(size %2 == 0){
			for(int i = 0 ; i < mid ; i++){
				if(s[i]!=s[j]){
					cout<<"NO";
					flag = 1;
					break;
				}
				j++;
			}
		}
		else
		{
			cout<<"NO";
		}
		if(flag == 0 && size % 2 == 0){
			cout<<"YES";
		}
	
	cout<<endl;
	}
}

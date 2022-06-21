//link:   https://codeforces.com/problemset/problem/1537/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,size;
	cin>>t;
	
	while(t--)
	{	
    long long num,sum = 0;
		cin>>size;
		for(int i = 0 ; i < size ; i++)
		{
			cin>>num;
			sum+=num;
		}
		if(sum == size)
			cout<<"0";
		else if(sum<size)
			cout<<"1";
		else cout<<sum - size; 
	cout<<endl;
	}
}

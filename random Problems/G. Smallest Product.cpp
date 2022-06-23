//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/G
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;						  
int main() {
	long long size,num;
	cin>>size;
	double sum=0;
	for(int i=0;i<size;i++){	
		cin>>num;
		sum+=log10(num);
	}
	double res = sum/size;
	cout<<(long long)pow(10,res)+1;
 
}

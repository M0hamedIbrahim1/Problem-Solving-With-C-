//link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J
//author  : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
  
int main() {
 int size;
 cin>>size;
	double sum;
	for(int i=0;i<size;i++){ // 0 1 2
		double value;
		cin>>value;
		sum+= value;
	}
	
	cout<<setprecision(8)<<sum/size<<endl;
	}

//link : https://codeforces.com/group/x1IbeOVM4y/contest/287076/problem/C
//author : @Mohamed Ibrahim
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
while(n){
	int n1,n2;
	cin>>n1>>n2;
	if(n1%n2==0){
		cout<<n1/n2<<endl;
	}else{
		cout<<"No"<<endl;
	}
	
	
	n--;
}

}

//link   :  https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
//author : @Mohamed Ibrahim

#include <iostream>
using namespace std;
 
int main()
{

	int nums;
	cin>>nums;
	
string num;
long long sum=0;
cin>>num; 

for(int i=0;i<nums;i++){
	sum+=num[i]-'0';
}
cout<<sum;


}

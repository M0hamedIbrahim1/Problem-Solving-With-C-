//link   :  https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
//author : @Mohamed Ibrahim

#include <iostream>
using namespace std;
 
int main()
{
	int cases;
	cin>>cases;
	while(cases){
	
int numbers;
cin>>numbers;
long long arr[numbers],res=0,m=999999999999;

for(int i=0;i<numbers;i++){

	cin>>arr[i];
}
	for(int i=0;i<numbers;i++){
		
		for(int j=i+1;j<numbers;j++){
			
			res=arr[i]+arr[j]+j-i;
			if(res<m){
			m = res;
				
			}}}
cout<<m<<endl;
cases--;

}
}

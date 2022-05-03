//link   :  https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
//author : @Mohamed Ibrahim

#include <iostream>
using namespace std;
 
int main()
{
int numbers;
cin>>numbers;
int arr[numbers];

for(int i=0;i<numbers;i++){
	cin>>arr[i];
}
for(int i=numbers-1;i>=0;i--){
	cout<<arr[i]<<" ";
}


}

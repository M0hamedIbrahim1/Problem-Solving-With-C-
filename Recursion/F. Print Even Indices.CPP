//link :  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
//author : @Mohamed Ibrahim


#include <iostream>
using namespace std;

int main(){
int size;
cin>>size;
long long arr[size];
for(int i = 0;i<size;i++){
	cin>>arr[i];
}

for(int i=size-1;i>=0;i--){
	if(i%2==0){
		cout<<arr[i]<<" ";
	}
}


}

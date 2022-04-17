#include <iostream>
using namespace std;
 
int main()
{
int numbers,flag=0,index;
long long n,search;
cin>>numbers;
int arr[numbers];
 
 
for(int i=0;i<numbers;i++){
 
	cin>>arr[i];
}
cin>>search;
for(int j=0;j<numbers;j++){
	if(arr[j]==search){
		flag = 1;
		index = j;
		break;
	}
}
if(flag==1){
	cout<<index;
}
else{
	cout<<"-1";
}
 
}

//link   :  https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
//author : @Mohamed Ibrahim

#include <iostream>
using namespace std;
 
int main()
{
int numbers,j=0,flag=0;
cin>>numbers;
long long arr[numbers];
long long reverse[numbers];


for(int i=0;i<numbers;i++){

	cin>>arr[i];
}
for(int i=numbers-1;i>=0;i--){

		int x = arr[i];
		reverse[j]=x;
		j++;
}

for(int i=0;i<numbers;i++){
	if(reverse[i]==arr[i]){
		flag = 1;
	}
	else{
		flag = 0;
		break;
	}

}

if(flag==1){
	cout<<"YES";
}
else{
	cout<<"NO";
}

}

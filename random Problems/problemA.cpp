//link:   https://codeforces.com/contest/160/problem/A
//author: Mohamed Ibrahim
 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
 int n,res=0,k=0,count=0;
 cin>>n;
 int arr[n];
 long long summ[n],r=0;
 
 for(int i = 0;i<n;i++){
 	cin>>arr[i];
 }
 
sort(arr,arr+n);
if(n==2){
	if(arr[1] == arr[0]){
		cout<<"2";
	}else{
		cout<<"1";
	}
	return 0;
}
else if(n==1){
	cout<<"1";
	return 0;
}

 for(int i = 0;i<n;i++){
 	res +=arr[i];
 	summ[k]=res;
 	k++;
 }
 k = k-2;
for(int i =n-1;i>=0;i--){
	count++;
	res = summ[k];
	r = r+arr[i];
	if(r>res){
		cout<<count;
		return 0;
	}
	--k;
} 
 
return 0;
}

------------------------------------------------ usinggggggggggggggggggggggg vector --------------------------------------------------------


//link:   https://codeforces.com/contest/160/problem/A
//author: Mohamed Ibrahim
  
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,num,sum=0;
cin>>n;
vector<int>v;
vector<int>v1;

	for(int i = 0;i<n;i++){
		cin>>num;
		v1.push_back(num);
	}
		
	sort(v1.begin(),v1.end());

	for(int i = v1.size()-1;i>=0;i--){
		sum+=v1[i];
		v.push_back(sum);
	}

	for(int i = 0;i<v.size();i++){
		if(v[i]>v[v.size()-1]-v[i]){
			cout<<++i;
			return 0;
		}
	}
}
   

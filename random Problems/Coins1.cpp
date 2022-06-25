//link	 :  https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/I
//author : @Mohamed Ibrahim 

#include<bits/stdc++.h>
using namespace std;						  
int main() {
int n=3;
string s;
int arr[3]={};
while(n){
	cin>>s;
	if(s[1]=='>'){
		if(s[2]=='A'){
			arr[0]++;
		}else if(s[2] =='B'){
			arr[1]++;
		}else{
			arr[2]++;
		}
	}else if(s[1]=='<'){
		if(s[0]=='A'){
			arr[0]++;
		}else if(s[0]=='B'){
			arr[1]++;
		}else{
			arr[2]++;
		}
	}	
	n--;
}
int max=-1,min=1000,index_max,index_min;
for(int i =0;i<3;i++){
	if(arr[i]>max){
		max = arr[i];
		index_max=i;
	}
	if(arr[i]<min){
		min = arr[i];
		index_min=i;
	}
}
if(index_max==0 && index_min==1){
	cout<<"ACB";
}else if(index_max==1&&index_min==2){
	cout<<"BAC";
}else if(index_max==1&&index_min==0){
	cout<<"BCA";
}else if(index_max==2&&index_min==0){
	cout<<"CBA";
}else if(index_max==2&&index_min==1){
	cout<<"CAB";
}else if(index_max==0&&index_min==2){
	cout<<"ABC";
}else{
	cout<<"Impossible";
}
}
 

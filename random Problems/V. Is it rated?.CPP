//link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/V
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std; 								  
int main() {
int cases;
cin>>cases;
int temp = cases;
int counter=0,maybe=0,max = 5000;
while(cases){

	int n1,n2;
	cin>>n1>>n2;
	
	if(n2==n1){
		counter++;
		if(n1<=max){
			++maybe;
			max = n1;
		}
	}
	
cases--;
}
if(counter != temp){
	cout<<"rated";
}
else if(counter == temp){
	if(maybe==temp){
		cout<<"maybe";
	}else{
		cout<<"unrated";
	}
}

}

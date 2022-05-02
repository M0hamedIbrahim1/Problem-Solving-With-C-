//  link :   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
//	Author : @Mohamed Ibrahim
#include<iostream>
using namespace std; 								  
int main(){

int n1,n2;
cin>>n1>>n2;

string s;
cin>>s;
if(n1+n2+1 != s.size()){

cout<<"No";
return 0;
}
if(s[n1] != '-'){
	cout<<"No";
		return 0;
}
int counter = 0;

for(int i =0;i<s.size();i++){
	if(s[i] >= 48 && s[i] <=57 && i != n1){
		counter++; 
	}
}
if(counter == n1+n2){
	cout<<"Yes"<<endl;
} else {
	cout<<"No"<<endl;
}
		

}

 

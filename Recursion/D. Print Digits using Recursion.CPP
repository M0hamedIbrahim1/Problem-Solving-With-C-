//link :  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
  int flag =0,i=0;
  void recu(string s,long long size){
	if(size>0){
		if(flag){
			cout<<" ";
		}
		cout<<s[i];
		i++;
		flag=1;
		recu(s,size-1);
	}else{
		flag=0;i=0;
		cout<<endl;
		return;
	}
	
	}


int main(){
int n;
cin>>n; 

while(n){
	
	string s;
	cin>>s;
	long long size = s.length();
	recu(s,size);
	n--;

}
}

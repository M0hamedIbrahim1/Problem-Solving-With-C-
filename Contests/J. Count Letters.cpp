// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
//Author : @Mohamed Ibrahim


#include<bits/stdc++.h>
#include<string> 
using namespace std;
 
int main(){

string s;
cin>>s;
int c=1,size = s.length(),i=0,flag=1;

sort(s.begin(),s.end());
while(size){
	
	if(s[i]==s[i+1]){
	c++;

}
	else{
		cout<<s[i]<<" : "<<c<<endl;
		c=1;
	}
i++;
size--;


}
 
}

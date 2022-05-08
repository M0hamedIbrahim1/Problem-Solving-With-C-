// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
//Author : @Mohamed Ibrahim


#include<bits/stdc++.h>
#include<string> 
using namespace std;
 
int main(){
int cases;
cin>>cases;
while(cases){
int size1,size2,index,j=0;
string s1,s2;
cin>>s1>>s2;
index = j;

size1 = s1.length();
size2 = s2.length();
 
for(int i = 0;i<s1.size();i++)
{
	cout<<s1[i];
	for(j = index;j<s2.size();j++)
	{
		cout<<s2[j];
		index++;
		break;

	}
 
}  
if(size2>size1){
	for(int i = size1;i<size2;i++){
		cout<<s2[i];
	}
}

cout<<endl;	
	
cases--;	
}

}
	

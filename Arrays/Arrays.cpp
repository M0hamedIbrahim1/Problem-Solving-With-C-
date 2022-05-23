//link : https://codeforces.com/contest/572/problem/A
//author : @Mohamed Ibrahim

#include <iostream>
using namespace std;

int main()
{
int s1,s2,j,i,k,m;
cin>>s1>>s2;
cin>>k>>m;
	int a[s1],b[s2];
	for(i=0;i<s1;i++)
	    cin>>a[i];
	for(j=0;j<s2;j++)
	    cin>>b[j];
	if(a[k-1]<b[s2-m])
	    cout<<"YES"<<endl;
	else
	    cout<<"NO"<<endl; 
	 return 0;
}

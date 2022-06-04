//link   :  https://codeforces.com/problemset/problem/110/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
long long n,num,cnt=0;
cin>>n;
int last;

while(n){
	last = n%10;
	n/=10;
	if(last == 7 || last == 4){
		cnt++;
	}
}
if(cnt == 0){
	cout<<"NO";
	return 0;
}
while(cnt){
	last = cnt%10;
	cnt/=10;
	if(last == 7 || last == 4){
		continue;
	}else{
		cout<<"NO";
		return 0;
	}
}
cout<<"YES";
}
 

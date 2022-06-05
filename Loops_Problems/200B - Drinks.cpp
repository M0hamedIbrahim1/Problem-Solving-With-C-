// link :  https://codeforces.com/problemset/problem/200/B
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
double num,sum=0;
cin>>n;
for(int i = 1;i<=n;i++){
	cin>>num;
	sum+=num;
}
double ans = sum/n;
cout<<fixed<<setprecision(12)<<ans;


}
 

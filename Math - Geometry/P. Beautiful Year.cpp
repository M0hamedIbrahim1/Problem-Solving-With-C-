//link     :https://codeforces.com/contest/271/problem/A
//author  :@Mohamed Ibrahim
#include<bits/stdc++.h>
using namespace std;
int check(int num)
{
 int a , b , c , d;
	d = num%10;num/=10;
	c = num%10;num/=10;
	b = num%10;num/=10;
	a = num;
    if(a!=b&&b!=c&&c!=d&&d!=a&&b!=d&&a!=c){
    	return 1;
	}else{
		return 0;
	}
}
int main()
{
 int n;
 cin>>n;
 
 for(int i=1;;i++){
 	n++;
	if(check(n)){
 		cout<<n;
		 break;
	}
	
 }

}

// link :  https://codeforces.com/problemset/problem/492/A
// author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 
int main ()
{

long long n,res = 0,height = 0;
cin>>n;

for(int i=1;;i++){
	res= (i*(i+1)) /2;
	if(n>=res){
		n = n-res;
		height++;
	}else{
		break;
	}

}
cout<<height;
}



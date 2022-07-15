//link:   https://codeforces.com/group/jfviGllBoY/contest/389763/problem/I
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long num,res;
    cin>>num;
    res = num/2;
    if(num%2==0){
    	cout<<num/2;
    	return 0;
    }else{
    	cout<<res - num;
    }
}

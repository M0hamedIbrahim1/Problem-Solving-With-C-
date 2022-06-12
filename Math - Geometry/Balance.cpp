//link:   https://codeforces.com/problemset/problem/1348/A
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a;
    cin >> t;
    while(t--){
	    cin >> n;
	    int summation=0,res_pow,res,fin,sum_of_target=0;
	    for(int i=1;i<=n;i++)
	    {
	    	res_pow = pow(2,i);
	        summation+=res_pow;
	    }
	    a = n/2;
	    for(int i=1;i<a;i++)
	    {
	    	res_pow = pow(2,i);
	        sum_of_target+=res_pow;
	    }
		sum_of_target+=pow(2,n);
		fin = summation - sum_of_target;
		cout<< sum_of_target - fin<<endl;
    }

    return 0;
}

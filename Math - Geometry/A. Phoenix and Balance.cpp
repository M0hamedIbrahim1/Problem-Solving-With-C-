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
	    a = n/2;
	    int summation=0,res_pow;
	    for(int i=1;i<=a;i++)
	    {
	    	res_pow = pow(2,i);
	        summation+=res_pow;
	    }
	    cout << summation << endl;
    }

    return 0;
}

//link:   https://codeforces.com/problemset/problem/1633/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
	    cin >> n;
	 
	    if(n%7==0)
	        cout << n << endl;
	    else{
	        int m = 10 * (n/10);
	        while(m%7!=0)
	            m++;
	        cout << m << endl;
	    }
    
	}
}

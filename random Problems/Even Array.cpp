//link:   https://codeforces.com/problemset/problem/1367/B
//author: Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int main (){
	int q;
	cin>>q;
	while (q--)
	{	
	int even=0,odd=0;
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i<n ; ++i){
        	cin >> arr[i];
		}   
        for(int i = 0 ; i<n ; ++i){
            if(arr[i]%2==0 && i%2!=0) even++;
            else if(arr[i]%2!=0 && i%2==0) odd++;
        }

        if(even==odd) cout << even <<endl;
        else cout << -1 <<endl;	
	}
}

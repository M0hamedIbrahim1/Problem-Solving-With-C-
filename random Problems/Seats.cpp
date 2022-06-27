//link:   https://codeforces.com/group/yw6xPXn7ZO/contest/375911/problem/E
//author: Mohamed Ibrahim

 #include <bits/stdc++.h>
using namespace std;
 
 long long countOdd(long long L, long long R){
 
    long long N = (R - L) / 2;
 
    // if either R or L is odd
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;
    return N;
}
 
 int main()
{
    long long L,R,n_friends;
    cin>>L>>R>>n_friends;
    long long odds = countOdd(L, R);
    long long evens = (R - L + 1) - odds;
     n_friends++;
     if(n_friends<=evens){
     	cout<<n_friends;
	 }
	else{
		cout<<evens;
	}
    return 0;
}
 

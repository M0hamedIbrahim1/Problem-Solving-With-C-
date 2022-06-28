//link:   https://codeforces.com/problemset/problem/1220/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
   	int z=0, o=0, size;
   	string s;
   	cin >> size;
   	cin >> s;
   	for(int i=0; i<size; i++) 
   	{
   		if(s[i]=='z') z++;
   		if(s[i]=='n') o++;
   	}
   	while(o--) cout << 1 << " ";
   	while(z--) cout << 0 << " ";
}

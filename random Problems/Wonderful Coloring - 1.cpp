//link:   https://codeforces.com/problemset/problem/1551/B1
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
    int t;cin>>t;
    while (t--) {
    	int freq[26]={},cnt2 = 0,cnt1 = 0;
        string s;
        cin >> s;
		for(int i = 0 ; i < s.size() ; i++)
		{
			freq[s[i]-'a']++;
		}
		for(int i = 0 ; i < 26 ; i++)
		{
			if(freq[i] >= 2) cnt2++;
			else if(freq[i] == 1) cnt1++;
		}
		cout<< cnt2 + cnt1/2 << endl;
    }
}

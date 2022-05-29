// link : https://codeforces.com/group/LKPSX7Pt2W/contest/323155/problem/Z
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag = 0,stopp = 0;
    string s;
    for (int i = 0; i < 8; ++i)
    {
        cin >> s;
        for (size_t j = 1; j < s.length(); ++j)
        {
            if (s[j] == s[j-1])
            {
                flag = 1;
                stopp = 1;
                break;
            }
        }
        if(stopp){
        	break;
		}
    }
	if(flag == 1){
		cout<<"NO";
	}else{
		cout<<"YES";
	}
    return 0;
}

//link https://codeforces.com/group/LKPSX7Pt2W/contest/320783/problem/I
//author : Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    string s,k;
    while(cin>>n>>s)
    {
        k="";
        for(i=0;i<n;i++)
        {
            if(s[i]=='o'&&s[i+1]=='g'&&s[i+2]=='o')
            {
                k+="***";
                i++;
                while(s[i]=='g'&&s[i+1]=='o')
                {
                    i+=2;
                }
                i--;
             }
             
            else
                k+=s[i];
         }
        cout<<k<<endl;

    }
    return 0;
}

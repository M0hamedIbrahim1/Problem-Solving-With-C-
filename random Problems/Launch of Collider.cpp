//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/H
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
int pos[200009];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    bool flag=false;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        cin>>pos[i];
    }
    int miny=1000000009;
    for(int i=0;i<n;i++){
        if(s[i]=='R' && s[i+1]=='L' && pos[i+1]>pos[i]){
                if( (pos[i+1]-pos[i])<miny){
                    miny=pos[i+1]-pos[i];
                    flag=true;
                }
        }
    }
    flag? cout<<miny/2<<"\n" : cout<<-1<<"\n";
    return 0;
}

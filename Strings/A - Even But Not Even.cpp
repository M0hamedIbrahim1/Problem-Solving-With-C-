// link : https://codeforces.com/group/LKPSX7Pt2W/contest/323155/problem/U
// author : @Mohamed Ibrahim

 
#include<bits/stdc++.h>
using namespace std;

int main(){
 
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    string s; cin >> s;
    int l = s.length();
    string ans;
    int odd = 0, flag = 0;;
    for(int i = 0; i < l; i++){
        if((s[i] - 48) % 2 != 0 ) odd++;
    }
    if(odd < 2) cout << "-1" <<endl;
    else{
        for(int i = 0; i < l; i++){
             if((s[i] - 48) % 2 != 0 ){
                 ans += s[i];
                 flag++;
                 if(flag == 2) break;
             }
        }
        cout << ans << endl;
    }
    }
    return 0;
}

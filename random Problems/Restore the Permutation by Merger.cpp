	//link   : https://codeforces.com/problemset/problem/1385/B
	//author : @Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {	int n,num;
    	cin>>n;
		vector<int>v;
		for(int i = 1 ; i<= 2*n; i++){
			cin>>num;
			bool flag = false;
			for(int j = 0;j<v.size();j++){
				if(num == v[j]){
					flag = true;
					break;
				}
			}
			if(flag == false){
				v.push_back(num);
			}
			
		}
		for(int i = 0 ; i < v.size() ; i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
    }
    return 0;
}

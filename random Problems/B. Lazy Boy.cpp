//link:   https://codeforces.com/group/yw6xPXn7ZO/contest/375911/problem/B
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
int index,flag=0;
cin>>index;
string s1,s2;
cin>>s1>>s2;

for(int i =0;i<index;i++){
 
		//..#..#
		//...#.#
		if(s1[i]=='#'&&s2[i]=='#'){
			cout<<"No";
			return 0;
		}
		else if(s1[i]=='#'&&s2[i+1]=='#'){
 				cout<<"No";
				return 0;	
		}
		else if(s1[i+1]=='#'&&s2[i]=='#'){
				cout<<"No";
				return 0;	
		}
		else{
			flag=1;
		}
	


}
if(flag==1){
	cout<<"Yes";

}
}

 




	

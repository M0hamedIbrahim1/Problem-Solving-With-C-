// link : https://codeforces.com/group/x1IbeOVM4y/contest/288660/problem/E
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
string s;
getchar();
getline(cin,s);
int cases;
cin>>cases;
int flag =1;
string t="";
for(int i = 1;i<=cases;i++){
		string a;
		cin>>a;
		if(a == "CapsLock"){
			flag++;
			continue;
		}
		else if(a == "Backspace"){
			if(t.size()) t.erase(t.length()-1,1);
			continue;
		}
		else if(a == "Space"){
			t+=' ';
			continue;

		}
		else{
			if(flag%2==0) a[0]-=32;
			t+=a;
		}
	
			
	}
	if(t==s){
		cout<<"Correct";
	}else{
		cout<<"Incorrect";
	}
}

 

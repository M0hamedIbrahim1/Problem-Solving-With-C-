//link :   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
//Author :@Mohamed Ibrahim 

#include<iostream>
using namespace std;
int main(){
	string s;
	int c=0;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if( isalpha(s[i]) && !isalpha(s[i+1]) )
		c++;
		
	}
	cout<<c;	
}

///////////// OTHER SOLUATION WITHOUT FUNC : 

#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string sen,res; 
    
	int counter = 0;
	getline(cin,sen);
	for(int i=0;i<sen.size();i++){  
		if(sen[i] != 32& sen[i] != '!' && sen[i] != '.' && sen[i] != '?' && sen[i] != ','){
			res+=sen[i];
		}
		if((sen[i] == 32 || sen[i] == '!' || sen[i] == '.' || sen[i] =='?' || sen[i] == ',' || i == sen.size() - 1)
		   && res.size() != 0){
			counter++;
			res = "";
		}
	}
	cout<<counter<<endl;
    return 0;
}


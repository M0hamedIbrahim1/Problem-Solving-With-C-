//link :   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U
//Author :@Mohamed Ibrahim 

#include <iostream>
using namespace std;
 
int main()
{
   string s;
   int c1=0,c2=0,c3=0,c4=0,c5=0,min1,min2,min_,res;
   getline(cin,s);
   
   for(int i=0;i<s.length();i++){
   	if(s[i]=='e'||s[i]=='E'){
   		c1++;
	}
	else if(s[i]=='g' ||s[i]=='G'){
		c2++;
	}
	else if(s[i]=='y'||s[i]=='Y'){
		c3++;
	}
	else if(s[i]=='p'||s[i]=='P'){
		c4++;
	}
	else if(s[i]=='t'||s[i]=='T'){
		c5++;
	}
	
   }

min1 = min(c1,c2);
min2 = min(c3,c4);
min_ = min(min1,min2);
res = min(min_,c5);

cout<<res;
   
  
}

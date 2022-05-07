//link :   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
//Author :@Mohamed Ibrahim 

#include <iostream>
using namespace std;
 
int main()
{  int k=0;
   string s;
   getline(cin,s);
   char arr[ s.length()]; 
   for(int i=0;i<s.size();i++){
   		
 		if(s[i]=='E'&&s[i+1]=='G'&&s[i+2]=='Y'&&s[i+3]=='P'&&s[i+4]=='T'){
 				i = i+4;
 				arr[k]=' ';
		}
		 
		else{
		 		arr[k]=s[i];
	
		}
		
		k++;
		}
		  
   for(int i=0;i<k;i++){
	cout<<arr[i];
	}
   }


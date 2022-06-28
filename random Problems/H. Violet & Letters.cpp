//link:   https://codeforces.com/group/yw6xPXn7ZO/contest/375911/problem/H
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std; 
  
int main(){
 string s;
 getline (cin,s);
 int small=0,cap=0,counter=0;
 int k =0;
for(int i=0;i<s.length();i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
		small++;
		}
	else if(s[i] >= 'A' && s[i] <= 'Z'){
		cap++;
 
	}
 	 if(s[i]==' ' || i ==s.length()-1){	
 		if(small>cap){
 			for(int j=k;j<=i;j++){

			 if(s[j] >= 'A' && s[j] <= 'Z'){
		     s[j]=s[j]+32;
		 	counter++;
			}}}
			
			else if(cap>small||cap==small) {
				for(int j=k;j<=i;j++){
				if(s[j] >= 'a' && s[j] <= 'z'){
				s[j]=s[j]-32;
				counter++;
	
				}}}
				
 			
 			
k = i;
small = 0;
cap = 0;
}

}
cout<<counter;
cout<<endl;

for(int i=0;i<s.length();i++){
cout<<s[i];
}

}
 

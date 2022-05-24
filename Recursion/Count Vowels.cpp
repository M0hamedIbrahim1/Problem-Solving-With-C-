//link :  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
//author : @Mohamed Ibrahim


 #include <iostream>
using namespace std;
	 
int main(){
string s;
getline(cin,s);
int count=0;
for(int i = 0; i<s.length();i++){
	if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
		count++;
		
	}
}
cout<<count;
}

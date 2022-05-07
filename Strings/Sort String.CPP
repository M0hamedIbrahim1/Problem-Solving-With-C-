//link :   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
//Author :@Mohamed Ibrahim 

#include<iostream>
using namespace std;
int main(){
int x; cin>>x;
int arr[26]={0};
char y;
for(int i=0; i<x; ++i){
    cin >> y;
    arr[y-'a']++;
}
for(int i=0; i<26;++i){
    for(int j=0; j<arr[i] ; ++j){
        cout << (char)(i+'a');
    }
}
 
}

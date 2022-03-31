#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string n; cin>>n;
    string x = "123";
    for(int i=0;i<n.size();++i){
        if(n[i]=='A'){
        reverse(x.begin(),x.begin()+2);
        }
        if(n[i]=='B'){
        reverse(x.begin()+1,x.end());
        }
         if(n[i]=='C'){
        reverse(x.begin(),x.end());
        }
    }
    for(int j=0;j<x.size();++j){
        if(x[j]=='1') cout<<j+1;
    }
}
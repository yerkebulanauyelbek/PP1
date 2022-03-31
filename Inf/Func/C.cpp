#include <iostream>
using namespace std;
int cnt=0;
void cnts(string s,int i){
    if(s[i]>='0'&& s[i]<='9'){
        cnt++;
    }
    if(s.size()-1==i){
        cout<<cnt;
        return;
    }
    cnts(s,i+1);
}
int main(){
    string n;
    cin>>n;
    cnts(n,0);
}
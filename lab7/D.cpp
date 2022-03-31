#include <iostream>
using namespace std;
int sum(string s, int sm,int cnt){
    if(cnt==s.size()){
        return sm;
    }
    else
    sm+=s[cnt]-'0';
    return sum(s,sm,cnt+1);
}
int main(){
    string s;
    cin>>s;
    cout<<sum(s,0,0);
}
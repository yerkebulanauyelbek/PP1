#include <iostream>
using namespace std;
void stars(string s,int i){
    if(s[i]>='A' && s[i]<='Z' && s[i]>='a'&& s[i]<='z'){
        cout<<s<<'*';
    }
    (s,i+1);
    return;
}
int main(){
    string n;
    cin>>n;
    stars(n,0);
}
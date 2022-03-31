#include <iostream>
using namespace std;
int even(string s, int cnt,int i){
    if(i== s.size()) return cnt;
    else{
        if((s[i]-'0')%2==0) return even(s,cnt+1,i+1);
        else return even(s,cnt,i+1);
    }
}
int main(){
    string s;
    cin>>s;
    cout<<even(s,0,0);
}
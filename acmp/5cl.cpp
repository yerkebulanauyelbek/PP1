#include <iostream>
using namespace std;
int main(){
    string s;
    int a,b;
    cin>>s;
    for(int i=0;i<s.size();++i){
        if(s[1]=='+'){
            if(s[0]=='x'){
                a=(s[4]-'0')-(s[2]-'0');
                cout<<a;
                break;
            }
            else if(s[2]=='x'){
                a=(s[4]-'0')-(s[0]-'0');
                cout<<a;
                break;
            }
            else if(s[4]=='x'){
                a=(s[0]-'0')+(s[2]-'0');
                cout<<a;
                break;
            }
        }
        if(s[1]=='-'){
            if(s[0]=='x'){
                a=(s[4]-'0')+(s[2]-'0');
                cout<<a;
                break;
            }
            if(s[2]=='x'){
                a=((s[4]-'0')-(s[0]-'0'));
                b=a*(-1);
                cout<<b;
                break;
            }
            else if(s[4]=='x'){
                a=(s[0]-'0')-(s[2]-'0');
                cout<<a;
                break;
            }
        }
    }
    return 0;
}

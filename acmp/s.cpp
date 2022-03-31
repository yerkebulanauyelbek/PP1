#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b,c; int d;
    cin >>a>>b;
    if (a==b){
        cout <<0;
        return 0;
    }
    for (int i = 1;i < a.size();++i){
        d=a.size()-i;
        cout<<d<<' ';
        c=a.substr(i,d);
        cout<<c<<endl;
        c+=a.substr(0,i);
        cout<<c<<endl;
        if (c==b){
            cout <<a.size()-i;
            return 0;
        }
    }
    cout << "Understandable have a nice day";
    return 0;
}
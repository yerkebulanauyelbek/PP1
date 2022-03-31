#include <iostream>
#include <set>
using namespace std;
int main(){
    string n;
    cin>>n;
    int t;
    set <char> s;
    for(int i=0;i<n.size();++i){
        s.insert(tolower(n[i]));
    }
    cout << s.size() << endl;
    set<char>::iterator i;
    for(i=s.begin();i!=s.end();++i){
        cout<<*i<<' ';
    }
}
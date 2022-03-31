#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t;
    set <int> s;
    for(int i=0;i<n;++i){
        cin>>t;
        s.insert(t);
    }
    set<int>::iterator i;
    for(i=s.begin();i!=s.end();++i){
        if(*i%2!=0){
            cout<<*i<<' ';
        }
    }
}
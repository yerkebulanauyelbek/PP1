#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        m[x]++;
    }
    int cnt=0;
    map<int,int>:: iterator it;
    for(it=m.begin();it!=m.end();++it){
        if( (*it).second /*=m[x]*/ >= 2)
        cnt++;
    }
    cout<<cnt;
}
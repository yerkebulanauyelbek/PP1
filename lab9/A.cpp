#include <iostream>
#include <map>
using namespace std;
int main(){
    map <int,int> m;
    int n; cin>>n;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        m[x]=y;
    }
    map <int, int>::iterator it;
    for(it=m.begin(); it != m.end();++it){
        cout << (*it).first <<" "<< (*it).second<<endl;
    }
}
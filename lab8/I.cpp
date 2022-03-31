#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int t;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;++i){
        cin>>t;
        v.push_back(t);
    }
    int l;
    cin>>l;
    int cnt=0;
    for(int i=0;i<n;++i){
        if (v[i] == l)
        {
            cnt++;
        }
    }
    if(cnt>0) cout<<"Yes";
    else cout<<"No";
    return 0;
}

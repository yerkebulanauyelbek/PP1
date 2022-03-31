#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n;++i){
        int t;
        cin>>t;
        v.push_back(t);
    }
    for(int i=0; i<v.size();++i){
        reverse(v.begin(), v.begin()+1);
        if(v[i]%2==0){
            cout<<v[i]<<' ';
        }
    }
    for(int i=0; i<v.size();++i){
        if(v[i]%2!=0) cout<<v[i]<<' ';
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,l,r;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n;++i){
        int t;
        cin>>t;
        v.push_back(t);
    }
    cin>>l>>r;
    reverse(v.begin()+l, v.begin()+r+1);
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<' ';
    } 
    return 0;
}
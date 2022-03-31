#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;++i){
        int t;
        cin>>t;
        v.push_back(t);
    }
    int c;
    cin>>c;
    v.erase(v.begin()+c);
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool prime(int f){
    if (f == 1) return false;
    for (int i = 2; i < sqrt(f); ++i){
    if (f % i == 0) return false;
    }
    return true;
}
int main(){
    int n,cnt=0,k;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;++i){
        int t;
        cin>>t;
        v.push_back(t);
    }
    cin>>k;
    for(int i=0;i<n;++i){
        if(v[i]>k && prime(v[i])){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
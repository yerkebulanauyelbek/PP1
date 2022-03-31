#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,t,k,sum=0;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;++i){
        cin>>t;
        v.push_back(t);
    }
    cin>>k;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<k;++i){
        sum+=v[i];
    }
    cout<<sum;
}
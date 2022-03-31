#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max=-10000000;
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;++i){
        int t;
        cin>>t;
        a.push_back(t);
    }
    for(int j=0;j<n;++j){
        int y;
        cin>>y;
        b.push_back(y);
    }
    for(int i=0;i<a.size();++i){
        if(a[i]>max) max=a[i];
        for(int j=0;j<b.size();++j){
            if(i=j) cout<<max-b[j]<<' ';
        }
    }
    cout<<endl;
    cout<<max;
}
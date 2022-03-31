#include <iostream>
#include <map>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
        for(int j=1;j<=a[i];++j){
            if(a[i]%j==0) cout<<j<<' ';
        }
        cout<<endl;
    }
}
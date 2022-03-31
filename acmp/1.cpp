#include <iostream>
using namespace std;
int main(){
    int n,cnt=0;cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
        for(int j=1;j<=a[i];++j){
            if(a[i]%j==0) cnt++;
        }
        cout<<cnt<<" ";
        cnt=0;
        if(a[i]%2==0) cout<<"even ";
        else cout<<"odd ";
        cout<<a[i]%10<<endl;
    }
}
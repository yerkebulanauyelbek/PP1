#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n]; int sum=0,pro=1;
    int max=-100000000;
    int min=10000000;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n;++i){
        if(a[i]>=0) sum+=a[i];
    }
    for(int i=0;i<n;++i){
        if(max<a[i]) max=a[i];
        if(min>a[i]) min=a[i];
    }
    for(int i=0;i<n;++i){
            for(i=min+1;i<=max;++i){
                pro*=a[i];
            }
    }
    cout<<max<<' ';
    cout<<min<<' ';
    cout<<sum<<' ';
    cout<<pro<<' ';
}
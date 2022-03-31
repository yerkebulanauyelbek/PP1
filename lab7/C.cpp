#include <iostream>
using namespace std;
bool check(int a[],int n, int x,int i){
    if (i==n) return false;
    else{
        if (a[i]==x) return true;
        else return check(a,n,x,i+1);
    }
}
 
int main(){
    int n,x;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
     cin>>a[i];
    }
    cin>>x;
    if (check(a,n,x,0)) cout<<"Yes";
    else cout<<"No";
}
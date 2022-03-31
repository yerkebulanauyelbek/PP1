#include <iostream>
using namespace std;
/*int rec(int a, int b){
    if(a==b) cout<<a;
    if(a>b) return rec(a-b,b);
    if(a<b) return rec(a,b-a);
}
int main(){
    int a,b; cin>>a>>b;
    rec(a,b);
}*/
int main(){
    int a,b;
    cin >> a >> b;
    while(b%=a) swap(a,b);
    cout << a;
}
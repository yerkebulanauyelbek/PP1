#include <iostream>
using namespace std;
bool sec(int n){
    if(n==2 || 1==n) return true;
    if(n%2!=0) return false;
    else return sec(n/2);
}
int main(){
    int n;
    cin>>n;
    if(sec(n)) cout<<"Yes";
    else cout<<"No";
}
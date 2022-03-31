#include <iostream>
using namespace std;
string dec(int n){
    if(n==0) return "0";
    if(n==1) return "1";
    return (dec(n/2)) + char (n % 2+'0');
}
int main(){
    int n;
    cin>>n;
    cout<<dec(n);
}
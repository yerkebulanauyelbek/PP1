#include <iostream>
using namespace std;
void dec(int n){
    if(n==0 || n==1){
         cout<< n;
         return;
    }
    dec(n/2);
    cout <<n % 2 ;
}
int main(){
    int n;
    cin>>n;
    dec(n);
    return 0;
}
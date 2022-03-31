#include <iostream>
using namespace std;
void sum(int s){
    int n;
    cin>>n;
    if(n==0) {cout<<s; return;}
    else return sum(s+n);
}
int main(){
    int s=0;
    sum(s);
    return 0;
}
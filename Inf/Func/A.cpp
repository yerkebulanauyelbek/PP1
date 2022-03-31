#include <iostream>
using namespace std;
bool plus35(int n){
    if(n==1){
     return true;
    }
    if(n <= 0){
     return false;
    }
    else {
    return plus35(n-3) || plus35(n-5);
    }
}
int main(){
    int s;
    cin>>s;
    if(plus35(s)) cout<<"YES";
    else cout<<"NO";
}
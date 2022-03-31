#include <iostream>
using namespace std;
int sim(int n,int i){
    if(i>n) return 1;
    else cout<<i<<' ';
    return sim(n,i+1);
}
int main(){
    int m;
    cin>>m;
    sim(m,1);
}
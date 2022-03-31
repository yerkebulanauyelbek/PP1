#include <iostream>
using namespace std;
int alm(string n,int i,int sum){
    if(i==n.size()){
        return sum;
    }
    else{
        sum+=(n[i]-'0')/2;
        return alm(n,i+1,sum);
    }
}
int main(){
    string s;
    cin>>s;
    cout<<alm(s,0,0);
}
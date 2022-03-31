#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,s = 0,pr = 1;
    vector<int> aa;
    cin >> a >> b;
    int c = a;
    int e = 0,ee = 0;
    if(a < b){
        cout << 0;
        return 0;
    }
    while(c >= b){
        ee = c % b;
        c = c/b;
        aa.push_back(ee);
    }
    aa.push_back(c);
    for(int i = 0; i < aa.size(); ++i){
        s+=aa[i];
        pr*=aa[i];
    }
    cout << pr - s;
    return 0;
}
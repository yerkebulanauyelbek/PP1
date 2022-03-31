#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t;
    set <int> s;
    for(int i=0;i<n;++i){
        cin>>t;
        s.insert(t);
    }
    int sum = 0;
    set<int>::iterator i;
    for (i = s.begin(); i != s.end(); ++i){
        sum += *i;
    }
    cout << sum;
    return 0;
}
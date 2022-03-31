#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    vector<string> a;
    vector<int> b;
    for(int i = 0; i < n; i++){
        string s; int n;
        cin >> s >> n;
        a.push_back(s); b.push_back(n);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++){
        cout << a[i] << " " << b[i] <<endl;
    }
}
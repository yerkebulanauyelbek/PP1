#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    string st;
    int n;
    cin >> n;
    set<string> s;
    for (int i = 0; i < n; i++){
        cin >> st;
        sort(st.begin(), st.end());
        s.insert(st);
    }
    if (s.size() == 1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
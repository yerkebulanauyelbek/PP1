#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin >> s;
    t = "";
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'x'){
            t += (char)s[i];
            if (s[i + 1] != 'x'){
                cout << t << endl;
                t = "";
            }
        }
    }
    return 0;
}
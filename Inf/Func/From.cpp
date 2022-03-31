#include <iostream>
using namespace std;
int main(){
    int n, m, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> m;
        while (m > 0){
            if (m % 10 == 0){
                cnt++;
                m /= 10;
            }
            else m /= 10;
        }
    }
    cout << cnt;
    return 0;
}
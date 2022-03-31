#include <iostream>
using namespace std;
int maxi(string s, int i, int max){
    if (i == s.size()) return max;
    else{
        if (s[i] - '0' > max)
            max = s[i] - '0';
        return maxi(s, i + 1, max);
    }
}
int main(){
    string n;
    cin>>n;
    cout<<maxi(n,0,0);
}
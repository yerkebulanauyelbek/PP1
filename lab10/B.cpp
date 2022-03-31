#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
/*int main(){
    int n;
    long long x;
    cin>>n;
    for(int i=0;i<=n;++i){
        x=pow(i,i);
        cout<<x<<' ';
    }
    return 0;
}*/
int gen(){
    static int i = 0;
    return pow(i++, i);
}
int main()
{
    int i;
    int n;
    cin >> n;
    vector<int> v1(n + 1);
    std::generate(v1.begin(), v1.end(), gen);

    vector<int>::iterator i1;
    for (i1 = v1.begin(); i1 != v1.end(); ++i1)
    {
        cout << *i1 << " ";
    }

    return 0;
}
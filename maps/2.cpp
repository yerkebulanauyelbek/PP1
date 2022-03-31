#include <iostream>
//#include <map>
using namespace std;
int main(){
    pair<double, string> p;
    double x; string y;
    cin>>x>>y;
    p.first = x;
    p.second = y;
    cout<<p.first<<' '<<p.second<<endl;
}
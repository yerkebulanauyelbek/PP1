#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x1,y1,x2,y2;double seg; cin>>x1>>y1>>x2>>y2;
    seg=sqrt((pow((x1-x2),2))-(pow((y1-y2),2)));
    cout<<seg;
}
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;double res1,res2,res3,s,sy; cin>>x1>>y1>>x2>>y2>>x3>>y3;
    res1=sqrt((pow((x1-x2),2))+(pow((y1-y2),2)));
    res2=sqrt((pow((x3-x1),2))+(pow((y3-y1),2)));
    res3=sqrt((pow((x3-x2),2))+(pow((y3-y2),2)));
    sy=(res1+res2+res3)/2;
    s=sqrt(sy*(sy-res1)*(sy-res2)*(sy-res3));
    cout<<setprecision(1);
    cout<<fixed<<s;
}
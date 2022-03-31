#include <bits/stdc++.h>
using namespace std;
/*int main(){
    int n,m;
    bool b  = true;
    cin >> n >> m;
    string s, s1;
    cin >> s;
    vector<string> str;
    while(s.size() >= m){
        s1.clear();
        b = true;
        s1 = s.substr(0,m);
        for(int i = 0; i < str.size(); ++i)
            if(str[i] == s1){
                b = false;
                break;
            }
        if(b)
            str.push_back(s1);
        s.erase(0,1);
    }
    cout << str.size();
    return 0;
}*/
int main(){
    string s;
    int n,m;
    string t="";
    cin>>m>>n;
    cin>>s;
    int cnt=0;
    set<string> st;
    for (int i=0;i<s.size();++i){
        int j=i+1;
        if (t.size()==0){
            t += s[i];
            while (t.size()!=n){
                t += s[j];
                j++;
                if (j>s.size()){
                    cout<<st.size();
                    return 0;
                }
            }
            st.insert(t);
            t = "";
        }
    }
    cout << st.size();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
string ctos(char c){
    string s(1, c);
    return s;
}
int main(){
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);
    string s, ten = "";
    getline(cin ,s);
    for (int i=s.size()-1;i>=0;i--){
        if (s[i]!=' ') ten.insert(0, ctos(s[i]));
        else if (s[i]==' ' && ten.size() != 0) break;
    }
    cout << ten;
    return 0;
}

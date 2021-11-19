#include <bits/stdc++.h>
using namespace std;
string dx(string s){
    if (s.size()==1) return "YES";
    if (s.size()==1){
        if(s[0]==s[1]) return "YES";
    }
    for (int i=0;i<=s.size()/2;i++){
        if (s[i] != s[s.size()-i-1]){
            return "NO";
        }
    }
    return "YES";
}
int main(){
    freopen("XAUDX.INP", "r", stdin);
    freopen("XAUDX.OUT", "w", stdout);
    string s;
    getline(cin, s);
    string ss = "";
    for (int i=0;i<s.size();i++){
        if (s[i]!=' '){
            ss+=s[i];
        }
    }
    cout << ss << endl << dx(ss);
    return 0;
}

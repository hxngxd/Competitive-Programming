#include <bits/stdc++.h>
using namespace std;
bool isNum(char c){
    return c>='0' && c<='9';
}
int main(){
    freopen("TACHSO.INP", "r", stdin);
    freopen("TACHSO.OUT", "w", stdout);
    string s; cin >> s;
    s += " ";
    string s_ = "";
    int cnt = 0;
    for (int i=0;i<s.size();i++){
        if (isNum(s[i])){
            s_ += s[i];
        }
        else{
            if (s_ != ""){
                cout << s_ << endl;
                cnt++;
            }
            s_ = "";
        }
    }
    if (cnt==0) cout << "No";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("STRING.INP", "r", stdin);
    freopen("STRING.OUT", "w", stdout);
    string s, s1 = "", s2 = "";
    getline(cin, s);
    for (int i=0;i<s.size();i++){
        if ((int)s[i] >= 65 && (int)s[i] <= 90){
            s1 += s[i];
        }
        else if ((int)s[i] >= 97 && (int)s[i] <= 122){
            s1 += toupper(s[i]);
        }
        else if ((int)s[i] >= 48 && (int)s[i] <= 57){
            s2 += s[i];
        }
    }
    sort(s2.begin(), s2.end());
    cout << s1 << endl << s2;
    return 0;
}

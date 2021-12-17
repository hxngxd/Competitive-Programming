#include <bits/stdc++.h>
#define ll long long
using namespace std;
int cspace(string s){
    s = "-" + s + "-";
    int cnt = 0;
    for (int i=1;i<s.size();i++){
        if (s[i]==' ' && s[i-1]!=' ') cnt++;
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("CSPACE.INP", "r", stdin);
    freopen("CSPACE.OUT", "w", stdout);
    int n;
    cin >> n >> ws;
    for (int i=0;i<n;i++){
        string s;
        getline(cin, s);
        cout << cspace(s) << endl;
    }
    return 0;
}

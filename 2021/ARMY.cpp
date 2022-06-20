#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
char c;
ll army(){
    cin >> n;
    string s = "";
    int oneside = 0;
    for (int i=0;i<n;i++){
        cin >> c;
        s += c;
        if (c=='<') oneside++;
    }
    if (oneside==n || oneside==0) return 0;
    ll t = 0;
    while (true){
        ll k = 0;
        for (int i=0;i<n-1;i++){
            string s_ = "";
            s_ += s[i];
            if (i+1<n) s_+=s[i+1];
            if (s_=="><"){
                s[i]='<';
                s[i+1]='>';
                i++;
                k++;
            }
        }
        if (k==0) break;
        t++;
    }
    return t;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ARMY.INP", "r", stdin);
    freopen("ARMY.OUT", "w", stdout);
    cout << army();
    return 0;
}

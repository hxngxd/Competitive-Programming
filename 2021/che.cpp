/*Nguyen Tuong Hung*/
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define key first
#define val second
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("che.inp", "r", stdin);
    freopen("che.out", "w", stdout);
    int n; cin >> n;
    string s; cin >> s;
    int A = 0, B = 0;
    for (int i=0;i<n;i++){
        A += (s[i]=='A');
        B += (s[i]=='B');
    }
    if (A > B) cout << ">";
    else if (A < B) cout << "<";
    else cout << "=";
    return 0;
}

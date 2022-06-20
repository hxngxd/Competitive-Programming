#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("PALINDSTR.INP", "r", stdin);
    freopen("PALINDSTR.OUT", "w", stdout);
    int n; cin >> n;
    string s; cin >> s;
    if (n==1){
        cout << 1;
        return 0;
    }
    else if (n==2){
        if (s[0]==s[1]) cout << 2;
        else cout << 1;
        return 0;
    }
    int maxlen=0;
    int l, r;
    for (int i=0;i<n;i++){
        //le
        l=r=i;
        while (l>=0 && r<n && s[l]==s[r]){
            if (r - l + 1 > maxlen){
                maxlen = r - l + 1;
            }
            l--; r++;
        }
        //chan
        l=i; r=i+1;
        while (l>=0 && r<n && s[l]==s[r]){
            if (r - l + 1 > maxlen){
                maxlen = r - l + 1;
            }
            l--; r++;
        }
    }
    cout << maxlen;
    return 0;
}

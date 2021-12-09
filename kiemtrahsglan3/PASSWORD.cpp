#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> AZ, az, o9;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("PASSWORD.INP", "r", stdin);
    freopen("PASSWORD.OUT", "w", stdout);
    cin >> s;
    int n = s.size();
    if (n<6){
        cout << 0; return 0;
    }
    s = " " + s;
    AZ.assign(n+1, 0);
    az.assign(n+1, 0);
    o9.assign(n+1, 0);
    for (int i=1;i<=n;i++){
        char c = s[i];
        if (c>='A' && c<='Z'){
            AZ[i] = i;
            az[i] = az[i-1];
            o9[i] = o9[i-1];
        }
        else if (c>='a' && c<='z'){
            AZ[i] = AZ[i-1];
            az[i] = i;
            o9[i] = o9[i-1];
        }
        else if (c>='0' && c<='9'){
            AZ[i] = AZ[i-1];
            az[i] = az[i-1];
            o9[i] = i;
        }
    }
    ll res = 0;
    for (int i=6;i<=n;i++){
        int j = min(i-5, min(AZ[i], min(az[i],o9[i])));
        res += j;
    }
    cout << res;
    return 0;
}

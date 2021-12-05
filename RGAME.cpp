#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll area(){
    cin >> n;
    ll a[n+1], s[2];
    int j = 0;
    for (int i=0;i<n;i++) cin >> a[i];
    if (n<4) return -1;
    sort(a, a + n, greater<int>());
    for (int i=0;i<n;i++){
        if (a[i]==a[i+1]){
            s[j] = a[i];
            j++;
            i++;
        }
        if (j==2) return s[0]*s[1];
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("RGAME.INP", "r", stdin);
    freopen("RGAME.OUT", "w", stdout);
    cout << area();
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int tonguoc(int n){
    if (n==1) return 1;
    int sum = n+1;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            if (i*i==n) sum += i;
            else sum += i + n/i;
        }
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("uoc.inp", "r", stdin);
    freopen("uoc.out", "w", stdout);
    int n, ans = 0; cin >> n;
    int a[1005];
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (tonguoc(a[i])%2==0) ans++;
    }
    cout << ans;
    return 0;
}

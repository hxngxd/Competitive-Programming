#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
ll a, b, k, sum;
void solve(){
    cin >> a >> b >> k;
    if (a%k!=0) a+=(k-a%k);
    if (b%k!=0) b-=(b%k);
    sum = 0;
    for (ll i=a;i<=b;i+=k){
        sum += i;
    }
    cout << sum;

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("tongso.INP", "r", stdin);
    freopen("tongso.OUT", "w", stdout);
    solve();
    return 0;
}

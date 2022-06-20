#include <bits/stdc++.h>
#define ll long long
#define mpii unordered_map<ll, ll>
#define f first
#define s second
#define pb push_back
using namespace std;
mpii sum;
ll gcd(ll a, ll b) {
    ll tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
mpii tsnt(ll n){
    mpii mp;
    while (n%2==0){
        n/=2;
        mp[2]++;
        sum[2]++;
    }
    for (ll i=3;i<=sqrt(n);i+=2){
        while (n%i==0){
            n/=i;
            mp[i]++;
            sum[i]++;
        }
    }
    if (n>2){
        mp[n]++;
        sum[n]++;
    }
    return mp;
}
void test1(ll a, ll b){
    mpii A = tsnt(a), B = tsnt(b);
    ll c = 0, d = 1;
    for (auto i : sum){
        c += abs(A[i.f]-B[i.f])/2;
        A[i.f] = i.s/2 + (i.s%2!=0);
        B[i.f] = i.s/2;
        d *= pow(i.f, max(A[i.f], B[i.f]));
    }
    cout << (a*b)/d << " " << c;
}
void test2(ll n, ll a[]){
    vector<mpii> ts;
    vector<ll> after(n, 1);
    for (ll i=0;i<n;i++) ts.pb(tsnt(a[i]));
    ll c = 0;
    for (auto i : sum){
        ll t = i.s%n;
        ll k = i.s/n;
        for (ll j=0;j<n;j++){
            ll tmp = ts[j][i.f];
            if (t>0){
                ts[j][i.f] = k + 1;
                t--;
            }
            else ts[j][i.f] = k;
            after[j] *= pow(i.f, ts[j][i.f]);
            if (k!=0) c += abs(ts[j][i.f] - tmp);
        }
    }
    ll d = after[0];
    c /= 2;
    for (int i=1;i<n;i++){
        d = gcd(after[i], d);
        if (d==1) break;
    }
    cout << d << " " << c;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("ucln.inp", "r", stdin);
    freopen("ucln.out", "w", stout);
    ll n; cin >> n;
    if (n==2){
        ll a, b;
        cin >> a >> b;
        test1(a, b);
    }
    else{
        ll a[n];
        for (ll i=0;i<n;i++) cin >> a[i];
        test2(n, a);
    }
    return 0;
}

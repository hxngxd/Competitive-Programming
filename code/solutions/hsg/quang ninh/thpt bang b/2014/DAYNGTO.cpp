#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll sqr(ll x, ll m){
    return (x%m * x%m)%m;
}
ll power(ll a, ll b, ll m){
    if (b==0) return 1%m;
    if (b%2==0) return sqr(power(a, b/2, m), m)%m;
    return (a%m * sqr(power(a, b/2, m), m)%m)%m;
}
bool test(ll a, ll n, ll k, ll m){
    ll mod = power(a, m, n);

    if (mod==1 || mod==n-1) return true;

    for (int l=1;l<k;l++){
        mod = (mod * mod) % n;
        if (mod==n-1) return true;
    }
    
    return false;
}
bool RabinMiller(ll n){
    if (n==2 || n==3 || n==5 || n==7) return true;
    if (n<11) return false;

    ll k=0, m=n-1;
    while (!(m&1)){
        m >>= 1;
        k++;
    }
    
    vector<int> checkSet = {2, 3, 5, 7};
    for (auto a  : checkSet){
        if (!test(a,n,k,m)) return false;
    }
    
    return true;
}
int main()
{
    fast_io
    int n; cin >> n;
    int cnt=0, id;
    ll max_prime=0;
    for (int i=1;i<=n;i++){
        ll a; cin >> a;
        if (RabinMiller(a)){
            cnt++;
            if (max_prime < a){
                max_prime = a;
                id = i;
            }
        }
    }
    if (cnt==0) cout << "khong co";
    else cout << cnt << " " << max_prime << " " << id;
    return 0;
}
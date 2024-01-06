#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int MAX = 1e6;
vector<bool> sieve(MAX+10, true);
vector<ll> value(MAX+10, 1);
vector<ll> cnt(MAX+10, 0);
ll ans = 0;
int main()
{
    fast_io
    int p, q; cin >> p >> q;
    for (int i=2;i<=MAX/2;i++){
        if (sieve[i]){
            value[i]*=i;
            for (int j=i+i;j<=MAX;j+=i){
                sieve[j]=false;
                value[j]*=i;
            }
        }
    }
    for (int i=p;i<=q;i++){
        if (value[i]!=1) cnt[value[i]]++;
    }
    for (int i=1;i<=q;i++){
        if (cnt[i]>=2) ans += (cnt[i]*(cnt[i]-1))/2;
    }
    cout << ans;
    return 0;
}
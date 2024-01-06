#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int maxn = 3*1e6 + 1;
vector<int> pref(maxn+1, 0);
vector<bool> sieve(maxn+1, true);
void sang_nguyen_to(){
    sieve[0] = sieve[1] = false;
    for (int i=2;i*i<=maxn;i++){
        if (sieve[i]){
            for (int j=i*i;j<=maxn;j+=i){
                sieve[j] = false;
            }
        }
    }
    for (int i=2;i<=maxn;i++){
        if (!sieve[i]){
            pref[i] = pref[i-1];
            continue;
        }
        int d_sum = 0, num = i;
        while (num!=0){
            d_sum += num%10;
            num/=10;
        }
        pref[i] = pref[i-1] + (d_sum%5==0);
    }
}
int main()
{
    fast_io
    sang_nguyen_to();

    int t; cin >> t;
    while (t--){
        int l, r; cin >> l >> r;
        cout << pref[r] - pref[l-1] << nl;
    }
    return 0;
}
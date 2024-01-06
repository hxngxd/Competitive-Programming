#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int maxn = 1e4;
vector<bool> sieve(maxn, true);
void sang(){
    sieve[0] = sieve[1] = false;
    for (int i=2;i*i<=maxn;i++){
        if (sieve[i]){
            for (int j=i*i;j<=maxn;j+=i) sieve[j] = false;
        }
    }
}
bool check(int i){
    if (i==81) return true;
    if (i==9) return false;
    return (i%3==0 && sieve[i/3]);
}
int main()
{
    fast_io
    sang();
    int a, b; cin >> a >> b;
    int ans = 0;
    a = ceil(sqrt(a)), b = floor(sqrt(b));
    for (int i=max(1, a);i<=b;i++){
        if (check(i)) ans++;
    }
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int maxn = 1e5+5;
int n;
ll a, r, m;
ll h[maxn], pref[maxn];

ll cost(ll height){
    ll p = upper_bound(h, h+n+1, height)-h-1;
    ll A = p*height - pref[p];
    ll B = pref[n] - pref[p] - (n-p)*height;
    if (A==B) return A*min(a+r,m);
    else if (A<B) return A*min(a+r,m) + (B-A)*r;
    return B*min(a+r,m) + (A-B)*a;
}

ll binarySearch(){
    ll low = 0, high = 1e15;
    while (low <= high){
        ll mid = low + (high - low)/2;
        ll lm = mid-1, rm = mid+1;
        ll c = cost(mid), lc = cost(lm), rc = cost(rm);
        while (lc==c){
            lc = cost(--lm);
        }
        while (rc==c){
            rc = cost(++rm);
        }
        if (lc > c && c < rc) return c;
        else if (lc < c && c < rc) high = mid;
        else if (lc > c && c > rc) low = mid;
    }
    return 0;
}

int main()
{
    fast_io
    cin >> n >> a >> r >> m;
    h[0] = pref[0] = 0;
    
    for (int i=1;i<=n;i++) cin >> h[i];
    sort(h, h+n+1);
    for (int i=1;i<=n;i++) pref[i] = pref[i-1] + h[i];

    cout << binarySearch();
    return 0;
}
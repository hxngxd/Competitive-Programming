#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll l1,w1,h1;
ll l2,w2,h2;
ll lc,wc,hc;
bool check(ll l, ll w){
    return (l <= lc && w <= wc) || (l <= wc && w <= lc);
}
string solve(){
    cin>>l1>>w1>>h1>>l2>>w2>>h2>>lc>>wc>>hc;
    if (h1 > hc || h2 > hc) return "NO";
    if (check(l1+l2,max(w1,w2)) ||
        check(w1+w2,max(l1,l2)) ||
        check(l1+w2,max(l2,w1)) ||
        check(l2+w1,max(l1,w2))
    ) return "YES";
    return "NO";
}
int main()
{
    fast_io
    cout << solve();
    return 0;
}
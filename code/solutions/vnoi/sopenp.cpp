//https://oj.vnoi.info/problem/sopenp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int maxn = 1048580;
ll x[maxn];
ll n, l, u;
int tmp[maxn], ans = 0;

void get(int d, bool fix){
    map<ll,int> mp;
    int cnt=0, i=0;
    for (int j=0;j<n;j++){
        int current = ++mp[x[j]];
        if (current==1) cnt++;
        while (cnt>d){
            current = --mp[x[i++]];
            if (current==0) cnt--;
        }
        if (!fix){
            if (cnt >= l) ans += tmp[j] - i;
        }
        else tmp[j] = i;
    }
}

int main()
{
    fast_io
    cin >> n >> l >> u;
    for (int i=0;i<n;i++) cin >> x[i];
    get(l-1, 1);
    get(u, 0);
    cout << ans;
    return 0;
}
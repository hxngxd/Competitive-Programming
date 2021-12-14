#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m, k;
map<int, int> memo;
int flow(pair<int, int> unsort[], pair<int, int> a[], pair<int, int> p[], int k, int m){
    if (memo.find(k)!=memo.end()) return memo[k];
    int id = lower_bound(a,a+n,unsort[k-1])-a;
    if (id==0){
        memo[k]=0;
        return 0;
    }
    int cnt = 0;
    for (int i=0;i<id;i++){
        pair<int, int> ok = make_pair(min(k, a[i].second), max(k, a[i].second));
        if (binary_search(p, p + m, ok)){
            cnt += flow(unsort, a, p, a[i].second, m) + 1;
        }
    }
    memo[k] = cnt;
    return cnt;
}
void solve(){
    cin >> n >> m >> k;
    pair<int, int> a[n], unsort[n];
    pair<int, int> p[m];
    for (int i=0;i<n;i++){
        cin >> a[i].first;
        a[i].second = i+1;
        unsort[i] = a[i];
    }
    for (int i=0;i<m;i++) {
        cin >> p[i].first >> p[i].second;
        if (p[i].first > p[i].second){
            swap(p[i].first, p[i].second);
        }
    }
    sort(a, a + n);
    sort(p, p + m);
    int most = 0, bestK;
    for (int i=1;i<=n;i++){
        memo.clear();
        flow(unsort,a,p,i,m);
        int sz = memo.size();
        if (sz > most){
            most = sz;
            bestK = i;
        }
        if (i==k) cout << memo.size() << " ";
    }
    cout << bestK;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("capnuoc.INP", "r", stdin);
    freopen("capnuoc.OUT", "w", stdout);
    solve();
    return 0;
}

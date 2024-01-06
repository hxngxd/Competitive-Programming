#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef map<int, int> mpii;
#define pb push_back
#define fi first
#define se second
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
struct edge{
    int u, v;
    ll w;
};
const ll INF = 1e18;
int n, m;
vector<ll> d;
vector<int> trace;
vector<edge> e;
void bellmanford(int s){
    d.resize(n+1, INF);
    trace.resize(n+1, 0);
    trace[s] = -1;
    d[s] = 0;
    for (int i=1;i<n;i++){
        for (auto j : e){
            int u = j.u;
            int v = j.v;
            ll w = j.w;
            if (d[u] != INF && d[v] > d[u] + w){
                d[v] = d[u] + w;
                trace[v] = u;
            }
        }
    }
}
void CheckNegCyc(){
    for (int i=0;i<n;i++){
        for (auto j : e){
            int u = j.u;
            int v = j.v;
            ll w = j.w;
            if (d[u] != INF && d[v] > d[u] + w){
                d[v] = -INF;
                trace[v] = u;
            }
        }
    }
}

void PrintNegCyc(){
    int S;
    for (int i=0;i<n;i++){
        S = -1;
        for (auto j : e){
            int u = j.u;
            int v = j.v;
            ll w = j.w;
            if (d[v] > d[u] + w){
                d[v] = d[u] + w;
                trace[v] = u;
            }
        }
    }
    if (S==-1){
        cout << -1; return;
    }
    for (int i=0;i<n;i++){
        S = trace[S];
    }
    vector<int> cyc;
    for (int v = S; ; v = trace[v]){
        cyc.pb(v);
        if (v==S && cyc.size() > 1) break;
    }
    reverse(cyc.begin(), cyc.end());
    for (auto i : cyc){
        cout << i << " ";
    }
}
int main()
{
    fast_io();
    cin >> n >> m;
    for (int i=0;i<m;i++){
        int u, v; cin >> u >> v;
        ll w; cin >> w;
        e.pb({u, v, w});
    }
    return 0;
}
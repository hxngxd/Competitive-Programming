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
vector<vector<pair<int, ll>>> adj;
vector<int> trace, used;
vector<ll> d;
void prim(int s){
    trace.resize(n+1);
    used.resize(n+1, false);
    d.resize(n+1, INF);
    
    ll sum_w = 0;
    vector<edge> MST;
    priority_queue<pair<int, ll>, vector<pair<int, ll>>, greater<pair<int, ll>>> q;

    q.push({0, s});
    while (!q.empty()){
        int u = q.top().se;
        ll cur_d = q.top().fi;
        q.pop();

        if (used[u]) continue;

        sum_w += cur_d;
        used[u] = true;
        if (u!=s){
            MST.pb({trace[u], u, cur_d});
        }

        for (auto i : adj[u]){
            int v = i.fi;
            ll w = i.se;
            if (used[v]==false && w < d[v]){
                d[v] = w;
                q.push({d[v], v});
                trace[v] = u;
            }
        }
    }
    
    if (MST.size() != n-1){
        cout << -1; return;
    }
    cout << sum_w << endl;
    for (auto i : MST){
        cout << i.u << " " << i.v << " " << i.w << endl;
    }
}
int main()
{
    fast_io();
    cin >> n >> m;
    adj.resize(n+1);
    for (int i=0;i<m;i++){
        int u, v; cin >> u >> v;
        ll w; cin >> w;
        adj[u].pb({v, w});
        adj[v].pb({u, w});
    }
    prim(1);
    return 0;
}
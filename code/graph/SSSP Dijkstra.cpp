#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef map<int, int> mpii;
#define pb push_back
#define fi first
#define se second
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll INF = 1e18;
int n, m;
vector<vector<pair<int, ll>>> adj;
vector<ll> d;
vector<int> trace;
void dijkstra(int s){
    d.resize(n+1, INF);
    trace.resize(n+1);
    d[s] = 0;
    trace[s] = -1;
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
    q.push({0, s});
    while (!q.empty()){
        int u = q.top().se;
        ll cur_d = q.top().fi;
        q.pop();
        if (d[u] < cur_d) continue;
        for (auto i : adj[u]){
            int v = i.fi;
            ll w = i.se;
            if (d[v] > d[u] + w){
                d[v] = d[u] + w;
                trace[v] = u;
                q.push({d[v], v});
            }
        }
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
    }
    dijkstra(1);
    
    if (d[n]==INF){
        cout << -1; return 0;
    }
    
    vector<int> path;
    int v = n;
    while (v != -1){
        path.pb(v);
        v = trace[v];
    }
    reverse(path.begin(), path.end());
    for (auto i : path){
        cout << i << " ";
    }
    return 0;
}
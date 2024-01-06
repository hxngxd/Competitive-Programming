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
int n, m, q;
int main()
{
    fast_io();
    cin >> n >> m >> q;
    vector<vector<ll>> d(n+1, vector<ll>(n+1, INF));
    vector<vector<int>> trace(n+1, vector<int>(n+1));
    for (int i=0;i<m;i++){
        int u, v; cin >> u >> v;
        ll w; cin >> w;
        d[u][v] = min(d[u][v], w);
    }
    for (int i=1;i<=n;i++){
        d[i][i] = 0;
    }
    for (int u=1;u<=n;u++){
        for (int v=1;v<=n;v++){
            trace[u][v] = u;
        }
    }
    for (int k=1;k<=n;k++){
        for (int u=1;u<=n;u++){
            for (int v=1;v<=n;v++){
                if (d[u][v] > d[u][k] + d[k][v]){
                    d[u][v] = d[u][k] + d[k][v];
                    trace[u][v] = trace[k][v];
                }
            }
        }
    }
    for (int i=0;i<q;i++){
        int u, v; cin >> u >> v;
        if (d[u][v]==INF){
            cout << -1;
        }
        else{
            vector<int> path;
            while (v != u){
                path.pb(v);
                v = trace[u][v];
            }
            path.pb(u);
            reverse(path.begin(), path.end());
            for (int i : path){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
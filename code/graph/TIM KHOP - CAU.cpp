#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef map<int, int> mpii;
#define pb push_back
#define fi first
#define se second
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n, m, cnt = 0;
vector<vector<int>> adj;
vector<int> num, low;
set<pii> brigdes;
set<int> joints;
void dfs(int u, int root){
    num[u] = low[u] = ++cnt;
    int child = 0;
    for (auto v : adj[u]){
        if (v==root) continue;
        if (num[v]){
            low[u] = min(low[u], num[v]);
        }
        else{
            dfs(v, u);
            low[u] = min(low[u], low[v]);
            child++;
            if (low[v] >= num[v]) brigdes.insert({u, v});
            if (u==root){
                if (child >= 2) joints.insert(u);
            }
            else{
                if (low[v] >= num[u]) joints.insert(u);
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
        adj[u].pb(v);
        adj[v].pb(u);
    }
    num.resize(n+1, 0);
    low.resize(n+1);
    for (int i=1;i<=n;i++){
        if (!num[i]) dfs(i, i);
    }
    
    for (auto b : brigdes){
        cout << b.fi << " " << b.se << endl;
    }
    cout << endl;
    for (auto j : joints){
        cout << j << endl;
    }
    return 0;
}
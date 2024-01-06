#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef map<int, int> mpii;
#define pb push_back
#define fi first
#define se second
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n, m;
vector<vector<int>> adj;
vector<int> trace;
void bfs(int s){
    queue<int> q;
    q.push(s);
    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (auto v : adj[u]){
            if (trace[v]==0){
                trace[v]=u;
                cout << v << endl;
                q.push(v);
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
    trace.resize(n+1, 0);
    trace[1] = -1;
    bfs(1);
    return 0;
}
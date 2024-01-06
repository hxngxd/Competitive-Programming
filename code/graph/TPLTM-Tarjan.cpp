#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef map<int, int> mpii;
#define pb push_back
#define fi first
#define se second
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n, m, cnt = 0, scc = 0;
vector<vector<int>> adj;
vector<int> num, low;
vector<bool> deleted;
stack<int> st;
void dfs(int u){
    num[u] = low[u] = ++cnt;
    st.push(u);
    for (auto v : adj[u]){
        if (deleted[v]) continue;
        if (num[v]){
            low[u] = min(low[u], num[v]);
        }
        else{
            dfs(v);
            low[u] = min(low[u], low[v]);
        }
    }
    if (num[u] == low[u]){
        scc++;
        int v = 0;
        while (v != u){
            v = st.top();
            cout << v << " ";
            st.pop();
            deleted[v] = true;
        }
        cout << endl;
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
    }
    num.resize(n+1, 0);
    low.resize(n+1);
    deleted.resize(n+1, false);
    for (int i=1;i<=n;i++){
        if (!num[i]) dfs(i);
    }
    cout << scc;
    return 0;
}
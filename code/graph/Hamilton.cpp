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
vector<bool> visit;
vector<int> x;
void Try(int u){
    for (auto v : adj[u]){
        if (visit[v]==false){
            x.pb(v);
            if (x.size() < n){
                visit[v] = true;
                Try(v);
                visit[v] = false;
            }   
            else{
                for (auto i : x){
                    cout << i << " ";
                }
                cout << 1 << endl;
            }
            x.pop_back();
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
    visit.resize(n+1, false);
    visit[1] = true;
    x.pb(1);
    Try(1);
    return 0;
}
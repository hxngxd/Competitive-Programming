#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef map<int, int> mpii;
#define pb push_back
#define fi first
#define se second
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
vector<vector<int>> adj;
void euler(int s){
    stack<int> st;
    vector<int> EC;
    st.push(s);
    while (!st.empty()){
        int u = st.top();
        for (int v=1;v<=n;v++){
            if (adj[u][v] > 0){
                st.push(v);
                adj[u][v]--, adj[v][u]--;
                break;
            }
        }
        if (u==st.top()){
            EC.pb(u);
            st.pop();
        }
    }
    reverse(EC.begin(), EC.end());
    for (auto i : EC){
        cout << i << " ";
    }
}
int main()
{
    fast_io();
    cin >> n;
    int u, v, k;
    adj.resize(n+1, vector<int>(n+1, 0));
    while (cin >> u >> v >> k){
        adj[u][v] = k;
        adj[v][u] = k;
    }
    euler(1);
    return 0;
}
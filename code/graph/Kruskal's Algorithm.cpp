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
int n, m;
vector<edge> E;
vector<int> parent, sz;
bool cmp(edge A, edge B){
    return A.w < B.w;
}
void make_set(){
    parent.resize(n+1);
    sz.resize(n+1, 1);
    for (int i=1;i<=n;i++){
        parent[i] = i;
    }
}
int find(int v){
    if (v==parent[v]){
        return v;
    }
    return parent[v] = find(parent[v]); 
}
bool Union(int u, int v){
    u = find(u);
    v = find(v);
    if (u==v) return false;
    if (sz[u] < sz[v]) swap(u, v);
    parent[v] = u;
    sz[u] += sz[v];
    return true;
}
void kruskal(){
    make_set();
    ll d=0;
    vector<edge> MST;
    for (auto i : E){
        if (MST.size()==n-1) break;
        if (Union(i.u, i.v)){
            d += i.w;
            MST.pb(i);
        }
    }
    if (MST.size()!=n-1){
        cout << -1; return;
    }
    cout << d << endl;
    for (auto i : MST){
        cout << i.u << " " << i.v << " " << i.w << endl;
    }
}
int main()
{
    fast_io();
    cin >> n >> m;
    for (int i=0;i<m;i++){
        edge e;
        cin >> e.u >> e.v >> e.w;
        E.pb(e);
    }
    sort(E.begin(), E.end(), cmp);    
    kruskal();
    return 0;
}
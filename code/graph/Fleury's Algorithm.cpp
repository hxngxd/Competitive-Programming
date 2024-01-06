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
bool canGoBack(int x, int y){
    vector<bool> visit(n+1, false);
    adj[x][y]--, adj[y][x]--;
    visit[y] = true;
    queue<int> q;
    q.push(y);
    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (int v=1;v<=n;v++){
            if (visit[v]==false && adj[u][v] > 0){
                visit[v] = true;
                q.push(v);
                if (visit[x]==true) break;
            }
        }
    }
    adj[x][y]++, adj[y][x]++;
    return visit[x];
}
void fleury(int s){
    // day la tim chu trinh
    // neu tim duong di thi bat dau tu 1 dinh va ket thut tai 1 dinh nhu trong dinh ly da neu
    int current = s;
    int next = -1;
    cout << current << " ";
    while (next != 0){
        next = 0;
        for (int v=1;v<=n;v++){
            if (adj[current][v] > 0){
                next = v;
                if (canGoBack(current, next)) break;
            }
        }
        if (next != 0){
            adj[current][next]--, adj[next][current]--;
            cout << next << " ";
            current = next;
        }
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
    fleury(1);
    return 0;
}
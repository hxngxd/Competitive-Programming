#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mx 105

int m, n, k, ans = 0;
int p[mx*mx], q[mx*mx], r;
int visit[mx][mx]={0};

void flood(int i, int j, int right, int left, int down, int up){
    ans++;
    if (j<n && right>0 && visit[i][j+1]==0){
        visit[i][j+1] = 1;
        flood(i, j+1, right-1, 0, down, up);
    }
    if (j>1 && left>0 && visit[i][j-1]==0){
        visit[i][j-1] = 1;
        flood(i, j-1, 0, left-1, down, up);
    }
    if (i<m && down>0 && visit[i+1][j]==0){
        visit[i+1][j] = 1;
        flood(i+1, j, right, left, down-1, 0);
    }
    if (i>1 && up>0 && visit[i-1][j]==0){
        visit[i-1][j] = 1;
        flood(i-1, j, right, left, 0, up-1);
    }
}


int main()
{
    fast_io
    cin >> m >> n >> k;
    for (int i=0;i<k;i++){
        cin >> p[i] >> q[i] >> r;
        if (visit[p[i]][q[i]]==0){
            ans++;
            visit[p[i]][q[i]]=1;
        }
        int right = min(q[i]+r,n), left = max(q[i]-r,1);
        int down = min(p[i]+r,m), up = max(p[i]-r,1);

        if (visit[down][right]==0){
            visit[down][right]=1;
            flood(down,right,0,r,0,r);
        }
        if (visit[up][left]==0){
            visit[up][left]=1;
            flood(up,left,r,0,r,0);
        }
        if (visit[down][left]==0){
            visit[down][left]=1;
            flood(down,left,r,0,0,r);
        }
        if (visit[up][right]==0){
            visit[up][right]=1;
            flood(up,right,0,r,r,0);
        }
        
    }
    cout << m*n - ans;
    return 0;
}
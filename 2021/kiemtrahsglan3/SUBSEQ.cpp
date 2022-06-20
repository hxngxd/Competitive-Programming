#include <bits/stdc++.h>
#define Nmax 100005
#define ll long long
using namespace std;
int n;
ll S, res, a[Nmax], sum[Nmax];
void solve(int n, int S){
    cin >> n >> S;
    sum[0] = 0;
    for (int i=1;i<=n;i++){
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }
    res = 0;
    sort(sum, sum + n + 1);
    for (int i=0;i<=n;i++){
        int t = upper_bound(sum, sum + n + 1, sum[i] + S) - sum;
        if (t<n+1) res += n-t+1;
    }
    cout << res;
}
int main(){
    freopen("SUBSEQ.INP", "r", stdin);
    freopen("SUBSEQ.OUT", "w", stdout);
    solve(n, S);
    return 0;
}

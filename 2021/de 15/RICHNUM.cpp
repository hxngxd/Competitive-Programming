#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("RICHNUM.INP", "r", stdin);
    freopen("RICHNUM.OUT", "w", stdout);
    int n; cin >> n;
    if (n==1){
        cout << 1; return 0;
    }
    vector<int> p(n+1, 0);
    p[0]=0; p[1]=1;
    int best = 0;
    for (int i=1;i<=n;i++){
        for (int j=i+i;j<=n;j+=i){
            if (p[j]==0) p[j]=j+i;
            else p[j]+=i;
        }
        best = max(best, p[i]);
    }
    cout << find(p.begin(), p.end(), best)-p.begin();
    return 0;
}

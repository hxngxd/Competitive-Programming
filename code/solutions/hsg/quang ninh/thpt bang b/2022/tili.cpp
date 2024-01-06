#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int maxn = 1e5+5, m=1e9+7;
ll c1[maxn], c2[maxn], c3[maxn], c4[maxn];
int main()
{
    fast_io
    int n, k; cin >> n >> k;
    int r, c;
    if (k==1) cin >> r >> c;
    c1[0] = 1, c2[0] = c3[0] = c4[0] = 0;
    for (int i=1;i<=n;i++){
        if (i!=c){
            c1[i] = ((((2*(c1[i-1]%m))%m + c2[i-1]%m)%m + c3[i-1]%m)%m + c4[i-1]%m)%m;
            c2[i] = (c1[i-1]%m + c3[i-1]%m)%m;
            c3[i] = (c1[i-1]%m + c2[i-1]%m)%m;
            c4[i] = c1[i-1]%m;
        }
        else{
            if (r==1){
                c1[i] = (c1[i-1]%m + c3[i-1]%m)%m;
                c2[i] = 0;
                c3[i] = c1[i-1]%m;
            }
            else{
                c1[i] = (c1[i-1]%m + c2[i-1]%m)%m;
                c2[i] = c1[i-1]%m;
                c3[i] = 0;
            }
            c4[i] = 0;
        }
    }
    cout << c1[n]%m;
    return 0;
}
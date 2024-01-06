#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n; cin >> n;
    ll box[n][3];
    bool marked[n];
    memset(marked, 0, sizeof(marked));

    for (int i=0;i<3;i++){
        for (int j=0;j<n;j++) cin >> box[j][i];
    }
    for (int i=0;i<n;i++) sort(box[i], box[i]+3);

    int ans = 0;
    for (int i=0;i<n;i++){
        if (marked[i]) continue;
        int l=i, r=l+1;
        while (r<n){
            if (box[l][0] <= box[r][0] &&
                box[l][1] <= box[r][1] &&
                box[l][2] <= box[r][2] && !marked[r]){
                marked[l] = marked[r] = 1;
                l = r++;
            }
            else r++;
        }
        ans++;
    }
    cout << ans;
    return 0;
}
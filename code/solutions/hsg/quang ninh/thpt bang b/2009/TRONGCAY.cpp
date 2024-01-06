#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n; cin >> n;
    float r = (float)(n*2-1)/2;
    int ans = 0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            float d = (float)sqrt(i*i + j*j);
            if (d <= r) ans++;
            else break;
        }
    }
    cout << ans*4;
    return 0;
}
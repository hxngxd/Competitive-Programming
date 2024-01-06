//https://oj.vnoi.info/problem/ndccard
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n, m; cin >> n >> m;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    sort(a, a + n);
    int ans = INT_MIN;
    for (int high=n-1;high>=2;high--){
        int low=0, mid=high-1;
        while (low<mid){
            int sum = a[low] + a[mid] + a[high];
            if (sum == m){
                cout << m; return 0;
            }
            else if (sum < m){
                ans = max(ans, sum);
                low++;
            }
            else{
                mid--;
            }
        }
    }
    cout << ans;
    return 0;
}
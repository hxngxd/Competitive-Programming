//https://oj.vnoi.info/problem/nksgame
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n, ans = INT_MAX;
void input(int arr[], int n){
    for (int i=0;i<n;i++) cin >> arr[i];
    sort(arr, arr + n);
}
void getMin(int arr[], int i, int other){
    if (0 <= i && i < n){
        ans = min(ans, abs(other + arr[i]));
    }
}
int main()
{
    fast_io
    cin >> n;
    int b[n], c[n];
    input(b, n);
    input(c, n);
    for (int i=0;i<n;i++){
        int greater_equal = lower_bound(c, c + n, -b[i]) - c;
        int less = greater_equal - 1;
        int greater = upper_bound(c, c + n, -b[i]) - c;

        getMin(c, greater_equal, b[i]);
        getMin(c, less, b[i]);
        getMin(c, greater, b[i]);
    }
    cout << ans;
    return 0;
}
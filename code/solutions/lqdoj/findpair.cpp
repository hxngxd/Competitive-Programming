//https://lqdoj.edu.vn/problem/findpair
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n; cin >> n;
    ll x; cin >> x;
    ll a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    int i=0,j=n-1;
    while (i<j){
        ll sum = a[i] + a[j];
        if (sum==x){
            cout << i+1 << " " << j+1;
            return 0;
        }
        else if (sum < x){
            i++;
        }
        else{
            j--;
        }
    }
    cout << "No solution";
    return 0;
}
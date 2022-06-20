#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, cnt = 0;
ll solve(){
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
        arr[i] = arr[i]*arr[i];
    }
    if (n<3) return 0;
    sort(arr, arr + n);
    for (int a=n-1;a>=2;a--){
        int b=0, c=a-1;
        while (b<c){
            int x = arr[b] + arr[c];
            int y = arr[a];
            if (x==y){
                cnt++;
                b++; c--;
            }
            else if (x<y) b++;
            else c--;
        }
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("pitago.INP", "r", stdin);
    freopen("pitago.OUT", "w", stdout);
    cout << solve();
    return 0;
}

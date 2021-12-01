#include <bits/stdc++.h>
using namespace std;
void solve(int n, int S){
    int a[n+1];
    vector<int> prefix;
    int prefsum = 0, cnt = 0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        prefsum += a[i];
        prefix.push_back(prefsum);
        if (prefsum > S || prefsum < S*-1) cnt++;
    }
    sort(prefix.begin(), prefix.end());
    for (int i=0;i<n;i++){
        cnt += n - (upper_bound(prefix.begin(), prefix.end(), prefix[i] + S) - prefix.begin());
    }
    cout << cnt;
}
int main(){
    freopen("SUBSEQ.INP", "r", stdin);
    freopen("SUBSEQ.OUT", "w", stdout);
    int n, S; cin >> n >> S;
    solve(n, S);
    return 0;
}
/*
10 7
-4 9 2 -11 -3 8 -6 5 -3 1
*/

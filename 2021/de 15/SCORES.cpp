#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("SCORES.INP", "r", stdin);
    freopen("SCORES.OUT", "w", stdout);
    int n; cin >> n;
    string name[n];
    pair<int,int> score[n];
    int total[n];
    for (int i=0;i<n;i++){
        cin >> name[i] >> score[i].first >> score[i].second;
        total[i]=score[i].first + score[i].second;
    }
    sort(total, total + n);
    for (int i=0;i<n;i++){
        int t = upper_bound(total, total+n, score[i].first + score[i].second)-total;
        cout << name[i] << " " << n-t+1 << endl;
    }
    return 0;
}

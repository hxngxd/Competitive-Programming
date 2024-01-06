#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
bool cmp(string a, string b){
    return a.size() < b.size();
}
int main()
{
    fast_io
    int n; cin >> n;
    string s[n];
    for (int i=0;i<n;i++){
        cin >> s[i];
    }
    sort(s, s + n, cmp);
    int ans = 0;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            int a = s[i].size(), b = s[j].size(), valid = 1;
            if (a==b || b%a!=0) continue;
            for (int k=0;k<b;k++){
                if (s[j][k] != s[i][k%a]){
                    valid = 0;
                    break;
                }
            }
            ans+=valid;
        }
    }
    cout << ans;
    return 0;
}
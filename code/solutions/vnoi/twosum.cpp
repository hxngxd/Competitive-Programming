//https://oj.vnoi.info/problem/twosum
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int maxn = 5001;
int pref[maxn];
vector<int> even, odd;
unordered_map<int,int> mp;
int n, ans = 0;

void check(vector<int>& pos, int i){
    int j=0, sum;
    while (pos[j] < i-1){
        sum = pref[i] - pref[pos[j]];
        if (mp.find(sum/2 + pref[pos[j]]) != mp.end()){
            ans = max(ans, i - pos[j]);
            return;
        }
        j++;
    }
}
int main()
{
    fast_io
    cin >> n;
    pref[0] = 0;
    even.push_back(0);

    for (int i=1;i<=n;i++){
        int a; cin >> a;
        pref[i] = a + pref[i-1];
        if (pref[i]%2==0) even.push_back(i);
        else odd.push_back(i);
    }

    mp[0]++; mp[pref[1]]++;
    for (int i=2;i<=n;i++){
        if (pref[i]%2==0) check(even, i);
        else check(odd, i);
        mp[pref[i]]++;
    }
    
    cout << ans;
    return 0;
}
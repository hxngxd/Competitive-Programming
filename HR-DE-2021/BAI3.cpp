#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int ctoi(char c){
    return c - 48;
}
vector<int> dsum(string s, map<int, vector<int>> &mp){
    int ans = 0, odd = 0;
    for (int i=0;i<s.size();i++){
        int num = ctoi(s[i]);
        ans += num;
        if (num%2==1){
            odd++;
            mp[num].push_back(i);
        }
    }
    return {ans, odd};
}
string res(string s){
    map<int, vector<int>> mp;
    vector<int> sum = dsum(s, mp);
//    if (sum[1]==0) return "0";
//    if (sum[0]%2==0 && ctoi(s.back())%2==1) return s;
//
//    while (ctoi(s.back())%2==0){
//        sum[0] -= ctoi(s.back());
//        s.pop_back();
//    }
//    if (sum[0]%2==0) return s;
//    if (sum[1]==1) return "0";
    cout << s << endl;
    for (auto i : mp){
        cout << i.first << ": ";
        for (int j=0;j<i.second.size();j++){
            cout << i.second[j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int n;
void solve(){
    cin >> n;
    string a[n+1];
    for (int i=0;i<n;i++){
        cin >> a[i];
        res(a[i]);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.INP", "r", stdin);
    //freopen("output.OUT", "w", stdout);
    solve();
    return 0;
}

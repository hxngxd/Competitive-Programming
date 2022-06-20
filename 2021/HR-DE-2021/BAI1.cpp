#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int ctoi(char c){
    return c - 48;
}
vector<int> dsum(string s){
    int ans = 0, odd = 0;
    int min_odd = INT_MAX, id=-1;
    for (int i=0;i<s.size();i++){
        int num = ctoi(s[i]);
        ans += num;
        if (num%2==1){
            odd++;
            if (num < min_odd){
                min_odd = num;
                id = i;
            }
        }
    }
    return {ans, odd, min_odd, id};
}
string res(string s){
    vector<int> sum = dsum(s);
    if (sum[1]==0) return "0";
    if (sum[0]%2==0 && ctoi(s.back())%2==1) return s;

    while (ctoi(s.back())%2==0){
        sum[0] -= ctoi(s.back());
        s.pop_back();
    }
    if (sum[0]%2==0) return s;
    if (sum[1]-1==0) return "0";
    int min_odd = INT_MAX, id=-1;
    for (int i=0;i<s.size()-1;i++){
        int num = ctoi(s[i]);
        if (num < INT_MAX){
            min_odd = num;
            id = i;
        }
    }
    if (mid_odd==)
}
int n;
void solve(){
    cin >> n;
    string a[n+1];
    for (int i=0;i<n;i++){
        cin >> a[i];
        cout << res(a[i]) << endl;
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

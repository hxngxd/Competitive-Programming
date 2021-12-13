#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int ctoi(char c){
    return c - 48;
}
vector<int> dsum(string s, map<int, vector<int>> &mp){
    int ans = 0, odd = 0;
    int min_ = INT_MAX, min_id = -1;
    for (int i=0;i<s.size();i++){
        int num = ctoi(s[i]);
        ans += num;
        if (num%2==1){
            odd++;
            mp[num].push_back(i);
            if (num < min_){
                min_ = num;
                min_id = i;
            }
        }
    }
    return {ans, odd, min_, min_id};
}
string res(string s){
    map<int, vector<int>> mp;
    vector<int> sum = dsum(s, mp);
//    if (sum[1]==0) return "0";
//    if (sum[0]%2==0 && ctoi(s.back())%2==1) return s;
//
    while (ctoi(s.back())%2==0){
        sum[0] -= ctoi(s.back());
        s.pop_back();
    }
    cout << s << " ";
//    if (sum[0]%2==0) return s;
//    if (sum[1]==1) return "0";
    cout << endl;
    for (auto i : mp){
        cout << i.first << ": ";
        for (auto j : i.second){
            cout << j << " ";
        }
        cout << endl;
    }
    if (sum[3]==s.size()-1){
        if (ctoi(s[sum[3]-1])%2==1) s.pop_back();
        else{

        }
    }
}
/*
k co chu so le return 0
tong chu so la chan, chu so cuoi la le return s

neu chu so cuoi la chan, xoa den khi so cuoi la le va xoa dan tong chu so
sau khi da xoa, tong chu so la chan return s
neu tong chu so la le thi can xoa 1 chu so le
neu chi con 1 chu so le return 0

neu con nhieu hon 1 chu so le, tim chu so le nho nhat:
neu chu so le nho nhat ko nam o cuoi:
    tim vi tri so le nho nhat va xoa di
    neu co nhieu so le nho nhat:
        tim tat ca vi tri so le nho nhat, roi xoa di so le ma o do chu so dang sau ngay canh no la nho nhat

neu chu so le nho nhat nam o cuoi:
    neu truoc so le do la 1 so le, thi xoa so le o cuoi di
    neu la so chan:
        tim vi tri so le nho nhat va xoa di
        neu co nhieu so le nho nhat:
            tim tat ca vi tri so le nho nhat, roi xoa di so le ma o do chu so dang sau ngay canh no la nho nhat

*/
13536
1356
1536
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

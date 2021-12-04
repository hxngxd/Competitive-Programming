#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, k;
string s;
map<string, int> mp;
int longest(){
    cin >> n >> k >> s;
    string ss = s;
    ss.pop_back();
    int i=0, j=ss.size()-1;
    bool ltor = true;
    mp[ss]++;
    while (ss.size()>1){
        if (ltor){
            while (j < n-1){
                ss.erase(ss.begin());
                i++;
                j++;
                ss += s[j];
                mp[ss]++;
                if (mp[ss] >= k) return ss.size();
            }
            ss.erase(ss.begin());
            i++;
            mp[ss]++;
            if (mp[ss] >= k) return ss.size();
            ltor = false;
        }
        else{
            while (i>0){
                ss.pop_back();
                j--;
                i--;
                string s_ = ""; s_ += s[i];
                ss.insert(0, s_);
                mp[ss]++;
                if (mp[ss] >= k) return ss.size();
            }
            ss.pop_back();
            j--;
            mp[ss]++;
            if (mp[ss] >= k) return ss.size();
            ltor = true;
        }
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SUBK.INP", "r", stdin);
    freopen("SUBK.OUT", "w", stdout);
    cout << longest();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
bool dx(string s){
    int l=0, r=s.size()-1;
    while (l<=r){
        if (s[l++] != s[r--]) return false;
    }
    return true;
}
int main()
{
    fast_io
    string s;
    getline(cin, s);
    s += ' ';
    int n = s.size();
    vector<string> cs;    
    for (int i=0;i<n;i++){
        if (s[i]==' '){
            cout << s[i]; continue;
        }
        string tmp = "";
        for (int j=i;j<n;j++){
            if (s[j]==' '){
                cs.push_back(tmp);
                if ('a' <= tmp[0] && tmp[0] <= 'z') tmp[0] -= 32;
                cout << tmp;
                i=j-1;
                break;
            }
            else tmp += s[j];
        }
    }
    cout << nl;
    int cnt = 0;
    for (auto i : cs){
        if (dx(i)){
            cout << i << " ";
            cnt++; 
        }
    }
    if (cnt!=0) cout << cnt;
    else cout << "khong co";
    return 0;
}
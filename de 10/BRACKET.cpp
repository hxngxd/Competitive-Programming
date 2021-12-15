#include <bits/stdc++.h>
#define ll long long
using namespace std;
string bracket(int n, string s){
    if (n==0) return "YES";
    if (n==1 || n==3) return "NO";
    if (s.front()==')') return "NO";
    if (s.back()=='(') return "NO";
    vector<char> v;
    for (int i=0;i<n;i++){
        if (s[i]=='(') v.push_back(s[i]);
        else{
            if (v.empty()) return "NO";
            else{
                if (v.back()=='(') v.pop_back();
            }
        }
    }
    return (v.empty()) ? "YES" : "NO";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BRACKET.INP", "r", stdin);
    freopen("BRACKET.OUT", "w", stdout);
    int n;
    string s;
    cin >> n >> s;
    cout << bracket(n, s);
    return 0;
}

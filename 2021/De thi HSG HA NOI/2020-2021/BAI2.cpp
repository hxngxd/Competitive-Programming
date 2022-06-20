#include <bits/stdc++.h>
#define ll long long
using namespace std;
int ctoi(char c){
    return c-48;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;
    int dsum = 0;
    int zeros = 0, id=s.size();
    for (int i=0;i<s.size();i++){
        dsum += ctoi(s[i]);
        if (s[i]=='0'){
            zeros++;
            id = min(id, i);
        }
    }
    if (dsum%3!=0) cout << -1;
    if (dsum%3==0){
        if (s.back()=='0'){
            sort(s.begin(), s.end()-1, greater<int>());
            cout << s;
        }
        else{
            if (zeros==0) cout << -1;
            else{
                swap(s[s.size()-1], s[id]);
                sort(s.begin(), s.end(), greater<int>());
                cout << s;
            }
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    map<char, int> mp;
    cin >> s;
    for (int i=0;i<s.size();i++){
        if (s[i]>90){
            mp[(char)(s[i]-32)]++;
        }
        else{
            mp[s[i]]++;
        }
    }
    cout << mp.size();
    int m = 0;
    char mc;
    for (auto i : mp){
        cout << i.first << i.second;
        if (i.second > m){
            m = i.second;
            mc = i.first;
        }
    }
    cout << mc;
    return 0;
}

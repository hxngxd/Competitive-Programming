#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("THONGKEXAU.INP", "r", stdin);
    freopen("THONGKEXAU.OUT", "w", stdout);
    string s;
    cin >> s;
    map<char, int> thuong, hoa;
    for (int i=0;i<s.size();i++){
        if ((int)s[i] >= 65 && (int)s[i] <= 90){
            hoa[s[i]]++;
        }
        else{
            thuong[s[i]]++;
        }
    }
    cout << thuong.size() + hoa.size() << endl;
    for (auto i : thuong){
        if (i.second==1){
            cout << i.first << endl;
        }
        else{
            cout << i.second << " " << i.first << endl;
        }
    }
    for (auto i : hoa){
        if (i.second==1){
            cout << i.first << endl;
        }
        else{
            cout << i.second << " " << i.first << endl;
        }
    }
    return 0;
}

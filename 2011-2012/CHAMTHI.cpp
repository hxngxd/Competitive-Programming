#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int t = 0, tong = 0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='C'){
            t++;
            tong+=t;
        }
        else{
            t=0;
        }
    }
    cout << tong;
    return 0;
}

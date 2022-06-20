/*Nguyen Tuong Hung*/
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
vector<string> a;
string out = "";
void gray(int n, string s){
    if (s.size()==n){
        a.pb(s);
        cout << s << endl;
    }
    else{
        gray(n, '0' + s);
        gray(n, '1' + s);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    gray(n, "");
    cout << out;
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("CGAME.INP", "r", stdin);
    freopen("CGAME.OUT", "w", stdout);
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    ll An = 0, Binh = 0;
    int turn = 0;
    while (a.size() > 0 && turn <= n){
        if (turn%2==0){
            if (a.front() > a.back()){
                An += a.front();
                a.erase(a.begin());
            }
            else{
                An += a.back();
                a.pop_back();
            }
        }
        else{
            if (a.front() > a.back()){
                Binh += a.front();
                a.erase(a.begin());
            }
            else{
                Binh += a.back();
                a.pop_back();
            }
        }
        turn++;
    }
    cout << An << " " << Binh;
    return 0;
}

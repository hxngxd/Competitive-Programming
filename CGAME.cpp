#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.INP", "r", stdin);
    // freopen("output.OUT", "w", stdout);
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int An = 0;
    int Binh = 0;
    int turn = 0;
    while (a.size() > 0 && turn <= n){
        if (turn%2==0){
            if (a.front() > a.back()){
                An += a.front();
                a.erase(a.begin());
            }
            else if (a.front() <= a.back()){
                An += a.back();
                a.pop_back();
            }
        }
        else{
            if (a.front() > a.back()){
                Binh += a.front();
                a.erase(a.begin());
            }
            else if (a.front() <= a.back()){
                Binh += a.back();
                a.pop_back();
            }
        }
        turn++;
    }
    cout << An << " " << Binh;
    return 0;
}
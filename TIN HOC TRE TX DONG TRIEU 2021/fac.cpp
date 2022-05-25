#include <bits/stdc++.h>
using namespace std;
int ctoi(char c){
    return c-'a';
}
bool isFace(vector<int> c){
    return c[ctoi('f')] != -1 && c[ctoi('a')] != -1 && c[ctoi('c')] != -1 && c[ctoi('e')] != -1;
}
int main(){
//    freopen("fac.inp", "r", stdin);
//    freopen("fac.out", "w", stdout);
    int m, n, ans=0; cin >> m >> n;
    string a[51];
    for (int i=0;i<m;i++) cin >> a[i];
    for (int i=0;i<m-1;i++){
        for (int j=0;j<n-1;j++){
            vector<int> face(26, -1);
            face[ctoi(a[i][j])] = face[ctoi(a[i][j+1])] = face[ctoi(a[i+1][j])] = face[ctoi(a[i+1][j+1])] = 1;
            ans += isFace(face);
        }
    }
    cout << ans;
    return 0;
}

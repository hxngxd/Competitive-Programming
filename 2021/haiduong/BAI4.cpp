#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("BAI4.INP", "r", stdin);
    freopen("BAI4.OUT", "w", stdout);
    int n; cin >> n;
    vector<string> v;
    int dem = n;
    int start = 0, endd = -1;
    for (int i=0;i<n;i++){
        string s; cin >> s;
        v.push_back(s);
        if (s!="."){
            dem--;
            if (start==0) start = i;
            endd = max(endd, i);
        }
    }
    if (v[start]=="L") dem-=start;
    if (v[endd]=="R") dem-=(n-endd-1);
    int next=0, i=start;
    while (i!=endd){
        if (v[i]!="."){
            next=i+1;
            while (v[next]==".") next++;
            int distance = next-i-1;
            dem-=distance;
            if (v[i]!=v[next]){
                if (distance%2!=0){
                    dem++;
                }
            }
            i = next;
        }
    }
    cout << dem << endl;
    return 0;
}

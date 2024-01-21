//https://oj.vnoi.info/problem/product
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define lg log10
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

double ctod(char c){
    return c - 48;
}
int main()
{
    fast_io
    string p; cin >> p;
    int n = p.size();

    double lg_p = lg(ctod(p[0])) + n - 1;
    double d = 0;
    for (int i=1;i<min(n, 16);i++){
        d = d * 10.0 + ctod(p[i-1]);
        lg_p += lg(1 + ctod(p[i])/(d*10));
    }

    int X = 1, Y = 1;
    double eps = 1e-9, cur = 0;
    while (true){
        if (abs(cur - lg_p) <= eps){
            cout << X << " " << Y-1;
            break;
        }
        else if (cur < lg_p){
            cur += lg(Y++);
        }
        else{
            cur -= lg(X++);
        }
    }
    return 0;
}
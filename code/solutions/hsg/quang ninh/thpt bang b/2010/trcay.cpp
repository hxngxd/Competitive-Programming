#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
double area(int a1, int a2, int b1, int b2, int m1, int m2){
    int n1 = b2 - a2, n2 = a1 - b1;
    return abs((double)(n1*(m1-a1) + n2*(m2-a2))*0.5);
}
int main()
{
    fast_io
    int a[7];
    int min_x, max_x, min_y, max_y, ans = 0;
    min_x = min_y = 300;
    max_x = max_y = -300;
    for (int i=1;i<=6;i++){
        cin >> a[i];
        if (i%2!=0){
            min_x = min(min_x, a[i]);
            max_x = max(max_x, a[i]);
        }
        else{
            min_y = min(min_y, a[i]);
            max_y = max(max_y, a[i]);
        }
    }
    double total_area = area(a[1],a[2],a[3],a[4],a[5],a[6]);
    for (int x=min_x;x<=max_x;x++){
        for (int y=min_y;y<=max_y;y++){
            double area1 = area(a[1],a[2],a[3],a[4],x,y);
            double area2 = area(a[5],a[6],a[3],a[4],x,y);
            double area3 = area(a[1],a[2],a[5],a[6],x,y);
            double sum = area1 + area2 + area3, eps = 1e-5;
            if (area1 * area2 * area3 == 0) continue;
            if (abs(sum - total_area) <= eps) ans++;
        }
    }
    cout << ans;
    return 0;
}
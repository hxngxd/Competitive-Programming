#include <bits/stdc++.h>
using namespace std;
bool incircle(float x, float y, float r){
    float sqrradius = r*r;
    return x*x + y*y <= sqrradius;
}
int fullsquare(int n){
    if (n==1) return 0;
    if (n==2) return 0;
    int sqr = 0;
    float x, y, x1, y1;
    float r = (2*(float)n - 1)/2;
    for (int i=1;i<=(int)r;i++){
        x = y = i;
        if (incircle(x, y, r)){
            sqr=x*x;
        }
        else{
            x1 = x;
            y1 = y;
            while (x1 > 1){
                x1--;
                if (incircle(x1, y1, r)){
                    sqr+=2;
                }
            }
        }
    }
    return sqr*4;
}
int main(){
    int n;
    cin >> n;
    cout << fullsquare(n);
    return 0;
}

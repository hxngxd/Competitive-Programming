#include <bits/stdc++.h>
using namespace std;
float mx(float a, float b, float c){
    return max(a, max(b, c));
}
float mn(float a, float b, float c){
    return min(a, min(b, c));
}
float a(float y, float y1){
    return y1 - y;
}
float b(float x, float x1){
    return x - x1;
}
float c(float x, float y, float x1, float y1){
    return a(y, y1)*-x + b(x, x1)*-y;
}
bool inrange(float x, float y, float d[3]){
    float k = d[0]*x + d[1]*y + d[2];
    return d[0]*x + d[1]*y + d[2] > 0;
}
bool outofd(float x, float y, float d[3]){
    float k = d[0]*x + d[1]*y + d[2];
    return d[0]*x + d[1]*y + d[2] != 0;
}
int main(){
    float ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    float AB[3] = {a(ay, by), b(ax, bx), c(ax, ay, bx, by)};
    float BC[3] = {a(by, cy), b(bx, cx), c(bx, by, cx, cy)};
    float CA[3] = {a(cy, ay), b(cx, ax), c(cx, cy, ax, ay)};
    float topx = mn(ax,bx,cx) + 1, topy = mx(ay,by,cy) - 1;
    float botx = mx(ax,bx,cx) - 1, boty = mn(ay,by,cy) + 1;
    int points = 0;
    float gx = (ax+bx+cx)/3;
    float gy = (ay+by+cy)/3;
    bool ginAB = inrange(gx,gy,AB), ginBC = inrange(gx,gy,BC), ginCA = inrange(gx,gy,CA);
    for (int x=topx;x<=botx;x++){
        for (int y=topy;y>=boty;y--){
            if (outofd(x,y,AB) && outofd(x,y,BC) && outofd(x,y,CA) && inrange(x,y,AB)==ginAB && inrange(x,y,BC)==ginBC && inrange(x,y,CA)==ginCA){
                cout << x << " " << y << endl;
                points++;
            }
        }
    }
    cout << points;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    // fast_io
    srand(time(0));
    long long x = rand()%1000000000000000000 + 1;
    long long low = 1, high = 10000000000000000002;
    cout << x << nl;
    while (low <= high){
        long long mid = (low + high)/2;
        cout << mid << " ";
        if (mid == x){
            cout << "YES"; break;
        }
        else if (mid < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return 0;
}
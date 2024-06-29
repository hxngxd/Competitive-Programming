#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main()
{
    int n;
    cin >> n;
    queue<string> q;
    q.push("0");
    q.push("1");
    int i = 2, j = i;
    bool k = true;
    while (!q.empty() && n - 1)
    {
        string p = q.front();
        q.pop();
        if (!j)
        {
            i *= 2;
            j = i;
        }
        if (j == 1)
            n--;
        if (k)
        {
            q.push(p + '0');
            q.push(p + '1');
        }
        else
        {
            q.push(p + '1');
            q.push(p + '0');
        }
        k = !k;
        j--;
    }
    while (!q.empty())
    {
        cout << q.front() << nl;
        q.pop();
    }
    return 0;
}
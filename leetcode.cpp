#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool inNum(int i, vector<int> num){
    return find(num.begin(), num.end(), i)!=num.end();
}
int longestSubarray(vector<int> arr) {
    int n = arr.size();
    if (n<=2) return n;
    int longest = 0;
    vector<int> num(2);
    num[0] = arr[0];
    num[1] = arr[1];
    arr.push_back(-1);
    for (int i=0;i<n;i++){
        int j = i + 1;
        cout << i << " ";
        while (true){
            if (inNum(arr[i], num) && inNum(arr[j], num) && j <= n){
                j++;
                continue;
            }
            break;
        }
        cout << j << endl;
        longest = max(longest, j - i + 1);
        i = j - 1;
        num[0] = arr[i];
        num[1] = arr[j];
    }
    return longest;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr{1,2,3,4,5};
    cout << longestSubarray(arr);

    return 0;
}

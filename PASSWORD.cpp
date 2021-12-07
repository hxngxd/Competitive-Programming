#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isValid(int up, int low, int digit){
    return (up!=0 && low!=0 && digit!=0);
}
bool isUp(char c){
    return (c>='A' && c<='Z');
}
bool isLow(char c){
    return (c>='a' && c<='z');
}
bool isDgt(char c){
    return (c>='0' && c<='9');
}
void add_c(int &up, int &low, int &digit, char c){
    if (isUp(c)) up++;
    else if (isLow(c)) low++;
    else if (isDgt(c)) digit++;
}
void del_c(int &up, int &low, int &digit, char c){
    if (isUp(c)) up--;
    else if (isLow(c)) low--;
    else if (isDgt(c)) digit--;
}
string s;
ll password(){
    cin >> s;
    int n = s.size();
    if (n<6) return 0;

    int up, low, digit;
    up = low = digit = 0;
    char c;
    for (int i=0;i<n;i++){
        c = s[i];
        add_c(up, low, digit, c);
    }
    if (isValid(up, low, digit)==false) return 0;

    int valid = 1;

    string s_ = s;
    c = s_.back();
    s_.pop_back();
    del_c(up, low, digit, c);
    if (isValid(up, low, digit) && s_.size()>=6) valid++;

    bool ltor = true;
    int i=0, j=n-2;
    char l, r;
    while (s_.size() >= 6){
        if (ltor){
            while (j<n-1){
                l = s_.front();
                del_c(up, low, digit, l);
                s_.erase(s_.begin());

                i++;
                j++;

                r = s[j];
                add_c(up, low, digit, r);
                s_ += r;

                if (isValid(up, low, digit)) valid++;
            }
            l = s_.front();
            del_c(up, low, digit, l);
            s_.erase(s_.begin());

            if (isValid(up, low, digit) && s_.size()>=6) valid++;

            i++;
            ltor = false;
        }
        else {
            while (i>0){
                r = s_.back();
                del_c(up, low, digit, r);
                s_.pop_back();

                i--;
                j--;

                l = s[i];
                string ins = ""; ins += l;
                add_c(up, low, digit, l);
                s_.insert(0, ins);

                if (isValid(up, low, digit)) valid++;
            }
            r = s_.back();
            del_c(up, low, digit, r);
            s_.pop_back();

            if (isValid(up, low, digit) && s_.size()>=6) valid++;

            j--;
            ltor = true;
        }
    }
    return valid;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("PASSWORD.INP", "r", stdin);
    freopen("PASSWORD.OUT", "w", stdout);
    cout << password();
    return 0;
}

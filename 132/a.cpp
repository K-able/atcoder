#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    string s;
    cin >> s;

    string ans = "Yes";
    rep(i,s.size()) {
        if (count(s.begin(), s.end(), s[i]) != 2) ans = "No";
    }
    cout << ans << endl;
    return 0;
}

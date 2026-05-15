#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> x;
    for (int i = 0; i < (int)s.size(); i += 2) {
        x.push_back(s[i] - '0');
    }

    sort(x.begin(), x.end());

    for (int i = 0; i < (int)x.size(); ++i) {
        if (i) cout << '+';
        cout << x[i];
    }
    return 0;
}
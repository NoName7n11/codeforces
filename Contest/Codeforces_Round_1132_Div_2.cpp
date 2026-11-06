#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a = n/2;
        long long b = n - a;
        cout << a * b << endl;
    }
}
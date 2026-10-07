#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        string s;
        cin >> n >> c >> s;

        int count = 0;
        for(int i = 0; i < n/2; i++){
            if(s[i] != s[n-1-i]){
                if(s[i] == c || s[n-1-i] == c) count += 1;
                else count += 2;
            }
        }
        cout << count << endl;
    }
}

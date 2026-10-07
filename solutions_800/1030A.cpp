// In Search of an Easy Problem

#include <iostream>
using namespace std;

int main(){
    int n, a;
    string s = "EASY";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a;
        if(a == 1){
            s = "HARD";
            break;
        }
    }
    cout << s;
}
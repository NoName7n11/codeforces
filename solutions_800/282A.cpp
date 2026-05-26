// Bit++

#include <iostream>
using namespace std;

int main(){
    int n, X = 0;
    string o;
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> o;
        if(o == "++X" || o == "X++"){
            X+=1;
        }
        else X-=1;
    }
    cout << X;
    return 0;
}
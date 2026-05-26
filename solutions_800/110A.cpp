// Nearly Lucky Number

#include <iostream>
using namespace std;

int main(){
    int count = 0;
    string s, a = "YES";
    cin >> s;

    for(char c : s){
        if(c == '4' || c == '7'){
            count++;
        }
    }

    if(count == 4 || count == 7){
        cout << "YES";
    } 
    else cout << "NO";
    return 0;
}
// Beautiful Year

#include <iostream>
#include <string>
using namespace std;

int main(){
    string x;
    int y;
    cin >> x;

    for(int i=0; i<x.length(); i++){
        for(int j=0; j<x.length(); j++){
            if(x[i] == x[j+1]){
                y = stoi(x);
                y++;
                x = char(y);
            }
        }
    }
    cout << x;
}
// Elephant

#include <iostream>
using namespace std;

int main(){
    int x, a=5;
    int count=0;
    cin >> x;

    for(int i=0; x > 0; i++){
        x = x - a;
        count++;
    }
    cout << count;
    return 0;
}
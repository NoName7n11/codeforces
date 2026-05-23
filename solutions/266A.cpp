// Stones on the Table

#include <iostream>
using namespace std;

int main(){
    int k,n,w,count=0;
    cin >> k >> n >> w;

    for(int i=1; i<=w; i++){
        //x = 3 * i;
        count = count + 3*i;
    }
    cout << count-n;
}
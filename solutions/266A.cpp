// Stones on the Table

#include <iostream>
using namespace std;

int main(){
    int k,n,w,count=0;
    cin >> k >> n >> w;

    for(int i=1; i<=w; i++){
        count = count + k*i;
    }
    if(count-n<0){
        cout << 0;
    }
    else cout << count-n;
}
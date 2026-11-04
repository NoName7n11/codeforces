#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l,r,sum = 0, count = 0;
        cin >> l >> r;
        int size = (r - l) + 1;
        vector<int> arr;
        for(int i = 0; i < size; i++){
            arr.push_back(l+i);
        }
        for(int i = 0; i < size; i++){
            sum = sum + arr[i];
        }

        if(sum > r){
            sum - arr[size - 1];
            arr.pop_back();
            count++;
        }

        if()


    }
}
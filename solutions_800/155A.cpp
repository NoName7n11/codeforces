// I_love_%username%

#include <iostream>
using namespace std;

int main(){
    int n,h,l,count,i;
    cin >> n;
    int arr[n];

    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    h = arr[i];
    l = arr[i];
    for(i=0; i<n; i++){
        if(arr[i]>h){
            count++;
        }
    }
    cout << count;
}
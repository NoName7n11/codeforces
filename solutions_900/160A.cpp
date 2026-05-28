// Twins

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t_1=0, t1_bank=0, count=0;
    long long sum=0;
    cin >> n;
    int j = n-1;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++){
        sum += v[i];
    }

    for(int i=0; i<n; i++){
        if(sum >= t1_bank && j>=0){
           t1_bank = t1_bank + v[j];
           t_1 = v[j];
           sum = sum - t_1;
           count++;
           j--;
        }
        else break;
    }
    cout << count;
}
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i<n;i++) {
        cin >> arr[i];
    }

    vector<int> temp(n+1);

    int cnt = 0;
    for(int i = 0; i<n; i++) {
        temp[arr[i]] = i;
    }
    
    for(int i = 2; i<=n; i++) {
        if(temp[i] < temp [i-1]) {
            cnt++;
        }
    }

    cout << cnt + 1<< endl;

    return 0;
}
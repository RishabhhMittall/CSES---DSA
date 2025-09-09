#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    ll maxi = INT_MIN;
    ll sum = 0;

    for(int i = 0;i<n; i++) {
        sum += arr[i];

        maxi = max(sum, maxi);

        if(sum < 0) {
            sum = 0;
        }
    }

    cout << maxi << endl;

    return 0;
}
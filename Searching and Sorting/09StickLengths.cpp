
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);
    ll sum = 0;

    for(int i = 0; i<n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin(), arr.end());
    
    ll mid = arr[n/2];
    ll ans = 0;

    for(int i = 0; i<n; i++) {
        ans += abs(arr[i] - mid);
    }

    cout << ans << endl;


    return 0;
}
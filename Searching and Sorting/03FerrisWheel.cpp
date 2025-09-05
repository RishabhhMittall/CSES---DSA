#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n, x;
    cin >> n >> x;

    vector<int> arr(n);

    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int ans = 0;
    int i = 0, j = n - 1;
    while(i <= j) {
        if(arr[i] + arr[j] <= x) {
            i++;
            j--;
        } 
        else {
            j--;
        }
        ans++;
    }
    cout << ans << endl;

    return 0;
}
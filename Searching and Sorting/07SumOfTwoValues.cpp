#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr[i] = {val, i + 1};
    }

    sort(arr.begin(), arr.end());

    int i = 0, j = n - 1;
    while (i < j) {
        int sum = arr[i].first + arr[j].first;
        if (sum == x) {
            cout << arr[i].second << " " << arr[j].second << endl;
            return 0;
        } 
        else if (sum > x) {
            j--;
        } 
        else {
            i++;
        }
    }
    cout << "IMPOSSIBLE" << endl;

    return 0;
}
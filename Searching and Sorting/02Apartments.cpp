#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n;
    int m;
    int k;

    cin >> n >> m >> k;

    vector<int> a(n);
    vector<int> b(m);

    for(int i = 0; i<n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i<m; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, ans = 0;
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= k) {
            ans++;
            i++; j++;
        } else if (b[j] < a[i] - k) {
            j++;
        } else {
            i++;
        }
    }
    cout << ans << endl;


    return 0;
}
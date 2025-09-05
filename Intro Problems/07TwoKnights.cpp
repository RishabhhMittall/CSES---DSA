#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    for (ll k = 1; k <= n; ++k) {
        ll total = k * k * (k * k - 1) / 2;
        ll attack = 0;
        if (k > 2)
            attack = 4 * (k - 1) * (k - 2);
        cout << total - attack << endl;
    }
    return 0;
}
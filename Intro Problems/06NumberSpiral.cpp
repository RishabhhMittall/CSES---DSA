#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll number_spiral(ll y, ll x) {
    ll l = max(x, y);
    // Use long long for multiplication to avoid overflow
    ll l_sq = l * l;
    ll l_prev_sq = (l - 1) * (l - 1);

    if (l % 2 == 0) {
        if (y == l)
            return l_sq - (x - 1);
        else
            return l_prev_sq + y;
    } else {
        if (x == l)
            return l_sq - (y - 1);
        else
            return l_prev_sq + x;
    }
}


int main() {

    int t;
    cin >> t;
    while(t--) {

        ll y, x;
        cin >> y >> x;
        cout << number_spiral(y, x) << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll number_spiral(ll y, ll x) {
    ll l = max(x, y);
    ll l_sq = l * l;

    if (l % 2 == 0) {
        if (y == l)
            return l_sq - (x - 1);
        else
            return (l - 1) * (l - 1) + y;
    } 
    else {
        if (x == l)
            return l_sq - (y - 1);
        else
            return (l - 1) * (l - 1) + x;
    }
}

int main() {
    ll y, x;
    cin >> y >> x;
    cout << number_spiral(y, x) << endl;
    return 0;
}
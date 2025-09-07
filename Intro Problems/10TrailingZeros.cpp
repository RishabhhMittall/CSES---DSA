#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

long long fact(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }

    return n * fact(n-1);
}
int main() {
    ll n;
    cin >> n;

    ll cnt = 0;
    while (n > 0) {
        cnt += n / 5;
        n /= 5;
    }

    cout << cnt << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n;
    cin >> n;

    // ll sum = n * (n + 1) / 2;
    ll sum = 0;
    for(ll i = 1;  i <= n; i++) {
        sum += i;
    }
    // cout << sum << endl;
    // cout << res << endl;

    if(sum % 2 == 1) {
        cout << "NO" << endl;
        return 0;
    }
    else {
         cout << "YES" << endl;
    vector<int> set1, set2;
    long long target = sum / 2;
    for (int i = n; i >= 1; --i) {
        if (target >= i) {
            set1.push_back(i);
            target -= i;
        } else {
            set2.push_back(i);
        }
    }

    cout << set1.size() << endl;
    for (int x : set1) cout << x << " ";
    cout << endl;
    cout << set2.size() << endl;
    for (int x : set2) cout << x << " ";
    cout << endl;
    }

    return 0;
}
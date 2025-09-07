#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n;
    cin >> n;
    vector<int> bits;

    while( n > 0) {
        bits.push_back(n%2);
        n /= 2;
    }

    cout << bits.size() << endl;

    return 0;
}
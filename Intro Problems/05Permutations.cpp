#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n;
    cin >> n;

    if(n == 1) {
        cout << 1 << endl;
        return 0;
    }
    if(n <= 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<int> arr;
    for(int i = 1; i<=n; i++) {
        arr.push_back(i);
    }

    for(int i = 2; i<=n; i+=2) {
        cout << i << " ";
    }
    for(int i = 1; i<=n; i+=2) {
        cout << i << " ";
    }
    



    return 0;
}
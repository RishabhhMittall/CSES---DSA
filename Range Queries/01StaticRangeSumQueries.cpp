#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n , q;
    cin >> n >> q;
    vector<int> arr(n);

    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> query;

    for(int i = 0; i<q; i++) {
        int a, b;
        cin >> a >> b;
        
        if(a > b) {
            swap(a,b);
        }

        query.push_back({a,b});
    }

    vector<ll> prefix(n+1, 0);

    for(int i = 1; i<=n; i++) {
        prefix[i] = prefix[i-1] + arr[i-1];
    }

    for(int i = 0; i<q; i++) {
        vector<int> temp = query[i];

        cout << prefix[temp[1]] - prefix[temp[0] - 1] << endl;
    }


    return 0;
}
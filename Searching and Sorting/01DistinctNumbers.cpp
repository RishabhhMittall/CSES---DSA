#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    map<int, int> mp;

    for(int i = 0; i<n; i++) {
        if(mp.find(arr[i]) == mp.end()) {
            mp[arr[i]] = 1;
        }   
        else {
            mp[arr[i]]++;
        }
    }

    cout << mp.size() << endl;

    return 0;
}
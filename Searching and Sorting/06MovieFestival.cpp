#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n;
    cin >> n;

    vector<vector<int>> arr(n);

    for(int i = 0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        arr[i] = {b,a};
    }

    sort(arr.begin(), arr.end());
    int count = 0, last_end = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i][1] >= last_end) {
            count++;
            last_end = arr[i][0];
        }
    }
    cout << count << endl;

    return 0;
}
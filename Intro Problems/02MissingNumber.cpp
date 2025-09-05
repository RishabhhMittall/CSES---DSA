#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n;
    cin >> n;

    vector<int> arr;
    for(int i = 0; i< n-1; i++) {
        int temp ;
        cin >> temp;
        arr.push_back(temp);
    }

    int sum = 0;

    for(int i = 1; i<n+1; i++) {
        sum += i;
    } 

    int diff = 0;

    for(int i = 0; i<n-1; i++) {
        diff += arr[i];
    }

    cout << sum - diff << endl;

    return 0;
}
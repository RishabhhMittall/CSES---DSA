#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        int mini = min(a,b);
        int maxi = max(a,b);

        if ((a + b) % 3 == 0){
            
            if(mini*2 >= maxi) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;

            }
        } 
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
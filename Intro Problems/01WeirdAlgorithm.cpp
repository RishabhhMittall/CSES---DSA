#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n;
    cin >> n;

    vector<ll> ans;
    ans.push_back(n);

    ll temp = ans[0];

    while(temp != 1) {
        if(temp % 2 == 0) {
            temp /= 2;
            ans.push_back(temp);
        }
        else {
            temp = temp * 3 + 1;
            ans.push_back(temp);
        }
    }
    
    for(int  i = 0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }cout << endl;

    return 0;
}
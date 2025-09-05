#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    string s;
    getline(cin , s);

    if(s.length() == 1) {
        cout << 1 << endl;
        return 0;
    }

 int maxi = 1, curr = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i-1]) {
            curr++;
        } else {
            curr = 1;
        }
        maxi = max(maxi, curr);
    }

    cout << maxi << endl;
    return 0;
}
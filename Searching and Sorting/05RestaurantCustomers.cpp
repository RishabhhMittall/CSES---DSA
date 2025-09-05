#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n;
    cin >> n;
    
    vector<int>in(n);
    vector<int>out(n);
    
    // map<int, int> mp;
    
    for(int i = 0; i<n; i++) {
        cin >> in[i] >> out[i];
    }
    
    sort(in.begin(), in.end());
    sort(out.begin(), out.end());

    int j = 0,  i = 0;
    int ans = 0, pt = 0;
   while(i<n){
        if(j < n) {
            if(in[i] < out[j]) {
                pt++;
                i++;
            }
            else {
                pt--;
                j++;
            }
            ans = max(ans, pt);
        }
    }
    cout << ans << endl;

    return 0;
}
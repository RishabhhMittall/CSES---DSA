#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int n , m;
    cin >> n >> m;

    // vector<int> ticket(n);
    multiset<int> ticket;
    vector<int> customer(m);

    for(int i = 0; i<n; i++) {
        int a;
        cin >> a;
        ticket.insert(a);
    }
    for(int i = 0; i<m; i++) {
        cin >> customer[i];
    }

    int i = 0, j = 0;

    for(int i = 0; i<m; i++) {
        auto it = ticket.upper_bound(customer[i]); // first ticket > customer
        if (it == ticket.begin()) {
            cout << -1 << "\n";
        } 
        else {
            --it; // largest ticket <= customer
            cout << *it << "\n";
            ticket.erase(it); // remove the ticket
        }
    }
    

    return 0;
}
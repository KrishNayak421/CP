#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    ll n, d;
    cin >> n >> d;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());

    ll count = 0;
    ll i = 0;
    while (i < n) {
        ll p = a[i];
        ll required = d + 1;
        ll k;
        if(p != 0) k = (required + p - 1) / p;
        else k = 0;
        if (i + k <= n) {
            count++;
            i += k;
        } else {
            break;
        }
    }
    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        if ((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

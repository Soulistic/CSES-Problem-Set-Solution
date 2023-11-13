#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cstdio>
#include <iomanip>
#include <fstream>
#include <string>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <cassert>
#include <complex>
#include <climits>
#include <ctime>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll modular_pow(ll base, ll exponent, int mod) {
    ll result = 1;
    base %= mod;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}
void solve(int n) {
    ll ans = modular_pow(2, n, MOD);
    cout << ans << endl;
}
int main() {
    int t;
    //cin >> t;
    t=1;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}

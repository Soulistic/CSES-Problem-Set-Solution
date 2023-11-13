#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin >> n;
    vector<long long> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    long long median = p[n/2];
    long long cost = 0;
    for (int i = 0; i < n; i++) {
        cost += abs(p[i] - median);
    }
    cout << cost << endl;
}
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    // cin>>t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}
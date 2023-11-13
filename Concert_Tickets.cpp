#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    multiset<int, greater<int>> h;
    while (n--) {
        int x;
        cin >> x;
        h.insert(x);
    }
    // for(auto it = h.begin(); it != h.end(); ++it) cout << *it << " ";
    cout<<endl;
    while (m--) {
        int t;
        cin >> t;
        auto it = h.lower_bound(t);
        // cout<<"it->"<<*it<<endl;
        // cout<<"h.end()->"<<*h.end()<<endl;
        if (it != h.end()) {
            cout << *it << "\n";
            h.erase(it);
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}

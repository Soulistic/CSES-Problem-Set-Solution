#include<bits/stdc++.h>
using namespace std;

int main() {
    multiset<int, greater<int>> h;
    h.insert(5);
    h.insert(3);
    h.insert(7);
    h.insert(8);

    auto it = h.lower_bound(2);  // it now points to 3, the first element in h that is not greater than 4
    // cout<<*it<<endl;
    // cout<<*h.end()<<endl;
    if(it != h.end())
        cout << *it;  // Output: 3
    else
        cout << "No suitable ticket found.";

    return 0;
}

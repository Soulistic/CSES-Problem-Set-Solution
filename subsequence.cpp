#include<bits/stdc++.h>
using namespace std;

void generateSubsequences(vector<int>& arr, int i, vector<int>& subsequence) {
    if (i == arr.size()) {
        for (int num : subsequence) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }
        // Include the current element and move to the next
        subsequence.push_back(arr[i]);
        generateSubsequences(arr, i + 1, subsequence);
        subsequence.pop_back();
        // Exclude the current element and move to the next
        generateSubsequences(arr, i + 1, subsequence);
}

int main() {
    vector<int> arr = {3,1,2};
    vector<int> subsequence;
    generateSubsequences(arr, 0, subsequence);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){

}
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
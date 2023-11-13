#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll &ans, const vector<ll> &nums, ll sumA, ll sumB, int index){
    if(index == nums.size()){
        ans = min(ans, abs(sumA - sumB));
        return;
    }
    solve(ans, nums, sumA + nums[index], sumB, index + 1);
    solve(ans, nums, sumA, sumB + nums[index], index + 1);
}

int main(){
    ll t;
    t = 1;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        ll ans = INT_MAX;
        ll sumA = 0, sumB = 0;
        solve(ans, nums, sumA, sumB, 0);
        cout << ans << endl;
    }
    return 0;
}

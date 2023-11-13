#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i].first;
        nums[i].second=i+1;
    }
    std::sort(nums.begin(),nums.end());
    int i=0,j=n-1;
    while(i<j){
        if(nums[i].first+nums[j].first==x){
            cout<<nums[j].second<<" "<<nums[i].second<<endl;
            return;
        }
        else if(nums[i].first+nums[j].first<x){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;

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
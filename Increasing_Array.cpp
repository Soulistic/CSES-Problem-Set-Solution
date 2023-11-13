#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n){
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans=0;
    int maxVal=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxVal){
            maxVal=arr[i];
        }
        else{
            ans+=maxVal-arr[i];
            //cout<<maxVal-arr[i]<<" ";
        }
    }
    cout<<ans;
    
}
int main(){
    ll t;
    //cin>>t;
    t=1;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
    return 0;
}
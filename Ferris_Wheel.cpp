#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int i=0,j=n-1;
    int ans=0;
    while(i<=j){
        if(v[i]+v[j]<=x){
            ans++;
            i++;
            j--;
        }
        else{
            ans++;
            j--;
        }
    }
    cout<<ans<<endl;

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
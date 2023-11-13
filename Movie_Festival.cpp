#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> Pair;
bool sortbysec(const Pair &a,const Pair &b){
    return a.second < b.second;
}
void solve(){
    ll n;
    cin>>n;
    vector<Pair> time(n);
    for(ll i=0;i<n;i++){
        cin>>time[i].first>>time[i].second;
    }
    sort(time.begin(),time.end(),sortbysec);
    ll ans=0,last=0;
    for(ll i=0;i<n;i++){
        if(time[i].first>=last){
            last=time[i].second;
            ans++;
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
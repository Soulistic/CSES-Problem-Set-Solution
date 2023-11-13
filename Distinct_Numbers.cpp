#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    set<ll> st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<endl;
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
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n){
    ll ans=0;
    int i=1;
    while(n/pow(5,i)>=1){
        ans+=n/pow(5,i);
        i++;
    }
    cout<<ans<<endl;
}
int main(){
    ll t;
    //cin>>t;
    t=1;
    while(t--){
        ll n;
        cin>>n;
        solve(n);
    }
    return 0;
}
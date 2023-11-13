#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(v.begin(),v.end());
    sort(a.begin(),a.end());
    int i=0,j=0;
    int ans=0;
    while(i<n and j<m){
        if(abs(v[i]-a[j])<=k){
            ans++;
            i++;
            j++;
        }
        else if(v[i]<a[j]){
            i++;
        }
        else{
            j++;
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
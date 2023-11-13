#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll sum=0;
    ll maxi=LONG_MIN;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi<<endl;
}
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    //cin>>t;
    t=1;     
    while(t--){
        solve();
    }
    return 0;
}
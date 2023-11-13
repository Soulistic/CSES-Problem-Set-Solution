#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int count_ways(int n){
    if(n==0) return 1;
    else if(n<0) return 0;
    else{
        int total=0;
        for(int i=1;i<=6;i++){
            total+=count_ways(n-i);
            total=total%MOD;
        }
        return total;
    }
    
}
void solve(){
    ll n;
    cin>>n;
    cout<<count_ways(n)<<endl;
}
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}
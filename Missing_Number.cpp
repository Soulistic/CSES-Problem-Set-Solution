#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(vector<ll> arr,int n){
    for(int i=1;i<n+1;i++){
        if(i!=arr[i]) {
        cout<<i<<endl;
        return;
        }
    }
}
int main(){
    ll n;
    cin>>n;
    
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    solve(arr,n);
    return 0;
}
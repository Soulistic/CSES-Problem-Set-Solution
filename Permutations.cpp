#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n){
    if(n==1){
        cout<<n;
        return;
    }
    if(n<=3 and n>1) {
        cout<<"NO SOLUTION";
        return;
    }
    if(n==4){
        cout<<"2 4 1 3";
        return;
    }
    for(int i=1;i<n+1;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
    for(int i=1;i<n+1;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
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
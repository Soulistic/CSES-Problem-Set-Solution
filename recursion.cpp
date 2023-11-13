#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(int n){
    if(n==0) return 0;
    return n+solve(n-1);
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        cout<<solve(5);
    }
    return 0;
}
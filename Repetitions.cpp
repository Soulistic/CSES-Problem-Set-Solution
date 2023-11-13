#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(string str){
    ll maxCount=0;
    ll count=0;
    ll i;
    ll n=str.length();
    char c=str[0];
    for(i=0;i<n;i++){
        if(str[i]!=c){
            c=str[i];
            count=0;
            count++;
        }
        else{
            count++;
        }
        maxCount=max(count,maxCount);
    }
    cout<<maxCount;
    
}
int main(){
    ll t;
    //cin>>t;
    t=1;
    while(t--){
        string str;
        cin>>str;
        solve(str);
    }
    return 0;
}
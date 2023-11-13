#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n){
    int sum=n*(n+1)/2;
    vector<ll> a,b;
    if(sum%2==0){
        cout<<"YES"<<endl;//1st
        if(n%2==0){
            cout<<n/2<<endl;
            for(int i=1;i<=n/4;i++){
                cout<<i<<" ";
            }
            for(int i=n;i>n-(n/4);i--){
                cout<<i<<" ";
            }
            cout<<endl;
            cout<<n/2<<endl;
            for(int i=(n/4)+1;i<=n-(n/4);i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            int count=0;
            for(int i=1;i<=n;i++){
                if(count<2){
                    a.push_back(i);
                    count++;
                }
                else if(count>=2 and count<4){
                    b.push_back(i);
                    count++;
                }
                if(count==4) count=0;
            }
            cout<<a.size()<<endl;//3rd
            for(int i=0;i<a.size();i++){
                cout<<a[i]<<" ";//4th
            }cout<<endl;
            cout<<b.size()<<endl;//5th
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }cout<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
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
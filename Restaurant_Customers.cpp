#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> time(n);
    for(int i=0;i<n;i++){
        cin>>time[i].first>>time[i].second;
    }
    sort(time.begin(),time.end());
    int ans=0;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        if(pq.empty()){
            pq.push(time[i].second);
        }
        else{
            if(pq.top()<=time[i].first){
                pq.pop();
            }
            pq.push(time[i].second);
        }
        ans=max(ans,(int)pq.size());
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

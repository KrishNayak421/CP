#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()

bool sorting(vector<ll>& a){
    bool sorted = true;
    for(ll i = 0; i < a.size()-1; i++){
        if(a[i] > a[i+1]) sorted = false;
    }
    return sorted;
}
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    
    if(sorting(a)){
        cout<<"YES"<<endl;
        return;
    }
    if(k == 1){
        if(sorting(a)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    else if(k >= 2) cout<<"YES"<<endl;
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--) solve();
    
    return 0;
}
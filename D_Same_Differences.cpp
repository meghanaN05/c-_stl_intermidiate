#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    long long n;
    cin>>n;
    vector<long long>a(n);
    map<long long,long long>mp;
    for(long long i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]-i]++;
    }
    long long ans=0;
    for(auto x:mp){
        ans +=(x.second*(x.second-1))/2;
    }
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    while (k--) {
        solve();
    }

    return 0;

}
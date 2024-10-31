#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string a,b;
    cin>>a>>b;
    int n=a.size(),m=b.size();
    int ans=0;
    for(int len=1;len<=min(n,m);len++){
        for(int i=0;i+len<=n;i++){
            for(int j=0;j+len<=m;j++){
                if(a.substr(i,len)==b.substr(j,len)){
                    ans=max(ans,len);
                }
            }
        }
    }
    cout<<a.size()+b.size()-2*ans<<endl;
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
#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string s;
    cin>>s;
    int n=s.size();
    vector<int>cnt(26,0);
    for(int i=0;i<n;i++){
        cnt[s[i]-'a']++;
    }
    int cnt1=0,cnt2=0;
    for(int i=0;i<26;i++){
        if(cnt[i]==1) cnt1++;
        else if(cnt[i]>=2) cnt2++;

    }
    int ans =cnt2+cnt1/2;
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
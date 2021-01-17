#include <bits/stdc++.h>
using namespace std;
#define fastIO                  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl                    '\n'
#define int long long
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)

#define time__(d) \
    for ( \
        auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
        blockTime.second; \
        debug("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
)
const long long N=(long long)(1e5+1);
const long long MOD=(long long)(1e9+7);

int n,w;
int val[101],wt[N];
int dp[101][N];
void solve(){
        cin>>n>>w;
        for(int i=1;i<=n;i++){
                cin>>wt[i]>>val[i];
        }
        for(int i=1;i<=n;i++){
                for(int j=1;j<=w;j++){
                        if(wt[i]<=j){
                                dp[i][j]=max(val[i]+dp[i-1][j-wt[i]],dp[i-1][j]);
                        }
                        else{
                                dp[i][j]=dp[i-1][j];
                        }
                        // cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
                }
        }
        cout<<dp[n][w]<<endl;
        // for(int i=0;i<=n;i++){
        //         for(int j=0;j<=w;j++){
        //                 cout<<dp[i][j]<<" ";
        //         }
        //         cout<<endl;
        // }
}           
int32_t main()
{
    fastIO
#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif
        int tc=1;
        // cin>>tc;
        while(tc--){
                time__("solve"){
                    solve();
            }
        }
    
        return 0;
}
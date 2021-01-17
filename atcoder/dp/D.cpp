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
int knapsack(int n,int w){
	// cout<<n<<" "<<w<<endl;
	if(n==0 || w==0){
		return 0;
	}
	if(dp[n][w]!=-1){
		return dp[n][w];
	}
	if(wt[n]<=w){
		int op1=val[n]+knapsack(n-1,w-wt[n]);
		int op2=knapsack(n-1,w);
		dp[n][w]=max(op1,op2);
		// cout<<n<<" "<<w<<" : "<<op1<<" "<<op2<<" : "<<dp[n][w]<<endl;
		return dp[n][w];
	}
	else{
		dp[n][w]=knapsack(n-1,w);
		// cout<<n<<" "<<w<<" : "<<dp[n][w]<<endl;
		return dp[n][w];
	}
}
void solve(){
	cin>>n>>w;
	for(int i=1;i<=n;i++){
		cin>>wt[i]>>val[i];
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=w;j++){
			if(i!=0 and j!=0){
				dp[i][j]=-1;
			}
		}
	}
	cout<<knapsack(n,w)<<endl;
	// for(int i=0;i<=n;i++){
	// 	for(int j=0;j<=w;j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
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
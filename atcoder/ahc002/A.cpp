#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
using namespace std;
using namespace __gnu_pbds;
// #pragma GCC optimize ("trapv")
//g++ -static -DONLINE_JUDGE -Wl,--stack=268435456 -O2 -std=c++17
//g++ -std=c++17 -Wshadow -Wall -o "%e" "%f" -O2 -Wno-unused-result
//g++ -std=c++17 -Wshadow -Wall -o "%e" "%f" -g  -D_GLIBCXX_DEBUG
#define endl                    '\n'
#define ll 			long long
#define ld			long double
#define google(x)		cout<<"Case #"<<x<<": ";
#define pb                      push_back
#define all(v)                  v.begin(), v.end()
#define mem(a,x)                memset(a,x,sizeof(a))
#define sz(x)       		(ll)x.size()
#define ff                      first
#define ss                      second
#define fix(f,n) 		std::fixed<<std::setprecision(n)<<f
#define pll 			pair<ll,ll>
#define pii 			pair<int,int>
#define MOD      		1000000007
#define MOD1   			998244353
//Time:
#define debug2(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) \
    for ( \
        auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
        blockTime.second; \
        debug2("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
)
//debug:
void __print(int x) {cout << x;}
void __print(long x) {cout << x;}
void __print(long long x) {cout << x;}
void __print(unsigned x) {cout << x;}
void __print(unsigned long x) {cout << x;}
void __print(unsigned long long x) {cout << x;}
void __print(float x) {cout << x;}
void __print(double x) {cout << x;}
void __print(long double x) {cout << x;}
void __print(char x) {cout << '\'' << x << '\'';}
void __print(const char *x) {cout << '\"' << x << '\"';}
void __print(const string &x) {cout << '\"' << x << '\"';}
void __print(bool x) {cout << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cout << '{'; __print(x.first); cout << ','; __print(x.second); cout << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cout << '{'; for (auto &i: x) cout << (f++ ? "," : ""), __print(i); cout << "}";}
void _print() {cout << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cout << ", "; _print(v...);}
// #ifndef ONLINE_JUDGE
#define debug(x...) cout << "[" << #x << "] = ["; _print(x)
// #else
// #define debug(x...)
// #endif
void line(ll x){while(x--){cout<<"-";}cout<<endl;}
template<typename T1,typename T2,typename T3>	//array
void arr_(T1 *a,T2 x,T3 y){ for(int i=x;i<=y;i++){ cout<<a[i]<<" ";} cout<<endl; }
template<typename T>	//queue
void queue_(queue<T> x){ while(!x.empty()){ T y=x.front(); x.pop(); debug(y); } line(20); }
template<typename T>	//stack
void stack_(stack<T> x){ while(!x.empty()){ T y=x.top(); x.pop(); debug(y); } line(20); }
template<typename T>	//priority_queue
void pqueue_(priority_queue<T> x){ while(!x.empty()){ T y=x.top(); x.pop(); debug(y); } line(20); }
template<typename T1,typename T2,typename T3,typename T4,typename T5>	//matrix
void arr2_(T1 *a,T2 x1,T3 x2,T4 y1,T5 y2){
	for(int i=x1;i<=x2;i++){
		for(int j=y1;j<=y2;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
//Generators:
// https://codeforces.com/blog/entry/58786
// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template <typename T>
T rng2(T a,T b){
	return a + rng() % (b - a + 1);
}
//Functions:
void start(){
// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
// #endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	// Remove in interactive problems
	// srand(time(NULL));	
}
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;	//https://codeforces.com/blog/entry/11080
template<typename T> T power(T x,T y){if(y == 0){return 1;} T p = power(x, y/2); p = (p * p); return (y%2 == 0)? p : (x * p);}  
template<typename T> T powm(T x,T y,T m){T ans=1,r=1;x%=m;while(r>0&&r<=y){if(r&y){ans*=x;ans%=m;} r<<=1;x*=x;x%=m;}return ans;}   
template<typename T> T gcd(T a,T b) { if (b == 0){return a;} return gcd(b, a % b);}  
template<typename T> T lcm(T a,T b){T lar = max(a, b);T small = min(a, b);for (T i = lar; ; i += lar) { if (i % small == 0){ return i;} } }
template<typename T> T modinv(T a) { return powm(a, MOD-2); } //for prime
template<typename T> T mod(T a,T b){return ((a%b)+b)%b;}
template<typename T> T modsum(T a, T b, T m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
template<typename T> T modmul(T a, T b, T m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
template<typename T> T modmulf(T a,T b,T mod) {T res=0;a%= mod;while(b){if(b&1)res=(res+a)%mod;a=(2*a)%mod;b>>=1;}return res;}
template<typename T> T mod_sub(T a, T b, T m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
template<typename T> T mod_div(T a, T b, T m) {a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m;}  //only for prime m
template<typename T> T fact(T r){ T ans=1;while(r)ans=modmul(ans,r),r--;return ans; }
template<typename T> T invfact(T r){T ans=1;while(r)ans=modmul(ans,modinv(r)),r--; return ans;}
template<typename T> bool cmp1(const pair<T,T> &a, const pair<T,T> &b) {  return (a.ss<b.ss); }//sortbysec
template<typename T> bool cmp2(const pair<T,T> &a, const pair<T,T> &b) {  return (a.ff>b.ff); }//sortbydec
// void line(ll x){while(x--){cout<<"-";}cout<<endl;}
bool overflow(long double a, long double b){return a * b > 1e18 + 10;}
const long long N=(long long)(1e5+1);
const long long inf=(long long)(1e18);
bool cmp(const pair<ll,string> &a,const pair<ll,string> &b){
	if(a.ff==b.ff){
		return (sz(a.ss) < sz(b.ss));
	}
	return (a.ff>b.ff);
}
int a[55][55];
int b[55][55];
map<int,int> m;
vector<pair<ll,string> > ans;
pll p;
void fun(vector<pair<int,int> > v, int x, int y, bool (&vis)[55][55],ll sum,string path){
	
	sum+=b[x][y];
	// debug(b[x][y]);
	vis[x][y]=true;
	if(m[a[x][y]]==2){
		for(int i=0;i<4;i++){
			if(a[x+v[i].ff][y+v[i].ss]==a[x][y]){
				vis[x+v[i].ff][y+v[i].ss]=true;
				// cout<<x+fx[i]<<" "<<y+fy[i]<<endl;
				break;
			}
		}
	}
	sort(all(v));
	do{
		string dir="";
		for(auto it:v){
			if(it.ff==0 && it.ss==1){
				dir+='R';
			}
			if(it.ff==0 && it.ss==-1){
				dir+='L';
			}
			if(it.ff==-1 && it.ss==0){
				dir+='U';
			}
			if(it.ff==1 && it.ss==0){
				dir+='D';
			}
		}
		int f=0;
		for(int i=0;i<4;i++){
			if(!vis[x+v[i].ff][y+v[i].ss] && b[x+v[i].ff][y+v[i].ss]>=0){
				f=1;
				fun(v,x+v[i].ff,y+v[i].ss,vis,sum,path+dir[i]);
				break;
			}
		}
		// if(path=="ULLLULDDDLDRDRRURRRRURRRRDRDLLDLDLDLLLDLLDLDRRRRRURRRRRRUUUURUURRUUUURURRDDRDRRUUURDRRDRRDDLDLLLLLLDLDDRRRRURRRRRURRRUURURDRRRDLDRDLDLLLLLDLLLLDLDLLLLDLDLLULLDLDLLLDRDDRRRDRDLLDLLULULLLDDLLULLDLLLULUUUUUULULLUUULUUUUULLLULUULLDLLDDRRRDDRDLLDLDDLDRRDDRRRDLDLLDRDDRDDRRDRRRDDLDLDLLDLLDDLLDDDLDRDDRRRURURRRRURRURUUUURUUURRRURRRRRRURDDLDDRRURRRRDRRURRRUUUUURRDRRRDRDRDRDLDLDLLLULDDLLULLDRDDLDDRRURURRDDRRURRRRURRRDDLLLDLDLDRRRRURRDDRDDLDRRDDLLLLDLLUUULULLLDDDRDLLLLUUUULUULLLULUULLDLLUULLDLLLLLLUUULLDDLDDLDRDLDRRDDLLLLUUUUULLDDDLDLLULDDLDLDDLLULLDDDRRDRRRURUURURURRRRDDLLLDRDRDLDDDRRURRDDRRUURRURRURURRRURDRRURURRDDDRRRURRRRRRRDDLDRDDRRUUURRRRDDRDRR"){
			// debug(b[x][y],f,v);
			// for(int i=0;i<4;i++){
				// cout<<vis[x+v[i].ff][y+v[i].ss]<<" : "<<b[x+v[i].ff][y+v[i].ss]<<" "<<x+v[i].ff<<" "<<y+v[i].ss<<endl;
				// // debug(vis[][]);
			// }
		// }
		if(!f){
			ans.pb({sum,path});
			// return;
			continue;
		}
	}while(next_permutation(all(v)));
}
void solve(int tc)
{
	int x,y;
	cin>>x>>y;
	x++;y++;
	p={x,y};
	mem(a,-1);
	mem(b,-1);
	for(int i=1;i<=50;i++){
		for(int j=1;j<=50;j++){
			cin>>a[i][j];
			m[a[i][j]]++;
		}
	}
	// cout<<a[x][y]<<endl;
	for(int i=1;i<=50;i++){
		for(int j=1;j<=50;j++){
			cin>>b[i][j];
		}
	}
	vector<pair<int,int> > v;
	v.pb({1,0});
	v.pb({-1,0});
	v.pb({0,1});
	v.pb({0,-1});
	sort(all(v));
	// debug(v);
	do{
		// debug(v,dir);
		x=p.ff;
		y=p.ss;
		bool vis[55][55];
		mem(vis,false);
		ll sum=0;
		string path="";
		fun(v,x,y,vis,sum,path);	
		
	}while(next_permutation(all(v)));
	// cout<<sz(ans)<<endl;
	sort(all(ans),cmp);
	// reverse(all(ans));
	// for(auto it:ans){
		// cout<<it.ff<<" "<<it.ss<<endl;
	// }
	// cout<<ans[0].ff<<" "<<ans[0].ss<<endl;
	// cout<<ans[0].ff<<endl;
	
	
	x=p.ff;
	y=p.ss;
	bool vis[55][55];
	mem(vis,-1);
	for(auto it:ans[0].ss){
		vis[x][y]=true;
		if(m[a[x][y]]==2){
			for(int i=0;i<4;i++){
				if(a[x+v[i].ff][y+v[i].ss]==a[x][y]){
					vis[x+v[i].ff][y+v[i].ss]=true;
					// cout<<x+fx[i]<<" "<<y+fy[i]<<endl;
					break;
				}
			}
		}
		if(it=='L'){
			y--;
		}
		if(it=='R'){
			y++;
		}
		if(it=='U'){
			x--;
		}
		if(it=='D'){
			x++;
		}
	}
	sort(all(v));
	vector<pair<ll,string> > ans2;
	p={x,y};
	do{
		string dir="";
		for(auto it:v){
			if(it.ff==0 && it.ss==1){
				dir+='R';
			}
			if(it.ff==0 && it.ss==-1){
				dir+='L';
			}
			if(it.ff==-1 && it.ss==0){
				dir+='U';
			}
			if(it.ff==1 && it.ss==0){
				dir+='D';
			}
		}
		// debug(v,dir);
		x=p.ff;
		y=p.ss;
		bool vis2[55][55];
		mem(vis2,false);
		for(int i=1;i<=50;i++){
			for(int j=1;j<=50;j++){
				vis2[i][j]=vis[i][j];
			}
		}
		ll sum=0;
		string path="";
		while(1){
			sum+=b[x][y];
			// debug(b[x][y]);
			vis2[x][y]=true;
			if(m[a[x][y]]==2){
				for(int i=0;i<4;i++){
					if(a[x+v[i].ff][y+v[i].ss]==a[x][y]){
						vis2[x+v[i].ff][y+v[i].ss]=true;
						// cout<<x+fx[i]<<" "<<y+fy[i]<<endl;
						break;
					}
				}
			}
			int f=0;
			for(int i=0;i<4;i++){
				if(!vis2[x+v[i].ff][y+v[i].ss] && b[x+v[i].ff][y+v[i].ss]>=0){
					f=1;
					x=x+v[i].ff;
					y=y+v[i].ss;
					path+=dir[i];
					break;
				}
			}
			if(!f){
				break;
			}
		}
		ans2.pb({sum,path});
	}while(next_permutation(all(v)));
	sort(all(ans2),cmp);
	// for(auto it:ans2){
		// cout<<it.ff<<" "<<it.ss<<endl;
	// }
	cout<<ans[0].ss<<ans2[0].ss;
}
int main(){
	start();
	int t=1;
	// cin>>t;
	for(int tc=1;tc<=t;tc++){
		// time__("solve"){
			// google(tc);
			solve(tc); 
                // }
	}
        return 0;
}
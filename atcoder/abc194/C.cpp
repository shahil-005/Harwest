// Author: shahil_005
// Time: 2021-03-06 17:40:55
// Problem: C - Squared Error
// Contest: AtCoder - AtCoder Beginner Contest 194
// URL: https://atcoder.jp/contests/abc194/tasks/abc194_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
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

//Rands:
uint64_t gen(int k){	//for numbers close to constraints
	uint64_t num=rand();
	num = (num << 32) | rand();
	string s1="",s2="1";
	for(int j=1;j<=k;j++){s1+='9';}
	for(int j=1;j<=k-1;j++){s2+='0';}
	uint64_t x=stoi(s1);
	uint64_t y=stoi(s2);
	num = (num % (x - y)) + y;
	return num;
}
template <typename T>	
T rnd(T a, T b){
    	return a + rand() % (b - a + 1);
}
template <typename T>
T rnd2(T mod) {
	T t = rand() % mod;
	t = (1ll*t*RAND_MAX + rand()) % mod;
	return t;
}
inline int rnd3(int mod) {
	return (((long long )rand() << 15) + rand()) % mod;
}
int rnd4(int l, int r) {
  int v = (rand() << 15) ^ rand();
  v %= r - l + 1;
  return v + l;
}
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
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	srand(time(NULL));
}
ll power(ll x,ll y){if(y == 0){return 1;} ll p = power(x, y/2); p = (p * p); return (y%2 == 0)? p : (x * p);}  
ll powm(ll x,ll y,ll m){ll ans=1,r=1;x%=m;while(r>0&&r<=y){if(r&y){ans*=x;ans%=m;} r<<=1;x*=x;x%=m;}return ans;}   
ll gcd(ll a,ll b) { if (b == 0){return a;} return gcd(b, a % b);}  
ll lcm(ll a,ll b){ll lar = max(a, b);ll small = min(a, b);for (ll i = lar; ; i += lar) { if (i % small == 0){ return i;} } }
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b) {  return (a.ss<b.ss); }
bool sortbydec(const pair<ll,ll> &a, const pair<ll,ll> &b) {  return (a.ff>b.ff); }
void dex(int a){ if(a==1){cout<<"YES";} if(a==2){cout<<"NO";} if(a==3){cout<<"Yes";} if(a==4){cout<<"No";}}
// void line(ll x){while(x--){cout<<"-";}cout<<endl;}
bool overflow(long double a, long double b){return a * b > 1e18 + 10;}
ll mod(ll a,ll b){return ((a%b)+b)%b;}
ll mul(ll a, ll b,ll mod){  return ((a * 1ll * b)+mod)%mod;}
ll modmul(ll a,ll b,ll mod) {ll res=0;a%= mod;while(b){if(b&1)res=(res+a)%mod;a=(2*a)%mod;b>>=1;}return res;}
ll sum(ll a, ll b,ll mod){  return (a + b) % mod;} 
const long long N=(long long)(1e5+1);
const long long MOD=(long long)(1e9+7);
const long long inf=(long long)(1e18);
void solve(int tc)
{
	ll n;
	cin>>n;
	ll a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ll b[n+1];
	b[n]=0;
	for(int i=n-1;i>=1;i--){
		b[i]=b[i+1]+a[i+1];
	}
	// arr_(b,1,n);
	ll sum=0;
	for(int i=1;i<=n;i++){
		sum+=(a[i]*b[i]);
	}
	sum=sum*(-2);
	// debug(sum);
	for(int i=1;i<=n;i++){
		if(i==1){
			sum+=((n-1)*power(a[i],2));
		}
		else{
			sum+=((n-1)*power(a[i],2));
		}
	}
	cout<<sum;
	
}
int main(){
	start();
	int t=1;
	// cin>>t;
	for(int tc=1;tc<=t;tc++){
		time__("solve"){
			// google(tc);
			solve(tc); 
                }
	}
        return 0;
}
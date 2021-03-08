#include <bits/stdc++.h>
using namespace std;
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
ll modsum(ll a, ll b,ll mod){  return (a + b) % mod;} 
const long long N=(long long)(1e5+1);
const long long MOD=(long long)(1e9+7);
const long long inf=(long long)(1e9);
ll n;
ll x[N],y[N];
vector< pair < pll, pair < pll , pll > > >v(N);
void solve(int tc)
{
	cin>>n;
	ll r[n+1];
	ll sum=0;
	
	for(int i=1;i<=n;i++){
		cin>>x[i]>>y[i]>>r[i];
		// cout<<x[i]<<" "<<y[i]<<" "<<x[i]+1<<" "<<y[i]+1<<endl;
		v[i]={{r[i],i},{{x[i],y[i]},{x[i]+1,y[i]+1}}};
		swap(v[i].ff.ff,v[i].ff.ss);
		
		// ld t1=((2*inf)/r[i]);
		// ld t2=inf/(r[i]*r[i]);
		// sum+=(t1-t2);
	}
	// cout<<(ll)round(sum);
	// for(int i=1;i<=n;i++){
		// cout<<v[i].ff.ff<<" "<<v[i].ff.ss<<" : ";
		// cout<<v[i].ss.ff.ff<<" "<<v[i].ss.ff.ss<<" "<<v[i].ss.ss.ff<<" "<<v[i].ss.ss.ss<<endl;
	// }
	// sort(v.begin()+1,v.begin()+n+1);
	// reverse(v.begin()+1,v.begin()+n+1);
	shuffle(v.begin()+1,v.begin()+n+1,rng);
	// for(int i=1;i<=n;i++){
		// cout<<v[i].ff.ff<<" "<<v[i].ff.ss<<" : ";
		// cout<<v[i].ss.ff.ff<<" "<<v[i].ss.ff.ss<<" "<<v[i].ss.ss.ff<<" "<<v[i].ss.ss.ss<<endl;
	// }
	ll x1,x2,y1,y2,prev;
	for(int i=1;i<=n;i++){
		// if(v[i].ff.ss==1 || v[i].ff.ss==28 || v[i].ff.ss==3){
			// debug(v[i]);
		// }
		ll cs;
		set<ll> ss;
		while(sz(ss)<=3){
			cs=rng2(1,4);
			if(ss.find(cs)!=ss.end()){
				continue;
			}
			ss.insert(cs);
			if(cs==3){
				x1=v[i].ss.ff.ff;
				x2=v[i].ss.ss.ff;
				y1=v[i].ss.ff.ss;
				y2=v[i].ss.ss.ss;
				prev=0;
				
				while(y1>=0){
					if(y1==0){
						break;
					}
					
					ll f=0;
					ll f2=-1;
					for(int j=1;j<=n;j++){
						ll u1=v[i].ss.ff.ff;
						ll u2=v[i].ss.ss.ff;
						ll u3=v[j].ss.ff.ff;
						ll u4=v[j].ss.ss.ff;
						if(i!=j){
							ll t1=v[j].ss.ff.ss;
							ll t2=v[j].ss.ss.ss;
							
							if(y1==t2){
								f2=max(f2,t2);
							}
							// if(y1>t1 && y1<t2){
								// f=1;
								// break;
							// }
		// 					
							if(y1==t2 && ( (u1>u3 && u1<u4) || (u2>u3 && u2<u4) || (u3>u1 && u3<u2) || (u4>u1 && u4<u2) || (u1==u3 && u2==u4)) ){
								// f2=max(f2,t2);
								f2=y1;
							}
							if(y1>t1 && y1<t2 && ( (u1>u3 && u1<u4) || (u2>u3 && u2<u4) || (u3>u1 && u3<u2) || (u4>u1 && u4<u2) || (u1==u3 && u2==u4)) ){
								f=1;
								break;
							}
						}
					}
					if(f==0){
						if(f2!=-1){
							v[i].ss.ff.ss=f2;
							break;
						}
						v[i].ss.ff.ss=y1;
					}
					else{
						break;
					}
					if(y1==0){
						break;
					}
					ll area=(x2-x1)*(y2-y1);
					if(area==r[i]){
						break;
					}
					if(prev<r[i] && area>r[i]){
						break;
						
					}
					prev=area;
					y1--;
				}
			}
			if(cs==4){
				prev=0;
				x1=v[i].ss.ff.ff;
				x2=v[i].ss.ss.ff;
				y1=v[i].ss.ff.ss;
				y2=v[i].ss.ss.ss;
				while(y2<=9999){
					if(y2==9999){
						break;
					}
					
					ll f=0;
					ll f2=INT_MAX;
					for(int j=1;j<=n;j++){
						ll u1=v[i].ss.ff.ff;
						ll u2=v[i].ss.ss.ff;
						ll u3=v[j].ss.ff.ff;
						ll u4=v[j].ss.ss.ff;
						if(i!=j){
							ll t1=v[j].ss.ff.ss;
							ll t2=v[j].ss.ss.ss;
		// 					
							// if(y2==t1){
								// f2=min(f2,t1);
							// }
							// if(y2>t1 && y2<t2){
								// f=1;
								// break;
							// }
		// 					
							if(y2==t1 && ( (u1>u3 && u1<u4) || (u2>u3 && u2<u4) || (u3>u1 && u3<u2) || (u4>u1 && u4<u2) || (u1==u3 && u2==u4)) ){
								// f2=min(f2,t1);
								f2=y2;
							}
							if(y2>t1 && y2<t2  && ( (u1>u3 && u1<u4) || (u2>u3 && u2<u4) || (u3>u1 && u3<u2) || (u4>u1 && u4<u2) || (u1==u3 && u2==u4)) ){
								f=1;
								break;
							}
						}
					}
					if(f==0){
						if(f2!=INT_MAX){
							v[i].ss.ss.ss=f2;
							break;
						}
						v[i].ss.ss.ss=y2;
					}
					else{
						break;
					}
					if(y2==9999){
						break;
					}
					ll area=(x2-x1)*(y2-y1);
					if(area==r[i]){
						break;
					}
					if(prev<r[i] && area>r[i]){
						break;
					}
					prev=area;
					y2++;
				}
			}
			if(cs==1){
				prev=0;
				x1=v[i].ss.ff.ff;
				x2=v[i].ss.ss.ff;
				y1=v[i].ss.ff.ss;
				y2=v[i].ss.ss.ss;
				while(x1>=0){
					if(x1==0){
						break;
					}
					
					ll f=0;
					ll f2=-1;
					for(int j=1;j<=n;j++){
						ll u1=v[i].ss.ff.ss;
						ll u2=v[i].ss.ss.ss;
						ll u3=v[j].ss.ff.ss;
						ll u4=v[j].ss.ss.ss;
						if(i!=j){
							ll t1=v[j].ss.ff.ff;
							ll t2=v[j].ss.ss.ff;
							// if(i==1){
								// debug(i,j,x1,u1,u2,u3,u4,t1,t2);
							// }
							
							// if(x1==t2){
								// f2=max(f2,t2);
							// }
							// if(x1>t1 && x1<t2){
								// f=1;
								// break;
							// }
								
							if(x1==t2  && ( (u1>u3 && u1<u4) || (u2>u3 && u2<u4) || (u3>u1 && u3<u2) || (u4>u1 && u4<u2) || (u1==u3 && u2==u4))){
								// f2=max(f2,t2);
								f2=x1;
							}
							if(x1>t1 && x1<t2  && ( (u1>u3 && u1<u4) || (u2>u3 && u2<u4) || (u3>u1 && u3<u2) || (u4>u1 && u4<u2) || (u1==u3 && u2==u4)) ){
								f=1;
								break;
							}
						}
					}
					if(f==0){
						if(f2!=-1){
							v[i].ss.ff.ff=f2;
							break;
						}
						else{
							v[i].ss.ff.ff=x1;
						}
						
					}
					else{
						break;
					}
					if(x1==0){
						break;
					}
					ll area=(x2-x1)*(y2-y1);
					if(area==r[i]){
						break;
					}
					if(prev<r[i] && area>r[i]){
						break;
					}
					prev=area;
					x1--;
				}
			}
			if(cs==2){
				prev=0;
				x1=v[i].ss.ff.ff;
				x2=v[i].ss.ss.ff;
				y1=v[i].ss.ff.ss;
				y2=v[i].ss.ss.ss;
				while(x2<=9999){
					if(x2==9999){
						break;
					}
					
					if(i==19){
						// debug(i,x2);
					}
					ll f=0;
					ll f2=INT_MAX;
					for(int j=1;j<=n;j++){
						ll u1=v[i].ss.ff.ss;
						ll u2=v[i].ss.ss.ss;
						ll u3=v[j].ss.ff.ss;
						ll u4=v[j].ss.ss.ss;
						if(i!=j){
							ll t1=v[j].ss.ff.ff;
							ll t2=v[j].ss.ss.ff;
							
							// if(x2==t1){
								// f2=min(f2,t1);
							// }
							// if(x2>t1 && x2<t2){
								// f=1;
								// break;
							// }
		// 					
							if(x2==t1  && ( (u1>u3 && u1<u4) || (u2>u3 && u2<u4) || (u3>u1 && u3<u2) || (u4>u1 && u4<u2) || (u1==u3 && u2==u4))){
								// f2=min(f2,t1);
								f2=x2;
							}
							if(x2>t1 && x2<t2  && ( (u1>u3 && u1<u4) || (u2>u3 && u2<u4) || (u3>u1 && u3<u2) || (u4>u1 && u4<u2) || (u1==u3 && u2==u4)) ){
								f=1;
								break;
							}
						}
					}
					if(f==0){
						if(f2!=INT_MAX){
							v[i].ss.ss.ff=f2;
							break;
						}
						v[i].ss.ss.ff=x2;
					}
					else{
						break;
					}
					if(x2==9999){
						break;
					}
					ll area=(x2-x1)*(y2-y1);
					if(area==r[i]){
						break;
					}
					if(prev<r[i] && area>r[i]){
						break;
					}
					prev=area;
					x2++;
				}
			}
		}
		
		
		// if(v[i].ff.ss==1 || v[i].ff.ss==28 || v[i].ff.ss==3){
			// debug(v[i]);
			ll area=(x2-x1)*(y2-y1);
			// debug(area);
			// ll t3=min(r[i],area);
			// ll t4=max(r[i],area);
			// ld t1=(2*inf*t3)/t4;
			// ld t2=(inf*t3*t3)/(t4*t4);
			// ld temp=(ld)(((ld)min(area,r[i]))/((ld)max(area,r[i])));
			// debug(temp);
			// temp=1-temp;
			// temp=temp*temp;
			// temp=1-temp;
			// temp=inf*temp;
			// debug(temp);
			// ld cur=1- (1-min())
			// sum+=(ll)round(temp);
			
		// }
		// swap(v[i].ff.ff,v[i].ff.ss);
	}
	// debug(sum);
	sort(v.begin()+1,v.begin()+n+1);
	
	vector< pll> iv;
	for(int i=1;i<=n;i++){
		// cout<<v[i].ff.ff<<" "<<v[i].ff.ss<<" : ";
		cout<<v[i].ss.ff.ff<<" "<<v[i].ss.ff.ss<<" "<<v[i].ss.ss.ff<<" "<<v[i].ss.ss.ss<<endl;
		// iv.pb({v[i].ss.ff.ss,v[i].ss.ss.ss});
	}
	// sort(all(iv));
	// for(auto it:iv){
		// // cout<<it.ff<<" "<<it.ss<<endl;
	// }
// 	
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
//g++ -Wall
//g++ -static -DONLINE_JUDGE -Wl,--stack=268435456 -O2 -std=c++17
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("-Ofast")
#pragma GCC optimize("trapv")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("-O2")
//#pragma GCC target("AVX")
// #define fastIO                  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl                    '\n'
#define rep()                   for(LL i = 0 ; i < n ; i++)
#define f(i,s,n)                for(LL i = s ; i < n ; i++)
#define fe(i,s,n)               for(LL i = s ; i <= n ; i++)
#define rfe(i,s,n)              for(LL i = s ; i >= n ; i--)
#define each(it,x)		for(auto &it:x)
#define f2(it,v)                for(it = v.begin(); it != v.end(); ++it)
#define fori(it, x)             for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define TCs(x)                  LL x; cin>>x; while(x--)
#define TC(x)                   LL x=1; while(x--)
#define google(x)		cout<<"Case #"<<x<<": ";
#define mp                      make_pair
#define pb                      push_back
#define pf                      push_front
#define ff                      first
#define ss                      second
#define all(v)                  v.begin(), v.end()
#define mem(a,x)                memset(a,x,sizeof(a))
#define imin                    INT_MIN
#define imax                    INT_MAX
#define sz(x)       		(LL)x.size()
#define ps(x)                   std::cout << std::fixed; std::cout << std::setprecision(x);
#define clz(a)                  __builtin_clz(a) // count leading zeroes (geeksforgeeks.org/builtin-functions-gcc-compiler/)
#define ctz(a)                  __builtin_ctz(a) // count trailing zeroes
#define popc(a)                 __builtin_popcount(a) // count set bits (for ints only diff for ll)
#define d1(x)                   cout<<#x<<": "<<x<<endl
#define d2(x, y)                cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define d3(x, y, z)             cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define d4(a, b, c, d)          cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define d5(a, b, c, d, e)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define d6(a, b, c, d, e, f)    cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

typedef string                  S;
typedef long long               LL;
typedef long double             LD;
typedef unsigned long long      ULL;
typedef vector<long long>       VL;
typedef vector<VL>              VVL;
typedef vector<string>          VS;
typedef vector<char>            VC;
typedef pair<LL,LL>             PLL;
typedef pair<string,LL>         PSL;
typedef pair<LL,string>         PLS;
typedef pair<char,LL>           PCL;
typedef pair<LL,char>           PLC;
typedef pair<string,string>     PSS;
typedef pair<char,char>         PCC;
typedef vector<PLL>             VPLL;
typedef vector<PSL>             VPSL;
typedef vector<PLS>             VPLS;
typedef vector<PCL>             VPCL;
typedef vector<PLC>             VPLC;
typedef vector<PSS>             VPSS;
typedef vector<PCC>             VPCC;
typedef map<LL,LL>              MLL;
typedef map<string,LL>          MSL;
typedef map<LL,string>          MLS;
typedef map<char,LL>            MCL;
typedef map<LL,char>            MLC;
typedef map<char,char>          MCC;
typedef map<string,string>      MSS;
typedef set<LL>                 SL;
typedef set<string>             SS;
typedef set<char>               SC;
typedef priority_queue<LL>	PQLL;
typedef priority_queue<LL,VL,greater<LL>>	mPQLL;

//Time
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)

#define time__(d) \
    for ( \
        auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
        blockTime.second; \
        debug("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
    )           
// #define time__(d) for(long blockTime = 0; (blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%s time : %.4fs", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))

//Functions
LL power(LL x,LL y){if(y == 0){return 1;} LL p = power(x, y/2); p = (p * p); return (y%2 == 0)? p : (x * p);}  
LL powm(LL x,LL y,LL m){LL ans=1,r=1;x%=m;while(r>0&&r<=y){if(r&y){ans*=x;ans%=m;} r<<=1;x*=x;x%=m;}return ans;}   
LL gcd(LL a,LL b) { if (b == 0){return a;} return gcd(b, a % b);}  
LL lcm(LL a,LL b){LL lar = max(a, b);LL small = min(a, b);for (LL i = lar; ; i += lar) { if (i % small == 0){ return i;} } }
bool sortbysec(const pair<LL,LL> &a, const pair<LL,LL> &b) {  return (a.ss<b.ss); }
bool sortbydec(const pair<LL,LL> &a, const pair<LL,LL> &b) {  return (a.ff>b.ff); }
void dex(int a){ if(a==1){cout<<"YES";} if(a==2){cout<<"NO";} if(a==3){cout<<"Yes";} if(a==4){cout<<"No";}}
void line(LL x){fe(i,1,x){cout<<"-";}cout<<endl;}
bool overflow(long double a, long double b){return a * b > 1e18 + 10;}
LL mul(LL a, LL b,LL mod){  return ((a * 1LL * b)+mod)%mod;}
LL sum(LL a, LL b,LL mod){  return (a + b) % mod;}
const long long N=(long long)(1e5+1);
const long long MOD=(long long)(1e9+7);
const long long INF=(long long)(2e18);

void solve(LL tc)
{
	//Similar to CSES Restraunt Customers
	LL n,C;
	cin>>n>>C;
	LL a[n+1],b[n+1],c[n+1];
	fe(i,1,n){
		cin>>a[i]>>b[i]>>c[i];
	}
	vector< pair< LL, pair<bool,LL> > > v;
	fe(i,1,n){
		v.pb({a[i],{false,i}});
		v.pb({b[i]+1,{true,i}});
	}
	sort(all(v));
	// each(it,v){
		// cout<<it.ff<<" "<<it.ss.ff<<" "<<it.ss.ss<<endl;
	// }
	LL prev=0;
	LL ans=0;
	LL cp=0;
	
	f(i,0,sz(v)){
		LL cur=v[i].ff;
		
		ans+= min(cp,C)*(cur-prev);
		// d4(i,cur,prev,cp);
		if(v[i].ss.ff==0) cp+= c[v[i].ss.ss];
		if(v[i].ss.ff==1) cp-= c[v[i].ss.ss];
		
		prev=cur;
	}
	cout<<ans;
}
/*
6 20
5 8 2
1 5 4
5 5 6
6 10 8
4 6 10
2 6 12
*/
int main()
{
// #ifndef ONLINE_JUDGE

        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
// #endif
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        LL cnt=1;
        TC(t){
        	// google(cnt);
                time__("solve"){
	                solve(cnt);
	        }
                cnt++;
        }
        return 0;
}

//Use LLONG_MAX & LLONG_MIN 
//LL limit : (2^63-1) ,log10(2^63-1) = 18.96
//ULL limit : (2^64) ,log10(2^64) = 19.26
//Alternate way for overflow check: http://bit.ly/3pnCeOs
#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define endl        '\n'
//#define IOS       ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define c0(x)       cout<<(x)<<" "
#define c1(x)       cout<<(x)<<endl
#define rep         for(ll i = 0 ; i < n ; i++)
#define f(i,s,n)    for(ll i = s ; i < n ; i++)
#define fe(i,s,n)   for(ll i = s ; i <= n ; i++)
#define rfe(i,s,n)  for(ll i = s ; i >= n ; i--)
#define TCs(x)      ll x; cin>>x; while(x--)
#define TC(x)       ll x=1; while(x--)
#define f2(it,v)    for(it = v.begin(); it != v.end(); ++it)
#define auto(m)     for(auto &it:m)
#define ip(n,a)     ll n;cin>>n;ll a[n];rep{cin>>a[i];}
#define ip2(n,a,b)  ll n;cin>>n;ll a[n];ll b[n];rep{cin>>a[i];} rep{cin>>b[i];}
//#define ip(n,a)   ll n;cin>>n;ll a[n];rep{cin>>a[i];}
#define op(n,a)     f(i,0,n){cout<<a[i]<<" ";}
#define i2p(n,k,a)  ll n,k;cin>>n>>k;ll a[n];rep{cin>>a[i];}
//#define ll        long long
//#define ld        long double
//#define vl        vector<ll>
#define mll         map<ll, ll>
#define mcl         map<char, ll>
#define msl         map<string, ll>
#define mp          make_pair
#define pii         pair<ll, ll>
#define pb          push_back
#define ff          first
#define ss          second
#define all(v)      v.begin(), v.end()
#define vsort(v)    sort(all(v))
#define vrsort(v)   reverse(all(v))
#define Max(x,y,z)  max(x,max(y,z))
#define Min(x,y,z)  min(x,min(y,z))
#define F           first
#define S           second
//#define ps(x,y)     fixed<<setprecision(y)<<x
//#define ps(x)       std::cout << std::fixed; std::cout << std::setprecision(x);
#define clz(a)      __builtin_clz(a) // count leading zeroes (geeksforgeeks.org/builtin-functions-gcc-compiler/)
#define ctz(a)      __builtin_ctz(a) // count trailing zeroes
//#define ctz(a)      __builtin_ctzll(a)
#define popc(a)     __builtin_popcount(a) // count set bits (for ints only diff for ll)
#define GCD(A,B)    __gcd(A,B)
//#define LCM(A,B)    boost::math::lcm(A,B)
//#define COUNT(v,x)    count(all(v),x)
//#define COUNT(v,x)    count(all(s),'x')

//Typedefs:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef long long ll;
typedef long double ld;
//typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef pair<string,string> pss;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<ll, ll> pairs;
//typedef vector<pair<ll, pair<ll, ll>>> vppl;

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);
//Functions:----------------------------------------------------------------------------------------------------------------------------------------------------------------------
inline string IntToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}
//....................................................................................//
inline ll StringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}
//....................................................................................//
inline string GetString(void)
{
    char x[1000005];
    scanf("%s", x);
    string s = x;
    return s;
}
//....................................................................................//
inline string uppercase(string s)
{
    int n = s.size();
    f(i,0, n)
    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] - 'a' + 'A';
    return s;
}
//....................................................................................//
inline string lowercase(string s)
{
    int n = s.size();
    f(i,0,n)
    if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = s[i] - 'A' + 'a';
    return s;
}
//....................................................................................//
inline void OPEN(string s)
{
#ifndef TESTING
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
#endif
}
//....................................................................................//

template<typename T, typename U>            // Same as max_val = max (max_val, val)
static inline void amin(T &x, U y)          // Same as min_val = min (min_val,val)
{
    if (y < x)                              //maximum = amax(max_val, val);
        x = y;                              //minimum = amin (min_val, val);
}
//....................................................................................//
template<typename T, typename U>
static inline void amax(T &x, U y)
{
    if (x < y)
        x = y;
}
//....................................................................................//
ll power(ll x,ll y)
{
    if (y == 0)
        return 1;
    ll p = power(x, y/2) % MOD;
    p = (p * p) % MOD;

    return (y%2 == 0)? p : (x * p) % MOD;
}
//....................................................................................//
int lcm(ll a, ll b)
{
    ll lar = max(a, b);
    ll small = min(a, b);
    for (ll i = lar; ; i += lar) {
        if (i % small == 0)
            return i;
    }
}
//....................................................................................//
int bsearch(ll arr[],ll l,ll r,ll x) 
{ 
    while (l <= r) 
    { 
        ll m = l + (r - l) / 2; 
        if (arr[m] == x){ 
            return m; 
        }
        if (arr[m] < x){
            l = m + 1; 
        }
        else
            r = m - 1; 
    } 
    return -1; 
}
//....................................................................................//
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%m; b/=2; a=(a*a)%m; } return ans%m; }
//int bsearch(ll arr[], ll l, ll r, ll x){while (l <= r){ll m = l + (r - l) / 2;if(arr[m] == x){return m;}if(arr[m] < x){l = m + 1;}else{r = m - 1;}}}
//Solve:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
 
void solve()
{
        
        ll s,w;
        cin>>s>>w;
        if(w>=s)
        {
                cout<<"unsafe";
        }
        else
        {
                cout<<"safe";
        }
 
        
















}

int main ()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif


        TC(t)
        {
                solve();
        }
        return 0;
}
